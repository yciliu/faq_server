#include "gate_client.h"
#include "actions_mananger.h"
#include "gate_application.h"
#include "message_define.h"
#include "db_message.pb.h"
#include "sql_define.h"
#include "db_connection.h"
#include "client_service.h"
#include "logic_player.h"
#include "player_manager.h"

gate_client::~gate_client()
{
//    Singleton<client_manager>::GetInstance()->remove_session(_role_id);
}

int gate_client::process_msg(packet_info* info)
{
    VLOG(2)<<"Recive message type "<<info->type;
    Singleton<actions_mananger>::GetInstance()->do_action(info->type,info,this);
    return 1;
}

void gate_client::on_error(bufferevent* ev)
{
    LOG(INFO)<<"gate client "<<_role_id<<" disconnection ";
    if( _player_info != NULL )
    {
        _player_info->OnLogout(); 
        delete _player_info;
        _player_info = NULL;
    }
    LogicManagerPtr->RemovePlayer(_role_id);
    Singleton<client_manager>::GetInstance()->remove_session(_role_id);
}

void gate_client::init_timer()
{
   _m_timer.set_owner(this); 
   _m_timer.set_expire(2000); 
}

void gate_client::on_timeout()
{
    //LOG(INFO)<<"without login virfy,kick out";
    //on_error(NULL);
}

void gate_client::init()
{
    // gate_application::db_conn_->build_query(DbOperateType::MSG_DB_GET_USER_INFO, LOAD_USER_INFO); 
    _player_info = new LogicPlayer();
    _player_info->BindPlayer(this);
}


#ifndef _GATE_CLIENT_H_
#define _GATE_CLEINT_H_
#include "socket.h"
#include "timer.h"

class MysqlResultRow;
class db_job;
class data_worker;
class db_client: public socket_client
{
    public:
        //bufferevent* bev,int socket,sockaddr_in& addr
        db_client(bufferevent* bev,evutil_socket_t socket,sockaddr_in* addr
                ):socket_client(bev,socket,addr)
        {
            LOG(INFO)<<"new socket connect"; 
        }
        virtual ~db_client(){
        };
        void init(int db_work);

        void init_timer();


    public:
        int process_msg(packet_info* info);
        void on_error(bufferevent* ev);
        void on_timeout();
    protected:
        //        int work_job_left();
        //       void release();
    public:
        void do_data_call(MysqlResult& result,db_job* job);
    private:
        template_timer<db_client,&db_client::on_timeout>    _m_timer;
};

#endif

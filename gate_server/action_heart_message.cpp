#include "packet.h"
#include "game_packet.h"
#include "actions_mananger.h"
#include "template_message.h"
#include "message.pb.h"
#include "message_define.h"

class heart_message_action: public template_message<ClientHeartBeatRequest,CS_MSG_HEART_BEAT_REQ>  
{
    public:
        int process_message(ClientHeartBeatRequest *request)
        {
            return 1;
        }

}g_heart_message_action;


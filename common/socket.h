#ifndef _SOCKET_H_
#define _SOCKET_H_
#include "packet.h"
#include "head.h"
#include "reactor_core.h"

void common_read_cb(struct bufferevent* ev,void *user_data);
void common_event_cb(struct bufferevent* ev,short int,void *user_data);
void common_write_cb(struct bufferevent* ev,void *user_data);
class socket_client
{
    public:
        socket_client(bufferevent* bev,evutil_socket_t socket,sockaddr_in* addr):_bev(bev),_socket(socket)
        {
           _ip = inet_ntoa(addr->sin_addr);     
           _port = addr->sin_port;
        }

        socket_client()
        {
            _bev = Singleton<ReactorCore>::GetInstance()->GetNewSocketEvent();
        }

        virtual ~socket_client();
        int connect_to(const char*,int);
        int send_msg(const char* buffer,int size);
        int check_packet_info(packet_info* packet,evbuffer* read_buffer);
        virtual int process_msg(packet_info* msg_packet)=0;
    private:
    public:
        void init_cb();

    public:
        int on_read(bufferevent* bev);
        int on_write(bufferevent* bev);
        virtual int on_error(bufferevent* bev) = 0;

    private:
        bufferevent* _bev;
        int          _socket;
    protected:
        std::string  _ip;
        int          _port;
};

#endif

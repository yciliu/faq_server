#ifndef _SERVICE_H_
#define _SERVICE_H_
#include "head.h"

class service
{
    public:
        service(const char* ip,int port):_ip(ip),_port(port)
        {
        }
        virtual ~service(){}
        virtual int on_accept(struct bufferevent* event,evutil_socket_t fd,struct sockaddr_in* sa) = 0;
        string  get_service_ip()
        {
            return _ip; 
        }

        int  get_service_port()
        {
            return _port; 
        }

    private:
        std::string _ip;
        int         _port;
};

#endif
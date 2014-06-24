#include "gate_application.h"
#include "client_service.h"
#include "daemon.h"

gate_application::gate_application()
{

}

gate_application::~gate_application()
{

}

bool gate_application::init()
{
    LOG(INFO)<<"init gate_application...";
    client_service_ = new client_service("127.0.0.1",9999);
    add_service(client_service_);
    return true;
}

DEFINE_bool(daemon,true,"if start not daemon");
int main(int argc,char** argv)
{
 	google::ParseCommandLineFlags(&argc,&argv,true);		
	google::InitGoogleLogging(argv[0]);
	if(FLAGS_daemon){
		if(init_daemon() == -1){
			VLOG(0)<<"ERROR OF DAEMON";
		}
	}
	   
    gate_application app;
    app.init();
    app.start_service();
    return 0;
}


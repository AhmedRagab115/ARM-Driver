

#ifndef PORT_DRIVER_H_
#define PORT_DRIVER_H_

# include "Config.h"

typedef enum {Init_In=0,Init_OUT}Port_Dir;

void Dio_Init(PortType port,ChannelType pin,Port_Dir dir);


#endif


#ifndef DIO_DRIVER_H_
#define DIO_DRIVER_H_


# include "Config.h"






/*****************************************************************************
* Function Name: Dio_ReadChannel
* Purpose      : Read value of specific pin in port 
* Parameters   : pin  (pin no. want to read)  , port ( port no. you want to read its pin)
* Return value : uint8
*****************************************************************************/

uint8 Dio_ReadChannel(ChannelType pin,PortType port);

/*****************************************************************************
* Function Name: Dio_ReadPort
* Purpose      : Read value of port  
* Parameters   : port  (read port value)
* Return value : uint8
*****************************************************************************/
uint8 Dio_ReadPort(PortType port);

/*****************************************************************************
* Function Name: Dio_WriteChannel
* Purpose      : write value to specific pin in port  
* Parameters   :pin  (pin no. want to write to it)  , port ( port no. you want towite to its pin) data  (data to be written)
* Return value : void
*****************************************************************************/

void Dio_WriteChannel( ChannelType pin,PortType port,LevelType data);

/*****************************************************************************
* Function Name: Dio_WriteChannel
* Purpose      : write value to specific port  
* Parameters   : port ( port no. you want towite to ) data  (data to be written)
* Return value : void
*****************************************************************************/

void Dio_WritePort(PortType port,uint8 data);


#endif

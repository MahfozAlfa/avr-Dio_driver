#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_


#define PIN0				0
#define PIN1				1
#define PIN2				2
#define PIN3				3
#define PIN4				4
#define PIN5				5
#define PIN6				6
#define PIN7				7




#define PORTA				0
#define PORTB				1
#define PORTC				2
#define PORTD				3

#define INPUT				0
#define OUTPUT				1

#define HIGH				1
#define LOW					0

#define ERROR				0xff


void DIO_vidSetPinDirection(u8 Cpy_u8PortId , u8 Cpy_u8PinNo , u8 Cpy_u8PinDir);

void DIO_vidSetPinValue(u8 Cpy_u8PortId , u8 Cpy_u8PinNo , u8 Cpy_u8PinValue);

u8 DIO_u8GetPinValue(u8 Cpy_u8PortId , u8 Cpy_u8PinNo);



void DIO_vidSetPortDirection(u8 Cpy_u8PortId , u8 Cpy_u8ProtDir);

void DIO_vidSetPortValue(u8 Cpy_u8PortId , u8 Cpy_u8PortValue);

u8 DIO_u8GetPortValue(u8 Cpy_u8PortId);



#endif

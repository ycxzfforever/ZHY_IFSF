
#ifndef __GPIO_9260_9G20_H__
#define __GPIO_9260_9G20_H__


#define DEV_GPIO "/dev/atmel_gpio"


#define GPIO_IOC_MAGIC   'G'
#define IOCTL_GPIO_SETOUTPUT              _IOW(GPIO_IOC_MAGIC, 0, int)                   
#define IOCTL_GPIO_SETINPUT               _IOW(GPIO_IOC_MAGIC, 1, int)
#define IOCTL_GPIO_SETVALUE               _IOW(GPIO_IOC_MAGIC, 2, int) 
#define IOCTL_GPIO_GETVALUE    		  _IOR(GPIO_IOC_MAGIC, 3, int)


typedef struct {
	int pin;
	int data;
	int usepullup;
}at91_gpio_arg;


#define PIN_BASE	32	

#define MAX_GPIO_BANKS		5

#define	AT91_PIN_PA0	(PIN_BASE + 0x00 + 0)
#define	AT91_PIN_PA1	(PIN_BASE + 0x00 + 1)
#define	AT91_PIN_PA2	(PIN_BASE + 0x00 + 2)
#define	AT91_PIN_PA3	(PIN_BASE + 0x00 + 3)
#define	AT91_PIN_PA4	(PIN_BASE + 0x00 + 4)
#define	AT91_PIN_PA5	(PIN_BASE + 0x00 + 5)
#define	AT91_PIN_PA6	(PIN_BASE + 0x00 + 6)
#define	AT91_PIN_PA7	(PIN_BASE + 0x00 + 7)
#define	AT91_PIN_PA8	(PIN_BASE + 0x00 + 8)
#define	AT91_PIN_PA9	(PIN_BASE + 0x00 + 9)
#define	AT91_PIN_PA10	(PIN_BASE + 0x00 + 10)
#define	AT91_PIN_PA11	(PIN_BASE + 0x00 + 11)
#define	AT91_PIN_PA12	(PIN_BASE + 0x00 + 12)
#define	AT91_PIN_PA13	(PIN_BASE + 0x00 + 13)
#define	AT91_PIN_PA14	(PIN_BASE + 0x00 + 14)
#define	AT91_PIN_PA15	(PIN_BASE + 0x00 + 15)
#define	AT91_PIN_PA16	(PIN_BASE + 0x00 + 16)
#define	AT91_PIN_PA17	(PIN_BASE + 0x00 + 17)
#define	AT91_PIN_PA18	(PIN_BASE + 0x00 + 18)
#define	AT91_PIN_PA19	(PIN_BASE + 0x00 + 19)
#define	AT91_PIN_PA20	(PIN_BASE + 0x00 + 20)
#define	AT91_PIN_PA21	(PIN_BASE + 0x00 + 21)
#define	AT91_PIN_PA22	(PIN_BASE + 0x00 + 22)
#define	AT91_PIN_PA23	(PIN_BASE + 0x00 + 23)
#define	AT91_PIN_PA24	(PIN_BASE + 0x00 + 24)
#define	AT91_PIN_PA25	(PIN_BASE + 0x00 + 25)
#define	AT91_PIN_PA26	(PIN_BASE + 0x00 + 26)
#define	AT91_PIN_PA27	(PIN_BASE + 0x00 + 27)
#define	AT91_PIN_PA28	(PIN_BASE + 0x00 + 28)
#define	AT91_PIN_PA29	(PIN_BASE + 0x00 + 29)
#define	AT91_PIN_PA30	(PIN_BASE + 0x00 + 30)
#define	AT91_PIN_PA31	(PIN_BASE + 0x00 + 31)

#define	AT91_PIN_PB0	(PIN_BASE + 0x20 + 0)
#define	AT91_PIN_PB1	(PIN_BASE + 0x20 + 1)
#define	AT91_PIN_PB2	(PIN_BASE + 0x20 + 2)
#define	AT91_PIN_PB3	(PIN_BASE + 0x20 + 3)
#define	AT91_PIN_PB4	(PIN_BASE + 0x20 + 4)
#define	AT91_PIN_PB5	(PIN_BASE + 0x20 + 5)
#define	AT91_PIN_PB6	(PIN_BASE + 0x20 + 6)
#define	AT91_PIN_PB7	(PIN_BASE + 0x20 + 7)
#define	AT91_PIN_PB8	(PIN_BASE + 0x20 + 8)
#define	AT91_PIN_PB9	(PIN_BASE + 0x20 + 9)
#define	AT91_PIN_PB10	(PIN_BASE + 0x20 + 10)
#define	AT91_PIN_PB11	(PIN_BASE + 0x20 + 11)
#define	AT91_PIN_PB12	(PIN_BASE + 0x20 + 12)
#define	AT91_PIN_PB13	(PIN_BASE + 0x20 + 13)
#define	AT91_PIN_PB14	(PIN_BASE + 0x20 + 14)
#define	AT91_PIN_PB15	(PIN_BASE + 0x20 + 15)
#define	AT91_PIN_PB16	(PIN_BASE + 0x20 + 16)
#define	AT91_PIN_PB17	(PIN_BASE + 0x20 + 17)
#define	AT91_PIN_PB18	(PIN_BASE + 0x20 + 18)
#define	AT91_PIN_PB19	(PIN_BASE + 0x20 + 19)
#define	AT91_PIN_PB20	(PIN_BASE + 0x20 + 20)
#define	AT91_PIN_PB21	(PIN_BASE + 0x20 + 21)
#define	AT91_PIN_PB22	(PIN_BASE + 0x20 + 22)
#define	AT91_PIN_PB23	(PIN_BASE + 0x20 + 23)
#define	AT91_PIN_PB24	(PIN_BASE + 0x20 + 24)
#define	AT91_PIN_PB25	(PIN_BASE + 0x20 + 25)
#define	AT91_PIN_PB26	(PIN_BASE + 0x20 + 26)
#define	AT91_PIN_PB27	(PIN_BASE + 0x20 + 27)
#define	AT91_PIN_PB28	(PIN_BASE + 0x20 + 28)
#define	AT91_PIN_PB29	(PIN_BASE + 0x20 + 29)
#define	AT91_PIN_PB30	(PIN_BASE + 0x20 + 30)
#define	AT91_PIN_PB31	(PIN_BASE + 0x20 + 31)

#define	AT91_PIN_PC0	(PIN_BASE + 0x40 + 0)
#define	AT91_PIN_PC1	(PIN_BASE + 0x40 + 1)
#define	AT91_PIN_PC2	(PIN_BASE + 0x40 + 2)
#define	AT91_PIN_PC3	(PIN_BASE + 0x40 + 3)
#define	AT91_PIN_PC4	(PIN_BASE + 0x40 + 4)
#define	AT91_PIN_PC5	(PIN_BASE + 0x40 + 5)
#define	AT91_PIN_PC6	(PIN_BASE + 0x40 + 6)
#define	AT91_PIN_PC7	(PIN_BASE + 0x40 + 7)
#define	AT91_PIN_PC8	(PIN_BASE + 0x40 + 8)
#define	AT91_PIN_PC9	(PIN_BASE + 0x40 + 9)
#define	AT91_PIN_PC10	(PIN_BASE + 0x40 + 10)
#define	AT91_PIN_PC11	(PIN_BASE + 0x40 + 11)
#define	AT91_PIN_PC12	(PIN_BASE + 0x40 + 12)
#define	AT91_PIN_PC13	(PIN_BASE + 0x40 + 13)
#define	AT91_PIN_PC14	(PIN_BASE + 0x40 + 14)
#define	AT91_PIN_PC15	(PIN_BASE + 0x40 + 15)
#define	AT91_PIN_PC16	(PIN_BASE + 0x40 + 16)
#define	AT91_PIN_PC17	(PIN_BASE + 0x40 + 17)
#define	AT91_PIN_PC18	(PIN_BASE + 0x40 + 18)
#define	AT91_PIN_PC19	(PIN_BASE + 0x40 + 19)
#define	AT91_PIN_PC20	(PIN_BASE + 0x40 + 20)
#define	AT91_PIN_PC21	(PIN_BASE + 0x40 + 21)
#define	AT91_PIN_PC22	(PIN_BASE + 0x40 + 22)
#define	AT91_PIN_PC23	(PIN_BASE + 0x40 + 23)
#define	AT91_PIN_PC24	(PIN_BASE + 0x40 + 24)
#define	AT91_PIN_PC25	(PIN_BASE + 0x40 + 25)
#define	AT91_PIN_PC26	(PIN_BASE + 0x40 + 26)
#define	AT91_PIN_PC27	(PIN_BASE + 0x40 + 27)
#define	AT91_PIN_PC28	(PIN_BASE + 0x40 + 28)
#define	AT91_PIN_PC29	(PIN_BASE + 0x40 + 29)
#define	AT91_PIN_PC30	(PIN_BASE + 0x40 + 30)
#define	AT91_PIN_PC31	(PIN_BASE + 0x40 + 31)

#define	AT91_PIN_PD0	(PIN_BASE + 0x60 + 0)
#define	AT91_PIN_PD1	(PIN_BASE + 0x60 + 1)
#define	AT91_PIN_PD2	(PIN_BASE + 0x60 + 2)
#define	AT91_PIN_PD3	(PIN_BASE + 0x60 + 3)
#define	AT91_PIN_PD4	(PIN_BASE + 0x60 + 4)
#define	AT91_PIN_PD5	(PIN_BASE + 0x60 + 5)
#define	AT91_PIN_PD6	(PIN_BASE + 0x60 + 6)
#define	AT91_PIN_PD7	(PIN_BASE + 0x60 + 7)
#define	AT91_PIN_PD8	(PIN_BASE + 0x60 + 8)
#define	AT91_PIN_PD9	(PIN_BASE + 0x60 + 9)
#define	AT91_PIN_PD10	(PIN_BASE + 0x60 + 10)
#define	AT91_PIN_PD11	(PIN_BASE + 0x60 + 11)
#define	AT91_PIN_PD12	(PIN_BASE + 0x60 + 12)
#define	AT91_PIN_PD13	(PIN_BASE + 0x60 + 13)
#define	AT91_PIN_PD14	(PIN_BASE + 0x60 + 14)
#define	AT91_PIN_PD15	(PIN_BASE + 0x60 + 15)
#define	AT91_PIN_PD16	(PIN_BASE + 0x60 + 16)
#define	AT91_PIN_PD17	(PIN_BASE + 0x60 + 17)
#define	AT91_PIN_PD18	(PIN_BASE + 0x60 + 18)
//#define	AT91_PIN_PD19	(PIN_BASE + 0x60 + 19)
#define	AT91_PIN_PD19	(0x60 + 19)

#define	AT91_PIN_PD20	(PIN_BASE + 0x60 + 20)
#define	AT91_PIN_PD21	(PIN_BASE + 0x60 + 21)
#define	AT91_PIN_PD22	(PIN_BASE + 0x60 + 22)
#define	AT91_PIN_PD23	(PIN_BASE + 0x60 + 23)
#define	AT91_PIN_PD24	(PIN_BASE + 0x60 + 24)
#define	AT91_PIN_PD25	(PIN_BASE + 0x60 + 25)
#define	AT91_PIN_PD26	(PIN_BASE + 0x60 + 26)
#define	AT91_PIN_PD27	(PIN_BASE + 0x60 + 27)
#define	AT91_PIN_PD28	(PIN_BASE + 0x60 + 28)
#define	AT91_PIN_PD29	(PIN_BASE + 0x60 + 29)
#define	AT91_PIN_PD30	(PIN_BASE + 0x60 + 30)
#define	AT91_PIN_PD31	(PIN_BASE + 0x60 + 31)

#define	AT91_PIN_PE0	(PIN_BASE + 0x80 + 0)
#define	AT91_PIN_PE1	(PIN_BASE + 0x80 + 1)
#define	AT91_PIN_PE2	(PIN_BASE + 0x80 + 2)
#define	AT91_PIN_PE3	(PIN_BASE + 0x80 + 3)
#define	AT91_PIN_PE4	(PIN_BASE + 0x80 + 4)
#define	AT91_PIN_PE5	(PIN_BASE + 0x80 + 5)
#define	AT91_PIN_PE6	(PIN_BASE + 0x80 + 6)
#define	AT91_PIN_PE7	(PIN_BASE + 0x80 + 7)
#define	AT91_PIN_PE8	(PIN_BASE + 0x80 + 8)
//#define	AT91_PIN_PE9	(PIN_BASE + 0x80 + 9)
#define	AT91_PIN_PE9	(0x80 + 9)
#define	AT91_PIN_PE10	(PIN_BASE + 0x80 + 10)
#define	AT91_PIN_PE11	(PIN_BASE + 0x80 + 11)
#define	AT91_PIN_PE12	(PIN_BASE + 0x80 + 12)
#define	AT91_PIN_PE13	(PIN_BASE + 0x80 + 13)
#define	AT91_PIN_PE14	(PIN_BASE + 0x80 + 14)
#define	AT91_PIN_PE15	(PIN_BASE + 0x80 + 15)
#define	AT91_PIN_PE16	(PIN_BASE + 0x80 + 16)
#define	AT91_PIN_PE17	(PIN_BASE + 0x80 + 17)
#define	AT91_PIN_PE18	(PIN_BASE + 0x80 + 18)
#define	AT91_PIN_PE19	(PIN_BASE + 0x80 + 19)
#define	AT91_PIN_PE20	(PIN_BASE + 0x80 + 20)
#define	AT91_PIN_PE21	(PIN_BASE + 0x80 + 21)
#define	AT91_PIN_PE22	(PIN_BASE + 0x80 + 22)
#define	AT91_PIN_PE23	(PIN_BASE + 0x80 + 23)
#define	AT91_PIN_PE24	(PIN_BASE + 0x80 + 24)
#define	AT91_PIN_PE25	(PIN_BASE + 0x80 + 25)
#define	AT91_PIN_PE26	(PIN_BASE + 0x80 + 26)
#define	AT91_PIN_PE27	(PIN_BASE + 0x80 + 27)
#define	AT91_PIN_PE28	(PIN_BASE + 0x80 + 28)
#define	AT91_PIN_PE29	(PIN_BASE + 0x80 + 29)
#define	AT91_PIN_PE30	(PIN_BASE + 0x80 + 30)
#define	AT91_PIN_PE31	(PIN_BASE + 0x80 + 31)




#define GPIO14		AT91_PIN_PB20
#define GPIO13		AT91_PIN_PB21
#define GPIO12		AT91_PIN_PB22
#define GPIO11		AT91_PIN_PB23
#define GPIO10		AT91_PIN_PB24
#define GPIO9		AT91_PIN_PB25
#define GPIO8		AT91_PIN_PB26
#define GPIO7		AT91_PIN_PB27
#define GPIO6		AT91_PIN_PB28
#define GPIO5		AT91_PIN_PB29
#define GPIO4		AT91_PIN_PB30

#define GPIO3	   AT91_PIN_PA25
#define GPIO2	   AT91_PIN_PA26
#define GPIO1	   AT91_PIN_PA27
#define GPIO0	   AT91_PIN_PA28


#define GPIO15		AT91_PIN_PA22
#define GPIO16		AT91_PIN_PC0
#define GPIO17		AT91_PIN_PC1
#define GPIO18		AT91_PIN_PC2
#define GPIO19		AT91_PIN_PC3
#define PIN_ADTRG	GPIO15
#define PIN_AD0		GPIO16
#define PIN_AD1		GPIO17
#define PIN_AD2		GPIO18
#define PIN_AD3		GPIO19

#define GPIO20		AT91_PIN_PC12
#define GPIO21		AT91_PIN_PC15
#define PIN_IRQ0	GPIO20
#define PIN_IRQ1	GPIO21

#define GPIO22		AT91_PIN_PB19

#define GPIO23		AT91_PIN_PC6
#define GPIO24		AT91_PIN_PC7
#define GPIO25		AT91_PIN_PC8
#define GPIO26		AT91_PIN_PC10

#define GPIO27		AT91_PIN_PC4
#define GPIO28		AT91_PIN_PA5
#define GPIO29		AT91_PIN_PA4

#define PIN_BZR_CTL AT91_PIN_PD19
#define PIN_LED     AT91_PIN_PE9

#endif //__GPIO_9260_9G20_H__

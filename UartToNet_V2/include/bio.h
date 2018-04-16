#ifndef _BIO_H
#define _BIO_H

int     Uart_fd;
int     Gpio_fd;

Uchar   HEX_BCD[11];
Uchar   HEX_FsData[11];

void    Led2_On();
void    Led2_Off();
void    Beep_On();
void    Beep_Off();
void    HEXtoBCD(Ulong hex_data,Uchar n);
Uint    BCDtoHEX(Uchar *BCD_DATA,Uchar n);
void    Print_HEX(const char *src,int len,char *str);
int     Open_Uart(char *uart_no);
int     Open_Gpio();
void    Str_Split(char *str);

char    HEXtoFsData(Ulong hex_data,Uchar n,Uchar Flag) ;
//增加的length为数组长度，不够前面补0
char    HEXtoFsData_New(Ulong hex_data,Uchar n,Uchar Flag,Uchar length) ;

long    FSDataToLong(int num,char *buf);
char    *itoa(int num, char *str, int radix);
void    Dispose_Small_CPU_Data(void *data,int num);
Uchar   Deal_Status_Code(Uchar num);
int     Check_Netlink(char *nic_name);

#endif


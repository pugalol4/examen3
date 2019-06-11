#include <18F4620.h>

#FUSES NOWDT                    //No Watch Dog Timer
#FUSES NOFCMEN                  //Fail-safe clock monitor disabled
#FUSES NOIESO                   //Internal External Switch Over mode disabled
#FUSES PUT                      //Power Up Timer
#FUSES NOBROWNOUT               //No brownout reset
#FUSES NOLPT1OSC                //Timer1 configured for higher power operation
#FUSES NOSTVREN                 //Stack full/underflow will not cause reset
#FUSES NOLVP                    //No low voltage prgming, B3(PIC16) or B5(PIC18) used for I/O
#FUSES NOXINST                  //Extended set extension and Indexed Addressing mode disabled (Legacy mode)

#use delay(crystal=40MHz)
#use rs232(baud=9600,parity=N,xmit=PIN_C6,rcv=PIN_C7,bits=8,stream=PORT1)

char caracter[22];//{-2+-2:}
int flag=0;
int bandera1=0;
int calculo=0;
int i=0;


void main()
{
   printf("BIENVENIDO /r/n");
   
   while(TRUE)
   {
   if(kbhit()){
         
            caracter[i]=getch();
        
        if(caracter[i]=='R' || caracter[i]=='S' || caracter[i]=='A'){
            printf("%c",caracter[i]);
            if(caracter[i]=='='){
            calculo=1;
        }
        i++;
        bandera1=0;
    }
   }
  
      
   }

}

#include <calculadora_display.h>
#include <libreria1.h>
#include <libreria2.h>

char caracter[22];//{-2+-2:}
int flag=0;
int bandera1=0;
float numero1=0, numero2=0;
float resultado=0;
int calculo=0;
int puntero=0;
float decimal1=0,decimal2=0;
char operacion;
//void clean(void);
int i=0;
int clear=0;
#int_RDA
void RDA_isr(void){
      if(kbhit()){
               
                  caracter[i]=getch();
                  
                  if(caracter[0]=='*' || caracter[0]=='/'){caracter[i]=1;}
                  if(i>1 && caracter[i-1]=='*' && caracter[i]==caracter[i-1] || caracter[i-1]=='/' && caracter[i]==caracter[i-1] || caracter[i-1]=='/' && caracter[i]=='*' || caracter[i-1]=='*' && caracter[i]=='/'){caracter[i]='=';}
                  if(i>1 && caracter[i-1]=='+' && caracter[i]==caracter[i-1] || caracter[i-1]=='-' && caracter[i]==caracter[i] && caracter[i-2]=='+'){caracter[i]='=';}
                  if(i>1 && caracter[i-1]=='.' && caracter[i]==caracter[i-1]){caracter[i]=1;}       
              
              if(caracter[i]>=42 && caracter[i]<=62){
                  printf("%c",caracter[i]);
                  if(caracter[i]=='='){
                  calculo=1;
              }
              i++;
              bandera1=0;
          }
         }
   }
void main()
{
   printf("\fIngresa los datos siguiendo el orden dato,dato,operacion=\n");
   while(TRUE)
   {
   if(kbhit()){
         
            caracter[i]=getch();
            
       /*     if(caracter[0]=='*' || caracter[0]=='/'){caracter[i]=1;}
            if(caracter[0]=='-' && caracter[1]==caracter[0] || caracter[0]=='+' && caracter[1]==caracter[0]){caracter[i]=1;}
          //  if(i>1 && caracter[i]=='+' && caracter[i-1]==caracter[i]-1 ){caracter[i]==1;}
            if(i>1 && caracter[i-1]=='*' && caracter[i]==caracter[i-1] || caracter[i-1]=='/' && caracter[i]==caracter[i-1] || caracter[i-1]=='/' && caracter[i]=='*' || caracter[i-1]=='*' && caracter[i]=='/'){caracter[i]=1;}
            if(i>1 && caracter[i-1]=='+' && caracter[i]==caracter[i-1] || caracter[i-1]=='-' && caracter[i]==caracter[i-1] || caracter[i-1]=='-' && caracter[i]==caracter[i-1] && caracter[i-2]=='+'){caracter[i]=1;}
            if(i>1 && caracter[i-1]=='.' && caracter[i]==caracter[i-1]){caracter[i]=1;}       
        */
        
        if(caracter[i]=='R' || caracter[i]=='S' || caracter[i]==A){
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

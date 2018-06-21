#include <ioCC2530.h>

void main(void){
  P2SEL=0;
  P1SEL=0;
  P0SEL=0;
  P2DIR=0;
  P1DIR=0xFF;
  P0DIR=0;
  
  for(;;)
  {
    
    if(P0_1==1)
    {
       P1_0=1;
    }
    else
    {
       P1_0=0;
    }
    
    if(P2_0==1)
    {
       P1_1=1;
    }
    else
    {
       P1_1=0;
    } 
    }
  }


  

//Embedded-C-Programs


//LED_ON PROGRAM
#include <AT89S52.h>
void main()
{
 while(1)
 {
 P2_0=0;
 }
}


//LED ON USING SWITCH

#include <AT89S52.h>
int main()
{
 while(1)
 {
  if(P1_0==1)
  {
   P2_0=1;
  }
  else
  {
   P2_0=0;
  }
 }
}


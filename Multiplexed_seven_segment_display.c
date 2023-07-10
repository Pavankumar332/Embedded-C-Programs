#include <AT89S52.h>
#define DATA P0
#define DIGIT P1
const char c[11]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};

void wait(int);

void main()
{
 int i=0;
 while(1)
 {
  for(i=0;i<10;i++)
  {
   DATA=0XFF;
   DIGIT=0x0F;
  }
 }
}

void wait(int c)
{
 int i;
 for(i=0;i<c;i++)
 {
 }
}
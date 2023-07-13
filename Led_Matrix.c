#include <AT89S52.h>
#define COL P0
#define ROW P1

const char col_pixel[9]={0x38,0X44,0X4C,0X54,0X64,0X44,0X44,0X38};
const char row_pixel[9]={0x56,0x68,0x76,0x84,0x100,0x68,0x68,0x56};

void main()
{
 COL=0x00;
 ROW=0x00;
 while(1)
 {
  char i;
  for(i=0;i<8;i++)
  {
  COL=col_pixel[i];
  ROW=row_pixel[i];
  ROW=0x00;
  }
 }
}
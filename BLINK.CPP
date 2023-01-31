#include<stdio.h>
#include<graphics.h>
#include<dos.h>
  
// function for printing
// message as colored character
void printMsg()
{
    // auto detection
    int gdriver = DETECT,gmode,i;
  
    // initialize graphics mode
    initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
  
    for (i=4; i<5; i++)
    {
        // setcolor of cursor
        setcolor(i);
          
        // set text style as
        // settextstyle(font, orientation, size)
        settextstyle(i,0,i);
          
        // print text at coordinate x,y;
        outtextxy(200,20*i,"WELCOME IN LINK LIST");
          
        delay(500);
    } 
    delay(2000);
}
  
// driver program
int main()
{
    printMsg();
    return 0;
}

#include <graphics.h>
#include <iostream>
#include <stdio.h>
#include <time.h>
#include <windows.h>
using namespace std;

//variable for choosing frame(image)
  int cht=0;

//Hour Coordinates
  int cordsFHX[12] = {60,104,120,104,60,0,-60,-104,-120,-104,-60,0};
  int cordsFHY[12] = {-104,-60,0,60,104,120,104,60,0,-60,-104,-120};

//Minutes Coordinates

  int cordsFMX[60] = {0,18,35,53,69,85,100,114,126,138,
                                147,155,162,166,169,170,169,166,162,155,
                                147,138,126,114,100,85,69,53,35,18,0,-18,
                                -35,-53,-69,-85,-100,-114,-126,-138,-147,
                                -155,-162,-166,-169,-170,-169,-166,-162,-155,
                                -147,-138,-126,-114,-100,-85,-69,-53,-35,-18};
  int cordsFMY[60] = {-170,-169,-166,-162,-155,-147,-138,-126,-114,-100,
                                -85,-69,-53,-35,-18,0,18,35,53,69,85,100,114,126,138,
                                147,155,162,166,169,170,169,166,162,155,147,138,126,114,
                                100,85,69,53,35,18,0,-18,-35,-53,-69,-85,-100,-114,-126,-138,-147,-155,-162,-166,-169};

  char s[10] = "Alarm!!";
  int cc[2] = {10,12};
  int ring=0;
  int h,m,ap;
  char am[5] = "AM";
  char pm[5] = "PM";

class AnalogClock
{
  public:
  int maxx,maxy,midx,midy,page;
  int IMS,clr; //integer for storing time info
  int windw; //to assign window
  //Time Variables
  time_t rawTime;
  struct tm currentTime;
  char a[100];

  AnalogClock()
  {
    windw = initwindow(700,700,"Analog Clock",430,50,true,true);
    maxx=getmaxx();
    maxy=getmaxy();
    midx=maxx/2;
    midy=maxy/2;
    page=0;
    clr=0;
  }
  void methodClock();
  void makeValues();
  void makeFile();
  void makeFrame();
};

void AnalogClock :: makeFrame()
{
    switch(cht)
    {
        case 0 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp2\\f0.jpg",49,9,689,649);break;
        case 1 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp2\\f1.jpg",49,9,689,649);break;
        case 2 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp2\\f2.jpg",49,9,689,649);break;
        case 3 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp2\\f3.jpg",49,9,689,649);break;
        case 4 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp2\\f4.jpg",49,9,689,649);break;
        case 5 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp2\\f5.jpg",49,9,689,649);break;
        case 6 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp2\\f6.jpg",49,9,689,649);break;
        case 7 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp2\\f7.jpg",49,9,689,649);break;
        case 8 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp2\\f8.jpg",49,9,689,649);break;
        case 9 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp2\\f9.jpg",49,9,689,649);break;
        case 10 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp2\\f10.jpg",49,9,689,649);break;
        case 11 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp2\\f11.jpg",49,9,689,649);break;
    //----------------------------------------------------------------------------------------------------
        case 31 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp4\\f0.jpg",99,99,599,599);break;
        case 32 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp4\\f1.jpg",99,99,599,599);break;
        case 33 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp4\\f2.jpg",99,99,599,599);break;
        case 34 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp4\\f3.jpg",99,99,599,599);break;
        case 35 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp4\\f4.jpg",99,99,599,599);break;
        case 36 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp4\\f5.jpg",99,99,599,599);break;
        case 37 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp4\\f6.jpg",99,99,599,599);break;
        case 38 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp4\\f7.jpg",99,99,599,599);break;
        case 39 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp4\\f8.jpg",99,99,599,599);break;
        case 40 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp4\\f9.jpg",99,99,599,599);break;
        case 41 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp4\\f10.jpg",99,99,599,599);break;
        case 42 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp4\\f11.jpg",99,99,599,599);break;
        case 43 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp4\\f12.jpg",99,99,599,599);break;
        case 44 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp4\\f13.jpg",99,99,599,599);break;
        case 45 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp4\\f14.jpg",99,99,599,599);break;
        case 46 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp4\\f15.jpg",99,99,599,599);break;
        case 47 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp4\\f16.jpg",99,99,599,599);break;
    //----------------------------------------------------------------------------------------------------
        case 48 : return;
        case 98 : cht = 0; break;
    }
}

void AnalogClock :: makeFile()
{
   int num=1;
   char ch = ' ';
   FILE *fptr;
   fptr = fopen("C:\\Users\\Manoj\\Desktop\\code\\alarm.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");
      exit(1);
   }

   fprintf(fptr,"%d",h);
   fputc(ch,fptr);

   fprintf(fptr,"%d",m);
   fputc(ch,fptr);

   fprintf(fptr,"%d",ap);
   fputc(ch,fptr);

   fprintf(fptr,"%d",num);
   fputc(ch,fptr);

   fclose(fptr);
}

void AnalogClock :: makeValues()
{
		rawTime = time(NULL);
		currentTime = *localtime(&rawTime);

		strftime(a , 100 , "%I" , &currentTime);
		sscanf(a , "%d" , &h);

		strftime(a , 100 , "%M" , &currentTime);
		sscanf(a , "%d" , &m);

		strftime(a , 100 , "%p" , &currentTime );
        if(!strcmp(pm,a))
        {
            ap=1;
        }
}

void AnalogClock :: methodClock()
{
    setcurrentwindow(windw);
    setbkcolor(WHITE);

    while(1)
    {
        setactivepage(page);
        setvisualpage(1-page);
        cleardevice();

        makeFrame();

        //Layout
        for(int rr=0;rr<=50;rr++)
        {
        setcolor(YELLOW);
        circle(midx,midy,(250+rr));
        }

        setcolor(YELLOW);
        circle(midx,midy,10);
        setfillstyle(SOLID_FILL,YELLOW);
        floodfill(midx,midy,YELLOW);

        //Numbers
        setcolor(DARKGRAY);
        settextstyle(0,HORIZ_DIR,3);
        outtextxy((midx+108),(midy-210),"1");//1
        outtextxy((midx+192),(midy-120),"2");//2
        outtextxy((midx+217),(midy-10),"3");//3
        outtextxy((midx+186),(midy+108),"4");//4
        outtextxy(midx+(108),midy+(188),"5");//5
        outtextxy(midx+(-14),midy+(221),"6");//6
        outtextxy(midx-(135),midy+(186),"7");//7
        outtextxy(midx-(213),midy+(101),"8");//8
        outtextxy((midx-245),(midy-9),"9");//9
        outtextxy((midx-215),(midy-120),"10");//10
        outtextxy((midx-127),(midy-209),"11");//11
        outtextxy((midx-20),(midy-240),"12");//12

        //Time Function
        rawTime = time(NULL);
        currentTime = *localtime(&rawTime);

        //setting time
        strftime(a , 100 , "%I" , &currentTime );
        sscanf(a , "%d" , &IMS);
        setcolor(12);
        setlinestyle(0, 1, 3);
        line(midx,midy,(midx+cordsFHX[IMS-1]),(midy+cordsFHY[IMS-1]));

        strftime(a , 100 , "%M" , &currentTime );
        sscanf(a , "%d" , &IMS);
        setcolor(9);
        setlinestyle(0, 1, 3);
        line(midx,midy,(midx+cordsFMX[IMS]),(midy+cordsFMY[IMS]));

        strftime(a , 100 , "%S" , &currentTime );
        sscanf(a , "%d" , &IMS);
        setcolor(7);
        setlinestyle(0, 1, 3);
        line(midx,midy,(midx+cordsFMX[IMS]),(midy+cordsFMY[IMS]));

        setcolor(10);
        strftime(a , 100 , "%p" , &currentTime);
        settextstyle(3 , HORIZ_DIR , 4);
        outtextxy(midx+270,midy-340,a);

        strftime(a , 100 , "%a ,%d %b ,%Y" , &currentTime);
        settextstyle(3 , HORIZ_DIR , 4);
        outtextxy(midx-330,midy-340,a);

        setcolor(cc[clr]);
        settextstyle(3 , HORIZ_DIR , 7 );
        outtextxy(midx-(90),midy-(190),s);

        page = 1 - page;
        if((ring%15)==0)
        {
            Beep(5000,50);
            Beep(5000,50);
            Beep(6000,50);
            Beep(6000,50);
        }
        cht++;
        ring += 1;
        clr = 1 - clr;
        delay(50);
        if(ring==800)
        {
            exit(1);
        }

    }
    getch();
    closegraph();
}

int main()
{
    AnalogClock obj;
    obj.makeValues();
    obj.makeFile();
    obj.methodClock();
    return 0;
}

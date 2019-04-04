#include <graphics.h>
#include <iostream>
#include <stdlib.h>+
#include <stdio.h>
#include <time.h>
#include <windows.h>
using namespace std;

//variable for choosing frame(image)
  int chtf=0;

//Variable for choosing time zone
  int ct;

//Time Difference Array
  int tda[21] = {0,-19800,9000,-37800,19800,-5400,12600,9000,-12600,
                        -41400,9000,-37800,-9000,-16200,-16200,-16200,-16200,-12600,-30600,-16200,-12600};

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


//Class for Execution of Analog Clock
class AnalogClock
{
  public:
  int maxx,maxy,midx,midy,page;// Window parameters
  int IMS; //integer for storing time info
  int windw; //to assign window

  //Time Variables
  time_t rawTime;
  struct tm currentTime;
  struct tm setTime;
  char a[100];

  AnalogClock()//AnalogClock class constructor
  {
    windw = initwindow(700,700,"Analog Clock",800,60,true,true); //Window to write code onto it
    maxx=getmaxx();//maximum width of window
    maxy=getmaxy();//maximum height of window

    //Coordinates of  the center of window
    midx=maxx/2;
    midy=maxy/2;
    page=0;//default page
  }
  void methodClock();//To display Analog Clock
  void methodFrames();//To read images
};

void AnalogClock :: methodFrames()
{
    switch(chtf)
        {
//----------------------------------------------------------------------------------------------------
            // GIF Image - 1
            case 0 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp1\\f0.jpg",49,9,689,649);break;
            case 1 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp1\\f1.jpg",49,9,689,649);break;
            case 2 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp1\\f2.jpg",49,9,689,649);break;
            case 3 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp1\\f3.jpg",49,9,689,649);break;
            case 4 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp1\\f4.jpg",49,9,689,649);break;
            case 5 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp1\\f5.jpg",49,9,689,649);break;
            case 6 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp1\\f6.jpg",49,9,689,649);break;
            case 7 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp1\\f7.jpg",49,9,689,649);break;
//----------------------------------------------------------------------------------------------------
            // GIF Image - 2
            case 27 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp2\\f0.jpg",49,9,689,649);break;
            case 28 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp2\\f1.jpg",49,9,689,649);break;
            case 29 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp2\\f2.jpg",49,9,689,649);break;
            case 30 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp2\\f3.jpg",49,9,689,649);break;
            case 31 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp2\\f4.jpg",49,9,689,649);break;
            case 32 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp2\\f5.jpg",49,9,689,649);break;
            case 33 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp2\\f6.jpg",49,9,689,649);break;
            case 34 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp2\\f7.jpg",49,9,689,649);break;
            case 35 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp2\\f8.jpg",49,9,689,649);break;
            case 36 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp2\\f9.jpg",49,9,689,649);break;
            case 37 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp2\\f10.jpg",49,9,689,649);break;
            case 38 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp2\\f11.jpg",49,9,689,649);break;
//----------------------------------------------------------------------------------------------------
            // GIF Image - 3
            case 59 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp3\\f0.jpg",49,49,689,689);break;
            case 60 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp3\\f1.jpg",49,49,689,689);break;
            case 61 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp3\\f2.jpg",49,49,689,689);break;
            case 62 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp3\\f3.jpg",49,49,689,689);break;
            case 63 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp3\\f4.jpg",49,49,689,689);break;
            case 64 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp3\\f5.jpg",49,49,689,689);break;
            case 65 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp3\\f6.jpg",49,49,689,689);break;
            case 66 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp3\\f7.jpg",49,49,689,689);break;
            case 67 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp3\\f8.jpg",49,49,689,689);break;
            case 68 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp3\\f9.jpg",49,49,689,689);break;
            case 69 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp3\\f10.jpg",49,49,689,689);break;
            case 70 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp3\\f11.jpg",49,49,689,689);break;
            case 71 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp3\\f12.jpg",49,49,689,689);break;
            case 72 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp3\\f13.jpg",49,49,689,689);break;
            case 73 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp3\\f14.jpg",49,49,689,689);break;
            case 74 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp3\\f15.jpg",49,49,689,689);break;
//----------------------------------------------------------------------------------------------------
            // GIF Image - 4
            case 94 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp4\\f0.jpg",99,99,599,599);break;
            case 95 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp4\\f1.jpg",99,99,599,599);break;
            case 96 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp4\\f2.jpg",99,99,599,599);break;
            case 97 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp4\\f3.jpg",99,99,599,599);break;
            case 98 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp4\\f4.jpg",99,99,599,599);break;
            case 99 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp4\\f5.jpg",99,99,599,599);break;
            case 100 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp4\\f6.jpg",99,99,599,599);break;
            case 101 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp4\\f7.jpg",99,99,599,599);break;
            case 102 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp4\\f8.jpg",99,99,599,599);break;
            case 103 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp4\\f9.jpg",99,99,599,599);break;
            case 104 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp4\\f10.jpg",99,99,599,599);break;
            case 105 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp4\\f11.jpg",99,99,599,599);break;
            case 106 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp4\\f12.jpg",99,99,599,599);break;
            case 107 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp4\\f13.jpg",99,99,599,599);break;
            case 108 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp4\\f14.jpg",99,99,599,599);break;
            case 109 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp4\\f15.jpg",99,99,599,599);break;
            case 110 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp4\\f16.jpg",99,99,599,599);break;
//----------------------------------------------------------------------------------------------------
            // GIF Image - 5
            case 130 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp6\\f0.jpg",99,99,597,597);break;
            case 131 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp6\\f1.jpg",99,99,597,597);break;
            case 132 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp6\\f2.jpg",99,99,597,597);break;
            case 133 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp6\\f3.jpg",99,99,597,597);break;
            case 134 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp6\\f4.jpg",99,99,597,597);break;
            case 135 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp6\\f5.jpg",99,99,597,597);break;
            case 136 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp6\\f6.jpg",99,99,597,597);break;
            case 137 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp6\\f7.jpg",99,99,597,597);break;
            case 138 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp6\\f8.jpg",99,99,597,597);break;
            case 139 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp6\\f9.jpg",99,99,597,597);break;
            case 140 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp6\\f10.jpg",99,99,597,597);break;
            case 141 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp6\\f11.jpg",99,99,597,597);break;
            case 142 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp6\\f12.jpg",99,99,597,597);break;
            case 143 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp6\\f13.jpg",99,99,597,597);break;
            case 144 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp6\\f14.jpg",99,99,597,597);break;
            case 145 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp6\\f15.jpg",99,99,597,597);break;
            case 146 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp6\\f16.jpg",99,99,597,597);break;
            case 147 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp6\\f17.jpg",99,99,597,597);break;
            case 148 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp6\\f18.jpg",99,99,597,597);break;
            case 149 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp6\\f19.jpg",99,99,597,597);break;
            case 150 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp6\\f20.jpg",99,99,597,597);break;
            case 151 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp6\\f21.jpg",99,99,597,597);break;
            case 152 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp6\\f22.jpg",99,99,597,597);break;
            case 153 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp6\\f23.jpg",99,99,597,597);break;
            case 154 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp6\\f24.jpg",99,99,597,597);break;
            case 155 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp6\\f25.jpg",99,99,597,597);break;
            case 156 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp6\\f26.jpg",99,99,597,597);break;
            case 157 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp6\\f27.jpg",99,99,597,597);break;
            case 158 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp6\\f28.jpg",99,99,597,597);break;
            case 159 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp6\\f29.jpg",99,99,597,597);break;
//----------------------------------------------------------------------------------------------------
            // GIF Image - 6
            case 179 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp8\\f0.jpg",49,49,689,689);break;
            case 180 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp8\\f1.jpg",49,49,689,689);break;
            case 181 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp8\\f2.jpg",49,49,689,689);break;
            case 182 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp8\\f3.jpg",49,49,689,689);break;
            case 183 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp8\\f4.jpg",49,49,689,689);break;
            case 184 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp8\\f5.jpg",49,49,689,689);break;
            case 185 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp8\\f6.jpg",49,49,689,689);break;
            case 186 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp8\\f7.jpg",49,49,689,689);break;
            case 187 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp8\\f8.jpg",49,49,689,689);break;
            case 188 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp8\\f9.jpg",49,49,689,689);break;
            case 189 : readimagefile("C:\\Users\\Manoj\\Desktop\\code\\Image\\Frames\\tp8\\f10.jpg",49,49,689,689);break;
//----------------------------------------------------------------------------------------------------
            case 190 : return;
            case 240 : chtf = 0; break; // To replay the GIF Images after 4 sec(approx) time interval
        }
}


void code :: methodClock()
{
    setcurrentwindow(windw);//To set windw as current window for further program execution
    setbkcolor(WHITE);//Setting background color as white

        setactivepage(page);//To set default blank page
        setvisualpage(1-page);//To set active page
        cleardevice();//To clear page

        methodFrames();//To display image on to page

        //Clock Layout
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
        setTime=currentTime;
        setTime.tm_sec += tda[ct];
        mktime(&setTime);

        //Setting Time
        //To display Hours
        strftime(a , 100 , "%I" , &setTime );
        sscanf(a , "%d" , &IMS);
        setcolor(12);
        setlinestyle(0, 1, 3);
        line(midx,midy,(midx+cordsFHX[IMS-1]),(midy+cordsFHY[IMS-1]));

        //To display Minutes
        strftime(a , 100 , "%M" , &setTime );
        sscanf(a , "%d" , &IMS);
        setcolor(9);
        setlinestyle(0, 1, 3);
        line(midx,midy,(midx+cordsFMX[IMS]),(midy+cordsFMY[IMS]));

        //To display seconds
        strftime(a , 100 , "%S" , &setTime );
        sscanf(a , "%d" , &IMS);
        setcolor(7);
        setlinestyle(0, 1, 3);
        line(midx,midy,(midx+cordsFMX[IMS]),(midy+cordsFMY[IMS]));

        //To display 'AM or 'PM'
        setcolor(10);
        strftime(a , 100 , "%p" , &setTime);
        settextstyle(3 , HORIZ_DIR , 4);
        outtextxy(midx+270,midy-340,a);

        //To display Complete Date
        strftime(a , 100 , "%a ,%d %b ,%Y" , &setTime);
        settextstyle(3 , HORIZ_DIR , 4);
        outtextxy(midx-330,midy-340,a);

        page = 1 - page; // To swap pages on next cycle of execution

    return ;
    getch();
    closegraph();
}

// class for choosing different Time Zones
class ChooseTime
{
    public:
    int mx,my,windtm;//Window parameters
    int wh[21][2],sc[21];
    int pagetm;//default page
    ChooseTime()//ChooseTime class constructor
    {
        windtm= initwindow(700,750,"Choose Time Zone",75,20,true,true);//To set windtm as current window for further program execution
        pagetm=0;//default page set to zero
        ct=0;
        sc[0]=12;//default color for chosen time zone
        for(int z=1;z<21;z++)//default color for remaining time zones
        {
            sc[z]=2;
        }
        chooseCountry();//function call
    }
    void chooseTimeZone();
    void chooseCountry();
    void chooseLayout();
    void chooseTimeValue();
};

void  ChooseTime :: chooseCountry()//Initializing width and height of country names in wh[]  array
{
    wh[0][0] = textwidth("India");
    wh[0][1] = textheight("India");
//------------------------------
    wh[1][0] = textwidth("London");
    wh[1][1] = textheight("London");
//------------------------------
    wh[2][0] = textwidth("China");
    wh[2][1] = textheight("China");
//------------------------------
    wh[3][0] = textwidth("USA");
    wh[3][1] = textheight("USA");
//------------------------------
    wh[4][0] = textwidth("Australia");
    wh[4][1] = textheight("Australia");
//------------------------------
    wh[5][0] = textwidth("Dubai");
    wh[5][1] = textheight("Dubai");
//------------------------------
    wh[6][0] = textwidth("Japan");
    wh[6][1] = textheight("Japan");
//------------------------------
    wh[7][0] = textwidth("Singapore");
    wh[7][1] = textheight("Singapore");
//------------------------------
    wh[8][0] = textwidth("Greece");
    wh[8][1] = textheight("Greece");
//------------------------------
    wh[9][0] = textwidth("Mexico");
    wh[9][1] = textheight("Mexico");
//------------------------------
    wh[10][0] = textwidth("Malaysia");
    wh[10][1] = textheight("Malaysia");
//------------------------------
    wh[11][0] = textwidth("Canada");
    wh[11][1] = textheight("Canada");
//------------------------------
    wh[12][0] = textwidth("Russia");
    wh[12][1] = textheight("Russia");
//------------------------------
    wh[13][0] = textwidth("Germany");
    wh[13][1] = textheight("Germany");
//------------------------------
    wh[14][0] = textwidth("Paris");
    wh[14][1] = textheight("Paris");
//------------------------------
    wh[15][0] = textwidth("Spain");
    wh[15][1] = textheight("Spain");
//------------------------------
    wh[16][0] = textwidth("Poland");
    wh[16][1] = textheight("Poland");
//------------------------------
    wh[17][0] = textwidth("Africa");
    wh[17][1] = textheight("Africa");
//------------------------------
    wh[18][0] = textwidth("Brazil");
    wh[18][1] = textheight("Brazil");
//------------------------------
    wh[19][0] = textwidth("Hungary");
    wh[19][1] = textheight("Hungary");
//------------------------------
    wh[20][0] = textwidth("Egypt");
    wh[20][1] = textheight("Egypt");
//------------------------------
}

void ChooseTime :: chooseLayout()//Displaying country names as push button (options)
{
    setcolor(2);
    rectangle(50,50,200,100);
    setcolor(sc[0]);
    outtextxy(125-(wh[0][0]/2),75-(wh[0][1]/2),"India");
//---------------------------------------------------
    setcolor(2);
    rectangle(250,50,450,100);
    setcolor(sc[1]);
    outtextxy(350-(wh[1][0]/2),75-(wh[1][1]/2),"London");
//---------------------------------------------------
    setcolor(2);
    rectangle(500,50,650,100);
    setcolor(sc[2]);
    outtextxy(575-(wh[2][0]/2),75-(wh[2][1]/2),"China");
//---------------------------------------------------
    setcolor(2);
    rectangle(50,150,200,200);
    setcolor(sc[3]);
    outtextxy(125-(wh[3][0]/2),175-(wh[3][1]/2),"USA");
//---------------------------------------------------
    setcolor(2);
    rectangle(250,150,450,200);
    setcolor(sc[4]);
    outtextxy(350-(wh[4][0]/2),175-(wh[4][1]/2),"Australia");
//---------------------------------------------------
    setcolor(2);
    rectangle(500,150,650,200);
    setcolor(sc[5]);
    outtextxy(575-(wh[5][0]/2),175-(wh[5][1]/2),"Dubai");
//---------------------------------------------------
    setcolor(2);
    rectangle(50,250,200,300);
    setcolor(sc[6]);
    outtextxy(125-(wh[6][0]/2),275-(wh[6][1]/2),"Japan");
//---------------------------------------------------
    setcolor(2);
    rectangle(250,250,450,300);
    setcolor(sc[7]);
    outtextxy(350-(wh[7][0]/2),275-(wh[7][1]/2),"Singapore");
//---------------------------------------------------
    setcolor(2);
    rectangle(500,250,650,300);
    setcolor(sc[8]);
    outtextxy(575-(wh[8][0]/2),275-(wh[8][1]/2),"Greece");
//---------------------------------------------------
    setcolor(2);
    rectangle(50,350,200,400);
    setcolor(sc[9]);
    outtextxy(125-(wh[9][0]/2),375-(wh[9][1]/2),"Mexico");
//---------------------------------------------------
    setcolor(2);
    rectangle(250,350,450,400);
    setcolor(sc[10]);
    outtextxy(350-(wh[10][0]/2),375-(wh[10][1]/2),"Malaysia");
//---------------------------------------------------
    setcolor(2);
    rectangle(500,350,650,400);
    setcolor(sc[11]);
    outtextxy(575-(wh[11][0]/2),375-(wh[11][1]/2),"Canada");
//---------------------------------------------------
    setcolor(2);
    rectangle(50,450,200,500);
    setcolor(sc[12]);
    outtextxy(125-(wh[12][0]/2),475-(wh[12][1]/2),"Russia");
//---------------------------------------------------
    setcolor(2);
    rectangle(250,450,450,500);
    setcolor(sc[13]);
    outtextxy(350-(wh[13][0]/2),475-(wh[13][1]/2),"Germany");
//---------------------------------------------------
    setcolor(2);
    rectangle(500,450,650,500);
    setcolor(sc[14]);
    outtextxy(575-(wh[14][0]/2),475-(wh[14][1]/2),"Paris");
//---------------------------------------------------
    setcolor(2);
    rectangle(50,550,200,600);
    setcolor(sc[15]);
    outtextxy(125-(wh[15][0]/2),575-(wh[15][1]/2),"Spain");
//---------------------------------------------------
    setcolor(2);
    rectangle(250,550,450,600);
    setcolor(sc[16]);
    outtextxy(350-(wh[16][0]/2),575-(wh[16][1]/2),"Poland");
//---------------------------------------------------
    setcolor(2);
    rectangle(500,550,650,600);
    setcolor(sc[17]);
    outtextxy(575-(wh[17][0]/2),575-(wh[17][1]/2),"Africa");
//---------------------------------------------------
    setcolor(2);
    rectangle(50,650,200,700);
    setcolor(sc[18]);
    outtextxy(125-(wh[18][0]/2),675-(wh[18][1]/2),"Brazil");
//---------------------------------------------------
    setcolor(2);
    rectangle(250,650,450,700);
    setcolor(sc[19]);
    outtextxy(350-(wh[19][0]/2),675-(wh[19][1]/2),"Hungary");
//---------------------------------------------------
    setcolor(2);
    rectangle(500,650,650,700);
    setcolor(sc[20]);
    outtextxy(575-(wh[20][0]/2),675-(wh[20][1]/2),"Egypt");
//---------------------------------------------------
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(10,10,GREEN);//setting background color as white
}

void ChooseTime :: chooseTimeValue()//Similar to ActionListener and ActionPerformed for push buttons (Country Names)
{
    if(ismouseclick(WM_LBUTTONDOWN))
    {
        getmouseclick(WM_LBUTTONDOWN, mx, my);
        if((mx<=200)&&(mx>=50))
        {
            if((my<=100)&&(my>=50))
            {
                ct=0;
                for(int lp=0;lp<21;lp++)
                {
                    if(ct==lp)
                    {
                        sc[lp]=12;
                    }
                    else sc[lp]=2;
                }
            }
            if((my<=200)&&(my>=150))
            {
                ct=3;
                for(int lp=0;lp<21;lp++)
                {
                    if(ct==lp)
                    {
                        sc[lp]=12;
                    }
                    else sc[lp]=2;
                }
            }
            if((my<=300)&&(my>=250))
            {
                ct=6;
                for(int lp=0;lp<21;lp++)
                {
                    if(ct==lp)
                    {
                        sc[lp]=12;
                    }
                    else sc[lp]=2;
                }
            }
            if((my<=400)&&(my>=350))
            {
                ct=9;
                for(int lp=0;lp<21;lp++)
                {
                    if(ct==lp)
                    {
                        sc[lp]=12;
                    }
                    else sc[lp]=2;
                }
            }
            if((my<=500)&&(my>=450))
            {
                ct=12;
                for(int lp=0;lp<21;lp++)
                {
                    if(ct==lp)
                    {
                        sc[lp]=12;
                    }
                    else sc[lp]=2;
                }
            }
            if((my<=600)&&(my>=550))
            {
                ct=15;
                for(int lp=0;lp<21;lp++)
                {
                    if(ct==lp)
                    {
                        sc[lp]=12;
                    }
                    else sc[lp]=2;
                }
            }
            if((my<=700)&&(my>=650))
            {
                ct=18;
                for(int lp=0;lp<21;lp++)
                {
                    if(ct==lp)
                    {
                        sc[lp]=12;
                    }
                    else sc[lp]=2;
                }
            }
        }
//------------------------------------------------------------
        if((mx<=450)&&(mx>=250))
        {
            if((my<=100)&&(my>=50))
            {
                ct=1;
                for(int lp=0;lp<21;lp++)
                {
                    if(ct==lp)
                    {
                        sc[lp]=12;
                    }
                    else sc[lp]=2;
                }
            }
            if((my<=200)&&(my>=150))
            {
                ct=4;
                for(int lp=0;lp<21;lp++)
                {
                    if(ct==lp)
                    {
                        sc[lp]=12;
                    }
                    else sc[lp]=2;
                }
            }
            if((my<=300)&&(my>=250))
            {
                ct=7;
                for(int lp=0;lp<21;lp++)
                {
                    if(ct==lp)
                    {
                        sc[lp]=12;
                    }
                    else sc[lp]=2;
                }
            }
            if((my<=400)&&(my>=350))
            {
                ct=10;
                for(int lp=0;lp<21;lp++)
                {
                    if(ct==lp)
                    {
                        sc[lp]=12;
                    }
                    else sc[lp]=2;
                }
            }
            if((my<=500)&&(my>=450))
            {
                ct=13;
                for(int lp=0;lp<21;lp++)
                {
                    if(ct==lp)
                    {
                        sc[lp]=12;
                    }
                    else sc[lp]=2;
                }
            }
            if((my<=600)&&(my>=550))
            {
                ct=16;
                for(int lp=0;lp<21;lp++)
                {
                    if(ct==lp)
                    {
                        sc[lp]=12;
                    }
                    else sc[lp]=2;
                }
            }
            if((my<=700)&&(my>=650))
            {
                ct=19;
                for(int lp=0;lp<21;lp++)
                {
                    if(ct==lp)
                    {
                        sc[lp]=12;
                    }
                    else sc[lp]=2;
                }
            }
        }
//------------------------------------------------------------
        if((mx<=650)&&(mx>=500))
        {
            if((my<=100)&&(my>=50))
            {
                ct=2;
                for(int lp=0;lp<21;lp++)
                {
                    if(ct==lp)
                    {
                        sc[lp]=12;
                    }
                    else sc[lp]=2;
                }
            }
            if((my<=200)&&(my>=150))
            {
                ct=5;
                for(int lp=0;lp<21;lp++)
                {
                    if(ct==lp)
                    {
                        sc[lp]=12;
                    }
                    else sc[lp]=2;
                }
            }
            if((my<=300)&&(my>=250))
            {
                ct=8;
                for(int lp=0;lp<21;lp++)
                {
                    if(ct==lp)
                    {
                        sc[lp]=12;
                    }
                    else sc[lp]=2;
                }
            }
            if((my<=400)&&(my>=350))
            {
                ct=11;
                for(int lp=0;lp<21;lp++)
                {
                    if(ct==lp)
                    {
                        sc[lp]=12;
                    }
                    else sc[lp]=2;
                }
            }
            if((my<=500)&&(my>=450))
            {
                ct=14;
                for(int lp=0;lp<21;lp++)
                {
                    if(ct==lp)
                    {
                        sc[lp]=12;
                    }
                    else sc[lp]=2;
                }
            }
            if((my<=600)&&(my>=550))
            {
                ct=17;
                for(int lp=0;lp<21;lp++)
                {
                    if(ct==lp)
                    {
                        sc[lp]=12;
                    }
                    else sc[lp]=2;
                }
            }
            if((my<=700)&&(my>=650))
            {
                ct=20;
                for(int lp=0;lp<21;lp++)
                {
                    if(ct==lp)
                    {
                        sc[lp]=12;
                    }
                    else sc[lp]=2;
                }
            }
        }
//------------------------------------------------------------
    }

}

void  ChooseTime :: chooseTimeZone()//Function which executes complete ChooseTime class
{
    setcurrentwindow(windtm);
    setbkcolor(YELLOW);

    setactivepage(pagetm);
    setvisualpage(1-pagetm);
    cleardevice();
    chooseLayout();
    pagetm = 1- pagetm;
    chooseTimeValue();

    return ;
    getch();
    closegraph();
}

class ChooseWindow//class for choosing Time or Alarm
{
    public:
    int mx,my,windc;//window parameters
    int width1,width2,height1,height2,width3,height3;//parameters for height and width of different text
    int pagec;//default page
    ChooseWindow()
    {
        windc= initwindow(700,600,"Choose Window",430,50,true,true);//To set windc as current window for further program execution
        pagec=0;
    }
    int methodChoose();//function declaration
};

int  ChooseWindow :: methodChoose()
{
    setcurrentwindow(windc);// To set current window as windc
    setbkcolor(WHITE);//To set background color as white
    width1 = textwidth("Time");//To get text width
    height1 = textheight("Time");//To get text height
    width2 = textwidth("Alarm Reminder");//To get text width
    height2 = textheight("Alarm Reminder");//To get text height
    width3 = textwidth("Click on any above box to continue!");//To get text width
    height3 = textheight("Click on any above box to continue!");//To get text height

    loop : //Label for the below block
    while(!ismouseclick(WM_LBUTTONDOWN))//To repeat until LEFT MOUSE BUTTON IS clicked
    {
        setactivepage(pagec);//To set active page
        setvisualpage(1-pagec);// To set Visual Page(For display)
        cleardevice();// To clear page
        setcolor(DARKGRAY);//To set text color
        rectangle(100,100,300,300);
        outtextxy(200-(width1/2),200-(height1/2),"Time");// Display "Time"
        rectangle(400,100,600,300);
        outtextxy(500-(width2/2),200-(height2/2),"Alarm Reminder");// Display "Alarm Reminder"
        rectangle(100,350,400,500);
        outtextxy(250-(width3/2),425-(height3/2),"Click on any above box to continue!");// Display "Click on any above box to continue! "
        setfillstyle(SOLID_FILL,BLACK);
        floodfill(50,50,DARKGRAY);//To fill rectangle boxes with Grey color
        pagec = 1- pagec;// To swap pages on next cycle
        delay(100);// To wait 100 milliseconds before further execution
    }
    getmouseclick(WM_LBUTTONDOWN, mx, my);//To get coordinates of mouse click on window
    if((my<=300)&&(my>=100))
    {
        if((mx<=300)&&(mx>=100))
        {
            return 1;
        }
        if((mx<=600)&&(mx>=400))
        {
            return -1;
        }
    }
    goto loop;//To repeat until mouse is clicked
    getch();
    closegraph();
}

class AlarmRemind//class for Alarm Reminder
{
    public:
    int mx,my,windar;//window parameters
    int maxx,maxy;//window height and width parameters
    int midx,midy;//center of the window
    char val[7],k;
    int page,ic;
    int h,m,ap,num;
    AlarmRemind()//AlarmRemind class constructor
    {
        windar= initwindow(700,600,"Alarm Reminder",430,50,true,true);//To set windar as current window for further program execution
        maxx=getmaxx();
        maxy=getmaxy();
        midx=maxx/2;
        midy=maxy/2;
        page=0;//default page
        num=0;
        ap=0;
        k=' ';// space
        for(int i=0;i<8;i++)//loop for array initialization
        {
            val[i] = k;
        }
    }
    void setAlarm();// To set alarm
    void setFileForAlarm();// To store alarm time onto a file
    void callTrying();// To call trying.exe (executable file) for alarm execution
};

void AlarmRemind :: setAlarm()//To set alarm
{
    setcurrentwindow(windar);//To set windar as current window for further execution
    setbkcolor(WHITE);//To set background color as white
        revert ://Label for below block
        setactivepage(page);//To set active page
        setvisualpage(1-page);//To set visual page(For Display)
        cleardevice();//To clear page

        // To display 'Set Alarm'
        setcolor(12);
        settextstyle(10 , HORIZ_DIR , 8);
        outtextxy(midx-(330),midy-(280),"Set Alarm");

        // To display 'Enter Time to snooze Alarm'
        setcolor(10);
        settextstyle(10 , HORIZ_DIR , 4);
        outtextxy(midx-(325),midy-(200),"Enter Time to snooze Alarm");

        // To display ' Example :: 11:59:am (In 12 hour format) '
        setcolor(13);
        settextstyle(10 , HORIZ_DIR , 2);
        outtextxy(midx-(310),midy-(160),"Example :: 11:59:am (In 12 hour format) ");

        // To display ' Example :: 01:59:pm (In 12 hour format) '
        setcolor(13);
        settextstyle(10 , HORIZ_DIR , 2);
        outtextxy(midx-(310),midy-(140),"Example :: 01:59:pm (In 12 hour format) ");

        setvisualpage(page);

        for(ic=0;ic<8;ic++) // To get user input for alarm
        {
           val[ic] = getch();
           setcolor(14);
           settextstyle(10 , HORIZ_DIR , 8);
           outtextxy(midx-(325),midy-(40),val);
        }

        // To verify whether Alarm is set correct or not
        if(((val[0]<50)&&(val[0]>47))&&((val[1]<58)&&(val[1]>47)))
        {
            if(((val[0]==48)&&((val[1]<58)&&(val[1]>47)))||((val[0]==49)&&((val[1]<51)&&(val[1]>47))))
            {
                if(((val[3]<54)&&(val[3]>47))&&((val[4]<58)&&(val[4]>47)))
                {
                    if(((val[6]=='p')||(val[6]=='a'))&&(val[7]=='m'))
                    {
                        h = 10*(val[0]-'0') + (val[1]-'0');
                        m = 10*(val[3]-'0') + (val[4]-'0');
                        if(val[6]=='p')
                        ap=1;
                        setcolor(9);
                        settextstyle(10 , HORIZ_DIR , 4);
                        outtextxy(midx-(325),midy+(80),"Alarm is set Succesfully !!!");
                        outtextxy(midx-(325),midy+(120),val);
                        outtextxy(midx-(325),midy+(160),"Press Any KEY to Continue");
                    }
                    else
                    {
                        setcolor(9);
                        settextstyle(10 , HORIZ_DIR , 3);
                        outtextxy(midx-(310),midy+(140),"Enter \''am\'' or \''pm\''! ");// To display error message
                        for(int i=0,k=' ';i<8;i++)
                        {
                            val[i] = k;
                        }
                        delay(2000);
                        goto revert;
                    }
                }
                else
                {
                    setcolor(9);
                    settextstyle(10 , HORIZ_DIR , 3);
                    outtextxy(midx-(310),midy+(140),"Enter Minutes in the range 00-59 only! ");// To display error message
                    for(int i=0,k=' ';i<8;i++)
                    {
                        val[i] = k;
                    }
                    delay(2000);
                    goto revert;
                }
            }
            else
            {
                setcolor(9);
                settextstyle(10 , HORIZ_DIR , 3);
                outtextxy(midx-(310),midy+(140),"Enter Hours in the range 01-12 only! ");// To display error message
                for(int i=0,k=' ';i<8;i++)
                {
                    val[i] = k;
                }
                delay(2000);
                goto revert;
            }
        }
        else
        {
            setcolor(9);
            settextstyle(10 , HORIZ_DIR , 3);
            outtextxy(midx-(310),midy+(140),"Enter Hours in the range 01-12 only! ");// To display error message
            for(int i=0,k=' ';i<8;i++)
            {
                val[i] = k;
            }
            delay(2000);
            goto revert;
        }
        delay(1000);

    getch();
    closegraph();
}

void AlarmRemind :: setFileForAlarm()// To write alarm time onto a file
{
   char chf = ' ';
   FILE *fptr;
   fptr = fopen("C:\\Users\\Manoj\\Desktop\\code\\AnalogClock\\alarm.txt","w");// To open a alarm.txt file

   if(fptr == NULL)
   {
      printf("Error!");// To display error if file is assigned or opened
      exit(1);
   }

   fprintf(fptr,"%d",h);
   fputc(chf,fptr);// To print hour value onto file

   fprintf(fptr,"%d",m);
   fputc(chf,fptr);// To print minute value onto file

   fprintf(fptr,"%d",ap);
   fputc(chf,fptr);// To print 'AM' or 'PM' value onto file

   fprintf(fptr,"%d",num);
   fputc(chf,fptr);// To print alarm execution status value onto file

   fclose(fptr);
}

void AlarmRemind :: callTrying()
{
    //ShellExecute(NULL, "open", "C:\\Users\\Manoj\\Desktop\\code\\AnalogClock\\bin\\Debug\\trying.exe", NULL, NULL, SW_SHOWDEFAULT);
    //int result = system("wscript tryy.vbs");
    int result = system("wscript \"\"C:\\Users\\Manoj\\Desktop\\code\\AnalogClock\\tryy.vbs\" ");// To execute tryy.vbs (Visual Basics Script) file from command prompt
}

int main()
{
    int ch;
    ChooseWindow obt;// ChooseWindow class object declaration
    ch = obt.methodChoose();
    if(ch==1)// If TRUE then display Time Zones and Analog Clock
    {
    twist :// Label for below block
    ChooseTime objw;
    objw.chooseTimeZone();
    AnalogClock obj;
    obj.methodClock();
    delay(100);
    while(1)
    {
        objw.chooseTimeZone();
        obj.methodClock();
        chtf++;// Incrementing chtf value for next image display onto window in next cycle
        delay(50);
    }
    }
    else// To set Alarm and execute the twist block
    {
    AlarmRemind objar;
    objar.setAlarm();
    objar.setFileForAlarm();
    objar.callTrying();
    goto twist;
    }

    return 0;
}

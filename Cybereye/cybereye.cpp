#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
//Threading
#include<limits.h>
#include<boost/thread.hpp>
#include<boost/chrono.hpp>
#include<boost/atomic.hpp>
#include<boost/bind.hpp>
#include<iostream>

using namespace cv;
using namespace boost;
using namespace std;

int hr;
int hr1;
int hr2;
int hr3;
int hr4;
int hr5;
int hr6;
int hr7;
int hr8;
int hr9;
int hr10;
int hr11;
int hr12;
int hr13;
int hr14;
int hr15;
int hr16;
int hr17;
int hr18;
int hr19;
int hr20;
int hr21;
int hr22;
int hr23;
int hr24;
int hr25;
int hr26;
int hr27;
int hr28;
int hr29;
int hr30;

void check_health()
{
  loop:
  int dead = 0; 
  int str;
  cin >> str;
  if(str == 1)
    {
      hr = dead;
    }
  if(str == 2)
    {
      hr = dead;
      hr1 = dead;
    }
  if(str == 3)
    {
      hr = dead;
      hr1 = dead;
      hr2 = dead;
    }
  if(str == 4)
    {
      hr = dead;
      hr1 = dead;
      hr2 = dead;
      hr3 = dead;
    }
  if(str == 5)
    {
      hr = dead;
      hr1 = dead;
      hr2 = dead;
      hr3 = dead;
      hr4 = dead;
    }
  if(str == 6)
    {
      hr = dead;
      hr1 = dead;
      hr2 = dead;
      hr3 = dead;
      hr4 = dead;
      hr5 = dead;
    }
  if(str == 7)
    {
      hr = dead;
      hr1 = dead;
      hr2 = dead;
      hr3 = dead;
      hr4 = dead;
      hr5 = dead;
      hr6 = dead;
    }
  if(str == 8)
    {
      hr = dead;
      hr1 = dead;
      hr2 = dead;
      hr3 = dead;
      hr4 = dead;
      hr5 = dead;
      hr6 = dead;
      hr7 = dead;
    }
  if(str == 9)
    {
      hr = dead;
      hr1 = dead;
      hr2 = dead;
      hr3 = dead;
      hr4 = dead;
      hr5 = dead;
      hr6 = dead;
      hr7 = dead;
      hr8 = dead;
    }
  if(str == 10)
    {
      hr = dead;
      hr1 = dead;
      hr2 = dead;
      hr3 = dead;
      hr4 = dead;
      hr5 = dead;
      hr6 = dead;
      hr7 = dead;
      hr8 = dead;
      hr9 = dead;
    }
  if(str == 11)
    {
      hr = dead;
      hr1 = dead;
      hr2 = dead;
      hr3 = dead;
      hr4 = dead;
      hr5 = dead;
      hr6 = dead;
      hr7 = dead;
      hr8 = dead;
      hr9 = dead;
      hr10 = dead;
    }
  if(str == 12)
    {
      hr = dead;
      hr1 = dead;
      hr2 = dead;
      hr3 = dead;
      hr4 = dead;
      hr5 = dead;
      hr6 = dead;
      hr7 = dead;
      hr8 = dead;
      hr9 = dead;
      hr10 = dead;
      hr11 = dead;
    }
  if(str == 13)
    {
      hr = dead;
      hr1 = dead;
      hr2 = dead;
      hr3 = dead;
      hr4 = dead;
      hr5 = dead;
      hr6 = dead;
      hr7 = dead;
      hr8 = dead;
      hr9 = dead;
      hr10 = dead;
      hr11 = dead;
      hr12 = dead;
    }
  if(str == 14)
    {
      hr = dead;
      hr1 = dead;
      hr2 = dead;
      hr3 = dead;
      hr4 = dead;
      hr5 = dead;
      hr6 = dead;
      hr7 = dead;
      hr8 = dead;
      hr9 = dead;
      hr10 = dead;
      hr11 = dead;
      hr12 = dead;
      hr13 = dead;
    }
  if(str == 15)
    {
    hr = dead;
      hr1 = dead;
      hr2 = dead;
      hr3 = dead;
      hr4 = dead;
      hr5 = dead;
      hr6 = dead;
      hr7 = dead;
      hr8 = dead;
      hr9 = dead;
      hr10 = dead;
      hr11 = dead;
      hr12 = dead;
      hr13 = dead;
      }
  if(str == 16)
    {
      hr = dead;
    }
  if(str == 17)
    {
      hr = dead;
    }
  if(str == 18)
    {
      hr = dead;
    }
  if(str == 19)
    {
      hr = dead;
    }
  if(str == 20)
    {
      hr = dead;
    }
  if(str == 21)
    {
      hr = dead;
    }
  if(str == 22)
    {
      hr = dead;
    }
  if(str == 23)
    {
      hr = dead;
    }
  if(str == 24)
    {
      hr = dead;
    }
  if(str == 25)
    {
      hr = dead;
    }
  if(str == 26)
    {
      hr = dead;
    }
  if(str == 27)
    {
      hr = dead;
    }
  if(str == 28)
    {
      hr = dead;
    }
  if(str == 29)
    {
      hr = dead;
    }
  if(str == 30)
    {
      hr = dead;
    }
  if(str == 31)
    {
      hr = dead;
    }
  goto loop;
}

int main(){
  thread ih{&check_health};
  VideoCapture vid(0);
  Mat img;
  if(!vid.isOpened())
        return 0;

  Rect r = Rect(10,20,250,20);
  
  Rect r0 = Rect(15,25,5,10);
  Rect r01 = Rect(23,25,5,10);
  Rect r02 = Rect(31,25,5,10);
  Rect r03 = Rect(39,25,5,10);
  Rect r04 = Rect(47,25,5,10);
  Rect r05 = Rect(55,25,5,10);
  Rect r06 = Rect(63,25,5,10);
  Rect r07 = Rect(71,25,5,10);
  Rect r08 = Rect(79,25,5,10);
  Rect r09 = Rect(87,25,5,10);
  Rect r010 = Rect(95,25,5,10);
  Rect r011 = Rect(103,25,5,10);
  Rect r012 = Rect(111,25,5,10);
  Rect r013 = Rect(119,25,5,10);
  Rect r014 = Rect(127,25,5,10);
  Rect r015 = Rect(135,25,5,10);
  Rect r016 = Rect(143,25,5,10);
  Rect r017 = Rect(151,25,5,10);
  Rect r018 = Rect(159,25,5,10);
  Rect r019 = Rect(167,25,5,10);
  Rect r020 = Rect(175,25,5,10);
  Rect r021 = Rect(183,25,5,10);
  Rect r022 = Rect(191,25,5,10);
  Rect r023 = Rect(199,25,5,10);
  Rect r024 = Rect(207,25,5,10);
  Rect r025 = Rect(215,25,5,10);
  Rect r026 = Rect(223,25,5,10);
  Rect r027 = Rect(231,25,5,10);
  Rect r028 = Rect(239,25,5,10);
  Rect r029 = Rect(247,25,5,10);
  Rect r030 = Rect(255,25,5,10);

  Rect r2 = Rect(10,40,200,10);
  Rect r3 = Rect(10,60,200,10);
  hr = 255;
  for(;;)
    {
      vid >> img;
      rectangle(img,r,Scalar(0,0,255),3,8,0);
      //Health Bar
      rectangle(img,r0,Scalar(0,0,hr),3,8,0);
      rectangle(img,r01,Scalar(0,0,hr1),3,8,0);
      rectangle(img,r02,Scalar(0,0,hr2),3,8,0);
      rectangle(img,r03,Scalar(0,0,hr3),3,8,0);
      rectangle(img,r04,Scalar(0,0,hr4),3,8,0);
      rectangle(img,r05,Scalar(0,0,hr5),3,8,0);
      rectangle(img,r06,Scalar(0,0,hr6),3,8,0);
      rectangle(img,r07,Scalar(0,0,hr7),3,8,0);
      rectangle(img,r08,Scalar(0,0,hr8),3,8,0);
      rectangle(img,r09,Scalar(0,0,hr9),3,8,0);
      rectangle(img,r010,Scalar(0,0,hr10),3,8,0);
      rectangle(img,r011,Scalar(0,0,hr11),3,8,0);
      rectangle(img,r012,Scalar(0,0,hr12),3,8,0);
      rectangle(img,r013,Scalar(0,0,hr13),3,8,0);
      rectangle(img,r014,Scalar(0,0,hr14),3,8,0);
      rectangle(img,r015,Scalar(0,0,hr15),3,8,0);
      rectangle(img,r016,Scalar(0,0,hr16),3,8,0);
      rectangle(img,r017,Scalar(0,0,hr17),3,8,0);
      rectangle(img,r018,Scalar(0,0,hr18),3,8,0);
      rectangle(img,r019,Scalar(0,0,hr19),3,8,0);
      rectangle(img,r020,Scalar(0,0,hr20),3,8,0);
      rectangle(img,r021,Scalar(0,0,hr21),3,8,0);
      rectangle(img,r022,Scalar(0,0,hr22),3,8,0);
      rectangle(img,r023,Scalar(0,0,hr23),3,8,0);
      rectangle(img,r024,Scalar(0,0,hr24),3,8,0);
      rectangle(img,r025,Scalar(0,0,hr25),3,8,0);
      rectangle(img,r026,Scalar(0,0,hr26),3,8,0);
      rectangle(img,r027,Scalar(0,0,hr27),3,8,0);
      rectangle(img,r028,Scalar(0,0,hr28),3,8,0);
      rectangle(img,r029,Scalar(0,0,hr29),3,8,0);
      rectangle(img,r030,Scalar(0,0,hr30),3,8,0);
  
      rectangle(img,r2,Scalar(255,0,0),3,8,0);
      rectangle(img,r3,Scalar(255,0,0),3,8,0);
      imshow("Cyber Vision", img);
      if( waitKey(10) == 27 )
            break;
    }
}
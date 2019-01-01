#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace cv;

int main(){
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
  for(;;)
    {
      vid >> img;
      rectangle(img,r,Scalar(0,0,255),3,8,0);
      //Health Bar
      rectangle(img,r0,Scalar(0,0,255),3,8,0);
      rectangle(img,r01,Scalar(0,0,255),3,8,0);
      rectangle(img,r02,Scalar(0,0,255),3,8,0);
      rectangle(img,r03,Scalar(0,0,255),3,8,0);
      rectangle(img,r04,Scalar(0,0,255),3,8,0);
      rectangle(img,r05,Scalar(0,0,255),3,8,0);
      rectangle(img,r06,Scalar(0,0,255),3,8,0);
      rectangle(img,r07,Scalar(0,0,255),3,8,0);
      rectangle(img,r08,Scalar(0,0,255),3,8,0);
      rectangle(img,r09,Scalar(0,0,255),3,8,0);
      rectangle(img,r010,Scalar(0,0,255),3,8,0);
      rectangle(img,r011,Scalar(0,0,255),3,8,0);
      rectangle(img,r012,Scalar(0,0,255),3,8,0);
      rectangle(img,r013,Scalar(0,0,255),3,8,0);
      rectangle(img,r014,Scalar(0,0,255),3,8,0);
      rectangle(img,r015,Scalar(0,0,255),3,8,0);
      rectangle(img,r016,Scalar(0,0,255),3,8,0);
      rectangle(img,r017,Scalar(0,0,255),3,8,0);
      rectangle(img,r018,Scalar(0,0,255),3,8,0);
      rectangle(img,r019,Scalar(0,0,255),3,8,0);
      rectangle(img,r020,Scalar(0,0,255),3,8,0);
      rectangle(img,r021,Scalar(0,0,255),3,8,0);
      rectangle(img,r022,Scalar(0,0,255),3,8,0);
      rectangle(img,r023,Scalar(0,0,255),3,8,0);
      rectangle(img,r024,Scalar(0,0,255),3,8,0);
      rectangle(img,r025,Scalar(0,0,255),3,8,0);
      rectangle(img,r026,Scalar(0,0,255),3,8,0);
      rectangle(img,r027,Scalar(0,0,255),3,8,0);
      rectangle(img,r028,Scalar(0,0,255),3,8,0);
      rectangle(img,r029,Scalar(0,0,255),3,8,0);
      rectangle(img,r030,Scalar(0,0,255),3,8,0);
  
      rectangle(img,r2,Scalar(255,0,0),3,8,0);
      rectangle(img,r3,Scalar(255,0,0),3,8,0);
      imshow("Webcam", img);
      if( waitKey(10) == 27 )
            break;
    }
  //imwrite("myImageWithRect.jpg",img);
  return 0;
}

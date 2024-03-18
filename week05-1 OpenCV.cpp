#include <opencv/highgui.h>
int main()
{
    IplImage*img=cvLoadImage("c:/micky.jpg");
    cvShowImage("img",img);
    cvWaitKey(0);
}

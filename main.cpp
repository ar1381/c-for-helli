#include <iostream>
#include <graphics.h>
using namespace std;
void mm(int,int,int,int,int,int,int,int,int);
main()
{
    int n;
    cin>>n;
    initwindow(800,800);
    mm(n,0,0,800,0,800,800,0,800);
	getch();
}
void mm(int k,int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4)
{
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x4,y4);
    line(x4,y4,x1,y1);
    line(((x1+x2)/2),((y1+y2)/2),((x2+x3)/2),((y2+y3)/2));
    line(((x2+x3)/2),((y2+y3)/2),((x3+x4)/2),((y3+y4)/2));
    line(((x3+x4)/2),((y3+y4)/2),((x1+x4)/2),((y1+y4)/2));
    line(((x1+x4)/2),((y1+y4)/2),((x1+x2)/2),((y1+y2)/2));
    line((((x1+x2)/2)+((x2+x3)/2))/2,(((y1+y2)/2)+((y2+y3)/2))/2,((((x3+x4)/2)+(x1+x4)/2))/2,((((y3+y4)/2)+(y1+y4)/2))/2);
    line((((x3+x2)/2)+((x4+x3)/2))/2,(((y3+y2)/2)+((y4+y3)/2))/2,((((x1+x4)/2)+(x1+x2)/2))/2,((((y1+y4)/2)+(y1+y2)/2))/2);
    int X1 = (((x1+x2)/2)+((x2+x3)/2))/2,Y1 = (((y1+y2)/2)+((y2+y3)/2))/2,X2 = (((x3+x2)/2)+((x4+x3)/2))/2,Y2 = (((y3+y2)/2)+((y4+y3)/2))/2
    ,X3= ((((x3+x4)/2)+(x1+x4)/2))/2,Y3 = ((((y3+y4)/2)+(y1+y4)/2))/2,X4 = ((((x1+x4)/2)+(x1+x2)/2))/2,Y4 = ((((y1+y4)/2)+(y1+y2)/2))/2;
    int x11=(x1+x2)/2, x22=(x2+x3)/2, x33=(x3+x4)/2,x44=(x4+x1)/2;
    int y11 = (y1+y2)/2, y22=(y2+y3)/2, y33 = (y3+y4)/2, y44 = (y4+y1)/2;
    int x55 = (x2+x4)/2,y55 = (y2+y4)/2;
    cout <<"x1"<<X1<<"(X1 + (x1+x2))/2"<<(X1 + (x1+x2))/2;
  //  getch();
    if(k>1){
        /*mm(k-1,(X1 + (x1+x2)/2)/2, (Y1 + (y1+y2)/2)/2,(X1 + (x1+x2)/2)/2,(Y1 + (y1+y4)/2)/2,((x1+x2)/2 + X4)/2, (Y1 + (y1+y4)/2)/2, (X4+(x1+x2)/2)/2,(Y1 + (y1+y2)/2)/2);
        //mm(k-1,(X1 + (x1+x2)/2)/2,(Y1 + (y2+y4)/2)/2, (X1 + (x2+x4)/2)/2,(Y1 + (y2+y4)/2)/2,(X2+(x2+x4)/2)/2, (Y2 + (y2+y4)/2)/2, (X2+ (x1+x2)/2)/2, (Y2 +(y2+y4)/2)/2);
        mm(k-1,(X2+(x1+x2)/2)/2,(Y2+(y1+y4)/2)/2,(X2 + (x1+x2)/2)/2,(Y2+(y3+y4)/2)/2,((x1+x2)/2+ X3)/2, (Y2+(y3+y4)/2)/2,(X3 + (x1+x2)/2)/2,(Y3+(y1+y4)/2)/2);
        mm(k-1, (X3 + (x4+x3)/2)/2, (Y3 + (y2+y3)/2)/2, ((x1+x4)/2 + X3)/2, ((y4+y1)/2 + Y3)/2, ((x1+x4)/2+ X4)/2, ((y1+y4)/2 + Y4)/2, (X4+ (x1+x2)/2)/2,(Y4+(y2+y3)/2)/2);
    */
        mm(k-1, (x11+X1)/2, (y11+Y1)/2, (X1+(x2+x4)/2)/2, (Y1+ (y2+y4)/2)/2, ((x2+x4)/2 + X4)/2, ((y2+y4)/2 + Y4)/2, (X4+x11)/2, (Y4+y11)/2);
        mm(k-1, (X1+x22)/2,(Y1+y22)/2, (x22+X2)/2, (y22+Y2)/2, (X2+(x2+x4)/2)/2, (Y2+ (y2+y4)/2)/2, ((x2+x4)/2 + X1)/2, ((y2+y4)/2+Y1)/2);
        mm(k-1, (x55+X2)/2, (y55+Y2)/2, (X2+x33)/2, (Y2+y33)/2, (x33+X3)/2, (y33+Y3)/2, (X3+x55)/2,(Y3+y55)/2);
        mm(k-1, (X4 +x55)/2, (Y4+y55)/2, (x55+X3)/2,(y55+Y3)/2, (X3+x44)/2, (Y3+y44)/2, (x44+X4)/2,(y44+Y4)/2);
    }

}

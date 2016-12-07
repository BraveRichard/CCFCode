#include <iostream>
#include <stdlib.h>
#include <memory.h>
#define  MAXSIZE  100
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using  namespace  std;

int main(int argc, char** argv) 
{
  int*  rectangle;
  int  totalCount = 0;
  int  minx1 = 0,miny1 = 0;
  int  maxx2 = 0,maxy2 = 0;
  int  result = 0;
  rectangle = (int *)malloc(sizeof(int) * MAXSIZE * MAXSIZE);
  memset(rectangle,0,sizeof(int) * MAXSIZE * MAXSIZE);
  cin >> totalCount;
  for(int count = 0;count < totalCount;++ count)
  {
    int  x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    minx1 = minx1 < x1 ? minx1 : x1;
    miny1 = miny1 < y1 ? miny1 : y1;
    maxx2 = maxx2 > x2 ? maxx2 : x2;
    maxy2 = maxy2 > y2 ? maxy2 : y2;
    for (int county = y1;county < y2;++ county)
    {
      for (int countx = x1;countx < x2;++ countx)
      {
        rectangle[county * MAXSIZE + countx] = 1;
      }
    }
  }
  for (int county = miny1;county < maxy2;++ county)
  {
    for (int countx = minx1;countx < maxx2;++ countx)
    {
      result = rectangle[county * MAXSIZE + countx] == 1 ? (result + 1) : result;
    }
  }
  free(rectangle);
  cout << result;

  return 0;
}


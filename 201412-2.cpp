#include <iostream>
#include <stdlib.h>
#include <memory>
#include <vector>
#define HOR 0
#define LEFT 1
#define VER 2
#define RIGHT 3

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


using namespace std;
int main(int argc, char** argv) 
{
  int total;
  int*  pic;
  cin >> total;
  pic = (int*)malloc(sizeof(int) * total * total);
  int countx = 0,county = 0;
  for (county = 0;county < total;++ county)
  {
    for (countx = 0;countx < total;++ countx)
    {
      cin >> pic[county * total + countx];
    }
  }
  int  director = 0;
//        0       0
//    _______   ______               
//          /  /          ----------->x
//         /  /           |         
//      1 /  /          y |          
//       /  /  3          |          
//      /  /              |        
//  2 |  /
//    |
  countx = 0;
  county = 0;
  while ((countx < total) && (county < total))
  {
    switch (director)
    {
      case HOR:
      {
        cout << pic[county * total + countx] << ' ';
        ++ countx;        
        director = (county == (total - 1)) ? RIGHT : LEFT;
        break;
      }
      case LEFT:
      {
        cout << pic[county * total + countx] << ' ';
        -- countx;
        ++ county;
        if (!countx || (county == (total - 1)))
        {
          director = (county == (total - 1)) ? HOR :  VER;        
        }
        break;
      }
      case VER:
      {
        cout << pic[county * total + countx] << ' ';
        ++ county;
        director = (countx == (total - 1)) ? LEFT : RIGHT;
        break;
      }
      case RIGHT:
      {
        cout << pic[county * total + countx] << ' ';
        ++ countx;
        -- county;
        if (!county || (countx == (total - 1)))
        {
          director = (countx == (total - 1)) ? VER : HOR;
        }
        break;
      }
    }
  }
  free(pic);
  return 0;
}

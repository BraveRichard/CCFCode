#include <iostream>
#include <stdlib.h>
#include <memory.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using  namespace  std;

int main(int argc, char** argv) 
{
  int  colum,row;
  int* pic;
  cin >> row >> colum;
  pic = (int *)malloc(sizeof(int) * colum * row);
  for (int count = 0;count < colum * row;++ count)
  {
    cin >> pic[count];
  }
  for (int countC = colum - 1;countC >= 0;-- countC)
  {
    for (int countR = 0;countR < row;++ countR)
    {
      cout << pic[countR * colum + countC] << ' ';
    }
    cout << endl;
  }
  free(pic);
  return 0;
}



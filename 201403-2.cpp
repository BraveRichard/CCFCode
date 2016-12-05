#include <iostream>
#include <vector>
#include <stdlib.h>
#include <memory.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using  namespace  std;
#define  MAXSIZEX  2559
#define  MAXSIZEY  1439

void  set(int x1,int y1,int x2,int y2,int number,int *win)
{
  for (int county = y1;county <= y2;++ county)
  {
    for (int countx = x1;countx <= x2;++ countx)
    {
      win[county * MAXSIZEX + countx] = number;
    }
  }
}

int main(int argc, char** argv) 
{
  int  *window;
  int  countWindow = 0,countClick = 0;
  vector<vector<int> >  smallWindow;
  int  tempx1,tempy1,tempx2,tempy2;

  window = (int*)malloc(sizeof(int)*MAXSIZEX*MAXSIZEY);
  memset(window,0,sizeof(int)*MAXSIZEX*MAXSIZEY);

  cin >> countWindow >> countClick;
  for (int count = 0;count < countWindow;++ count)
  {
    cin >> tempx1 >> tempy1 >> tempx2 >> tempy2;
    vector<int>  inputtemp;
    inputtemp.push_back(tempx1);
    inputtemp.push_back(tempy1);
    inputtemp.push_back(tempx2);
    inputtemp.push_back(tempy2);
    smallWindow.push_back(inputtemp);
    set(tempx1,tempy1,tempx2,tempy2,count + 1,window);
  }
  for(int count = 0;count < countClick;++ count)
  {
    cin >> tempx1 >> tempy1;
    if (window[tempy1 * MAXSIZEX + tempx1] == 0)
    {
      cout << "IGNORED" << endl;
    }
    else
    {
      int  clikWindow = window[tempy1 * MAXSIZEX + tempx1];
      cout << clikWindow << endl;
      set(smallWindow[clikWindow - 1][0],smallWindow[clikWindow - 1][1],smallWindow[clikWindow - 1][2],smallWindow[clikWindow - 1][3],clikWindow,window);
    }
  }
  free(window);
  return 0;
}

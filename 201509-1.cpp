#include <iostream>
#include <stdlib.h>
#include <memory.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using  namespace  std;

int main(int argc, char** argv) 
{
  int total;
  int* num;
  int numDiff = 1;
  cin >> total;
  num = (int*)malloc(sizeof(int) * total);
  for(int count = 0;count < total;++ count)
  {
    cin >> num[count];
  }
  for (int count = 0;count < total - 1;++ count)
  {
    if (num[count] != num[count + 1])
    {
      ++ numDiff;
    }
  }
  cout << numDiff;
  free(num);
  return 0;
}



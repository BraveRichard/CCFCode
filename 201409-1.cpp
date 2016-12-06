#include <iostream>
#include <vector>
#include <map>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using  namespace  std;

int main(int argc, char** argv) 
{
  int  inputNumber = 0;
  map<int,int>  keyValue;
  map<int,int>::iterator it;
  int  totalNumber = 0;
  cin >> inputNumber;
  for (int count = 0;count < inputNumber;++ count)
  {
    int temp =0;
    cin >> temp;
    keyValue[temp] = count;
  }
  for (it = keyValue.begin();it != keyValue.end();++ it)
  {
    if (keyValue.find(it->first - 1) != keyValue.end())
    {
      ++ totalNumber;
    }
  }
  cout << totalNumber;
  return 0;
}


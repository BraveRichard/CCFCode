#include <iostream>
#include <map>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using  namespace  std;

int main(int argc, char** argv) 
{
  int  totalNumber;
  map<int,int>  record;
  cin >> totalNumber;
  for (int count = 0;count < totalNumber;++ count)
  {
    int input;
    cin >> input;
    map<int,int>::iterator  it;
    it = record.find(input);
    if(it != record.end())
    {
      it->second = it->second + 1;
      cout << it->second << ' ';
    }
    else
    {
      record[input] = 1;
      cout << 1 << ' ';
    }
  }
  return 0;
}

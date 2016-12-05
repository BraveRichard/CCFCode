#include <iostream>
#include <map>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int  main(int argc, char** argv) 
{
  map<int,int>  numCount;
  map<int,int>::iterator  mIter;
  int  total = 0;
  int  input;
  int  result = 0;
  int  max = 0;
  cin >> total;
  while (total)
  {
    cin >> input;
    mIter = numCount.find(input);
    if(numCount.end() == mIter)
    {
      numCount.insert(pair<int,int> (input,1));
    }
    else
    {
      mIter->second += 1;
    }
    total --;
}
  for(mIter = numCount.begin();mIter != numCount.end();++mIter)
  {
    if(mIter->second > max)
    {
      result = mIter->first;
      max = mIter->second;
    }
  }
  cout << result;
  return 0;
}

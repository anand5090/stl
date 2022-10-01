#include<conio.h>
#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int>d1;
    for(int i=1;i<=5;i++)
    d1.push_back(i*2);
    for(int num:d1)
    cout<<num<<" ";
    cout<<endl;
    d1.insert(d1.begin()+1,20);
    for(int num:d1)
    cout<<num<<" ";
    cout<<endl;
      d1.insert(d1.begin()+1,3,10);
      for(int num:d1)
    cout<<num<<" ";
    cout<<endl;
        d1.insert(d1.begin()+1,{30,40,50});
        for(int num:d1)
    cout<<num<<" ";
    cout<<endl;
    cout<<d1.size();
    


}
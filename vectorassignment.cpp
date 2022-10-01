#include<conio.h>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v1;
    v1.push_back(10);
    v1.insert(v1.begin(),20);
    v1.insert(v1.begin()+1,4,30);
    int a=11,b=12,c=13;
    v1.insert(v1.begin()+2,{a,b,c});
    for(int num:v1)
    cout<<num<<" ";
    cout<<endl;
    vector<int>v2;
    v2.insert(v2.begin(),v1.rbegin(),v1.rbegin()+5);
     for(int num:v2)
    cout<<num<<" ";
    cout<<endl;
    v2.erase(v2.begin()+1);
     for(int num:v2)
    cout<<num<<" ";
    cout<<endl;
    v1.erase(v1.begin()+3,v1.begin()+6);
     for(int num:v1)
    cout<<num<<" ";
    cout<<endl;
    }

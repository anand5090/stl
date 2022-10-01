#include<conio.h>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>>vec;
    vector<int>v1{10,4,8,9,12};
    vector<int>v2{6,13,47,45};
   vector<int>v3{14,17,12,11};
   vec.push_back(v1);
   vec.insert(vec.end(),{v2,v3});
   vector<vector<int>> :: iterator it;
   for(it=vec.begin();it!=vec.end();it++)
   {
    for(auto x:*it)
    cout<<x<<" ";
    cout<<endl;
   }

}
#include<conio.h>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.pop_back();
    for(auto it=v1.begin();it!=v1.end();it++)
    cout<<*it<<"  ";
    cout<<endl;
    cout<<v1.size()<<endl;

    //INSERT()


  /*  cout<<v1.at(1)<<endl;
    v1.insert(v1.begin()+1,45);
    for(int num:v1)
    cout<<num<<"  ";
    cout<<endl;  


    v1.insert(v1.begin()+1,3,45);
    for(int num:v1)
    cout<<num<<"  ";
    cout<<endl;

    */
   v1.insert(v1.begin()+1,{44,48,50});
    for(int num:v1)
    cout<<num<<"  ";
    cout<<endl;

    //ERASE()

    v1.erase(v1.begin()+2);
    for(int num:v1)
    cout<<num<<"  ";
    cout<<endl;
    cout<<v1.size();


}
#include<conio.h>
#include<iostream>
#include<array>
using namespace std;
int main()
{
    int i,n;
    array<int,10>a1;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    for(i=0;i<10;i++)
    {
        cin>>a1[i];
        
    }
    for(i=0;i<10;i++)
    {
       if((a1[i]%2)!=0)
       
       {
        cout<<a1[i]<<" ";
    }
}}
#include<conio.h>
#include<iostream>
#include<array>
using namespace std;
int main()
{
   // array<int,5> a1{70,90,60,40,66};
     array<int,5> a2{10,50,40,60,70};
     auto it3=a2.begin();
     cout<<*it3<<" "<<endl;
  auto it4=a2.end();
  cout<<*it4<<endl;

 
array<int,5> :: reverse_iterator it1;
  for(auto it1=a2.rbegin();it1!=a2.rend();it1++)
  cout<<*it1<<"  ";
  cout<<endl;
  array<int,5> :: const_iterator it2;
  for(auto it2=a2.begin();it2!=a2.end();it2++)
  cout<<*it2<<"  ";
  cout<<endl;

  //max_size()function  

    cout<<a2.max_size()<<endl;

    //at() funtion


   cout<<a2.at(3)<<"     -    "<<a2[3]<<endl;

    //HOW TO ACCESS ARRAY ELEMENT USING EXPLICIT ITERATOR
    
    
   // for(auto it=a2.begin();it!=a2.end();it++)
   // cout<<*it<<"  "<<endl;


    //HOW TO ACCESS ARRAY ELEMENT USING IMPLICIT ITERATOR(RANGE-FOR LOOP)
   // for(int num:a2)
    //cout<<num<<" ";


    // swap()

/*  a1.swap(a2);
   //printing the first array
     for(auto it=a1.begin();it!=a1.end();it++)
cout<<*it<<"  "<<endl;

//printing the second array
  for(auto it=a2.begin();it!=a2.end();it++)
cout<<*it<<"  "<<endl;

//    =
  a2=a1;
   for(auto it=a2.begin();it!=a2.end();it++)
cout<<*it<<"  "<<endl;*/

  

}
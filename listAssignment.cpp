#include<conio.h>
#include<iostream>
#include<list>
using namespace std;
int main()
{
  /*  
list<int>l1;
l1.push_back(10);
l1.push_front(20);
for(auto it=l1.begin();it!=l1.end();it++)
cout<<*it<<" ";
cout<<endl;
//cout<<l1.front()<<endl;
//cout<<l1.back();
list<int> :: iterator it=l1.begin();
it++;
l1.insert(it,30);
for(int num:l1)
cout<<num<<" ";
cout<<endl;

it=l1.begin();
it++;
it++;
l1.insert(it,{22,44,33});
for(auto it=l1.begin();it!=l1.end();it++)
cout<<*it<<" ";
cout<<endl;
l1.pop_front();
for(int num:l1)
cout<<num<<" ";
cout<<endl;
l1.pop_back();
for(int num:l1)
cout<<num<<" ";
cout<<endl;
l1.push_front(30);
for(int num:l1)
cout<<num<<" ";
cout<<endl;
l1.unique();
for(int num:l1)
cout<<num<<" ";
cout<<endl;
*/

// MERGE THE LIST

list<int>l1{15,35,45};
list<int>l2{10,20,30,40,55,60,70,30};
l2.merge(l1);
for(auto it=l2.begin();it!=l2.end();it++)
cout<<*it<<" ";
cout<<endl;





//Erase all the element of list expect first and last element using erase method

/*list<int>l1{10,20,30,40,55,60,70,30};


list<int> :: iterator it1=l1.begin();
it1++;
list<int> :: iterator it2=l1.end();
it2--;
l1.erase(it1,it2);

for(auto it=l1.begin();it!=l1.end();it++)
cout<<*it<<" ";
cout<<endl;
*/

//Edit the second last element with new value 25
/*
list<int> :: iterator it=l1.end();
it--;
l1.assign(it,25);
for(auto it=l1.begin();it!=l1.end();it++)
cout<<*it<<" ";
cout<<endl;
*/


}



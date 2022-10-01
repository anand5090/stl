#include<conio.h>
#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
    forward_list<int>l1;
    l1.push_front(10);
    l1.emplace_front(20);
    for(int num:l1)
    cout<<num<<" "<<endl;
    l1.emplace_after(l1.begin(),30);
    for(auto it=l1.begin();it!=l1.end();it++)
    cout<<*it<<" ";
    cout<<endl; 
    forward_list<int>:: iterator it=l1.begin();
     it++;
     it++;
    l1.insert_after(it,22);
     for(int num:l1)
    cout<<num<<" ";
    cout<<endl;
    cout<<"length is="<<endl;
    int length=0;
    for( it=l1.begin();it!=l1.end();it++,length++);
      for(int num:l1)
    cout<<num<<" ";
    cout<<endl;

 //EDIT SECOND LAST ELEMENT OF THE LIST WITH NEW ELEMENT VALUE 75
    

for(length=0,it=l1.begin();it!=l1.end();it++,length++);
int i=1;
for(it=l1.begin();i<length-1;it++,i++);
*it=75;
 for(int num:l1)
    cout<<num<<" ";
    cout<<endl;
    l1.erase_after(l1.begin(),l1.end());
     for(int num:l1)
    cout<<num<<" ";
    cout<<endl;
 


    // store ELEMENT 35 AS LAST ELEMENT
for(it=l1.begin();i<length;it++,i++);
l1.insert_after(it,35);
 for(int num:l1)
    cout<<num<<" ";
    cout<<endl;
    /*cout<<l1.front()<<endl;
    l1.pop_front();
     for(int num:l1)
    cout<<num<<" ";
    cout<<endl;
    it=l1.begin();
    l1.erase_after(it);
     for(int num:l1)
    cout<<num<<" ";
    cout<<endl;
    l1.assign({20,40,60,80,100,120});
     for(int num:l1)
    cout<<num<<" ";
    cout<<endl;
    it++;
    l1.erase_after(l1.begin());
     for(int num:l1)
    cout<<num<<" ";
    cout<<endl;
    l1.remove(100);
     for(int num:l1)
    cout<<num<<" ";
    cout<<endl;
    l1.reverse();
    for(auto it=l1.begin();it!=l1.end();it++)
  cout<<*it<<" ";
  cout<<endl;


  





  //ERASE ALL ELEMENT EXCEPT FIRST ELEMENT
   forward_list<int>:: iterator it1=l1.end();
  l1.erase_after(l1.begin(),it1);
  for(int num:l1)
    cout<<num<<" ";
    cout<<endl;
*/


     
    


    



}







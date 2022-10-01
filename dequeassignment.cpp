#include<conio.h>
#include<iostream>
#include<deque>
#include<vector>
#include<algorithm>
using namespace std;
void reverseDeque(deque<int> &d);
vector<int> dequeToVector(deque<int> d);

int main()
{
deque<int >d1;
for(int i=1;i<=5;i++)
d1.push_back(i*10);
for(auto it=d1.begin();it!=d1.end();it++)
cout<<*it<<" ";
cout<<endl;
d1.pop_front();
for(auto it=d1.begin();it!=d1.end();it++)
cout<<*it<<" ";
cout<<endl;
//deque<int> :: iterator it=d1.end();

d1.insert(d1.end(),60);
for(auto it=d1.begin();it!=d1.end();it++)
cout<<*it<<" ";
cout<<endl;



d1.insert(d1.begin()+2,35);
for(auto it=d1.begin();it!=d1.end();it++)
cout<<*it<<" ";
cout<<endl;

//REVERSE DEQUE ELEMENT

reverseDeque(d1);
for(auto it=d1.begin();it!=d1.end();it++)
cout<<*it<<" ";
cout<<endl;

//COPY DEQUE DATA ELEMENT INTO VECTOR
vector<int>v=dequeToVector(d1);
for(auto it=v.begin();it!=v.end();it++)
cout<<*it<<" ";
cout<<endl;

getch();
}
void reverseDeque(deque<int> &d)
{
    int x;
    deque<int> :: iterator it=d.begin();
    for(int i=0;i<d.size()/2;i++)
    {
        x=*(it+i);
        *(it+i)=*(it+d.size()-1-i);
        *(it+d.size()-1-i)=x;
    }
}
vector<int>dequeToVector(deque<int> d)
{
vector<int>vec;
deque<int>::iterator it;
for(it=d.begin();it!=d.end();it++)
vec.push_back(*it);
return vec;
}





#include<conio.h>
#include<iostream>
#include<queue>
#include<stack>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;
queue<int,list<int>>reverseQueue(queue<int,list<int>> q);
vector<int> queueToVector(queue<int,list<int>> q);
int main()
{
    queue<int,list<int>>q1;
    for(int i=1;i<=5;i++)
    q1.push(10*i);
    cout<<" front "<<q1.front()<<" and back  "<< q1.back()<<endl;
    q1.pop();
     cout<<"  front "<<q1.front()<<"  and back "<<q1.back()<<endl;

     //REVERSE QUEUE ELEMENT

     q1=reverseQueue(q1);
     cout<<"  front "<<q1.front()<<"  and back "<<q1.back()<<endl;




     //COPY QUEUE DATA INTO VECTOR

     vector<int> v=queueToVector(q1);
     for(int num:v)
     cout<<num<<" ";
     cout<<endl;
     cout<<"  front "<<q1.front()<<"  and back "<<q1.back()<<endl;
     getch();
}
queue<int,list<int>>reverseQueue(queue<int,list<int>> q)
{
    int x;
    stack<int,list<int>> tempstack;
    while (!q.empty())
    {
    x=q.front();
    q.pop();
    tempstack.push(x);
    }
    while (!tempstack.empty())
    {
        q.push(tempstack.top());
        tempstack.pop();
    }
    return q;
}
vector<int> queueToVector(queue<int,list<int>> q)
{
    vector<int>vec;
    while (!q.empty())
    {
        vec.push_back(q.front());
        q.pop();
    }
    return vec;
    
}








































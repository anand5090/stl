#include<conio.h>
#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
stack<int,vector<int>> reverseStack(stack<int,vector<int>> s);
vector<int>stackToVector(stack<int,vector<int>> &s);
int main()
{
stack<int,vector<int>>s1;
for(int i=1;i<=5;i++)
s1.push(10*i);

cout<<"Top element is="<<s1.top()<<endl;
s1.pop();
cout<<"Top element is="<<s1.top()<<endl;

//REVERSE STACK ELEMENT

s1=reverseStack(s1);
cout<<s1.top()<<endl;


//COPY DATA STACK TO VECTOR
vector<int>v=stackToVector(s1);
for(int num:v)
cout<<num<<" ";
cout<<endl;
cout<<s1.top()<<endl;
getch();
}

stack<int,vector<int>> reverseStack(stack<int,vector<int>> s)
{
    int x;
    stack<int ,vector<int>>tempstack;
    while (!s.empty())
    {
    x=s.top();
    s.pop();
    tempstack.push(x);
    }
    return tempstack;

}
vector<int>stackToVector(stack<int,vector<int>> &s)
{
int x;
vector<int> vec;
while(!s.empty())
{
    x=s.top();
    s.pop();
    vec.push_back(x);
}
vector<int>:: reverse_iterator it;
for(it=vec.rbegin();it!=vec.rend();it++)
s.push(*it);
return vec;
}
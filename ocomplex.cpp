#include<conio.h>
#include<iostream>
#include<array>
using namespace std;
class complex 
{
    int a,b;
    public:
    void setData(int x,int y)
    {
        a=x;
        b=y;
    }
    complex operator+(complex c)
    {
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;    
    }
    int getReal()
    {
        return a;
    }
    int getImag()
        {
            return b;

        }

};
int main()
{
    array<complex,3> a1;
    complex c1,c2,c3,c4;
    c1.setData(4,6);
    c2.setData(7,9);
    c3.setData(1,3);
    a1[0]=c1;
    a1[1]=c2;
    a1[2]=c3;
    c4=a1[0]+a1[1]+a1[2];
    cout<<"  Real part "<<c4.getReal()<<"  ";
    cout<<"  imaginary part "<<c4.getImag();
    cout<<endl;
    for(auto it=a1.begin();it!=a1.end();it++)
    {
        cout<<"real="<<it->getReal()<<"  "<<"Imaginary="<<it->getImag()<<endl;
        cout<<endl;
        getch();
    }

};
#include<conio.h>
#include<iostream>
#include<array>
#include<vector>
#include<list>
#include<queue>
#include<deque>
#include<string>
#include<numeric>
#include<algorithm>
#include<math.h>
using namespace std;
/*
void example1()
{
    int a[10]={50,30,60,70,90,40,10,80,20,100};
    sort(a,a+10);
    for(int i=0;i<10;i++)
    cout<<" "<<a[i];
    cout<<endl;

}
void example2()    //SORT A PORTION
{
  int a[10]={50,30,60,70,90,40,10,80,20,100};
    sort(a+2,a+8);
    for(int i=0;i<10;i++)
    cout<<" "<<a[i];
    cout<<endl;
   
}

*/

/*

void example3()
{
   vector<int>v1={50,30,60,70,90,40,10,80,20,100};
  // sort(v1.begin(),v1.end());         //accending
  sort(v1.begin(),v1.end(),greater<int>());
   for(int num:v1)
   cout<<" "<<num;
   cout<<endl; 
}
void example4()
{
    vector<string>v2={"Anand","Virat","Rohit","Ram","kapil","Sonam","Amir","Arjun"};
    sort(v2.begin(),v2.end());
     for(auto num:v2)
   cout<<" "<<num;
   cout<<endl; 
}
*/

/*

void example5()
{
    class employee
    {
    int emp_id;
    string ename;
    float salary;
    public:
    employee(){};
    employee(int e,string n,float s):emp_id(e),ename(n),salary(s){};
    void showEmployee()
    {
        cout<<emp_id<<" "<<ename<<" "<<salary;
    }


static bool compareBysalary(employee const &e1,employee const &e2)
{
return e1.salary<e2.salary;
}
static bool compareByid(employee const &e1,employee const &e2)
{
   return e1.emp_id<e2.emp_id; 
}
static bool compareByname(employee const &e1,employee const &e2)
{
    int c=e1.ename.compare(e2.ename);
    if(c<0)
    return true;
    else
    return false;
}

};



vector<employee>v={
 employee(5,"simmi",50000),
employee(2,"raju",40000),
employee(6,"limmi",30000),
employee(1,"timmi",60000),
employee(3,"zimmi",20000),
employee(7,"bimmi",25000),
employee(4,"mimmi",90000),

};


//COMPARE BY SALARY

/*
sort(v.begin(),v.end(),employee::compareBysalary);
for(employee num:v)
{
num.showEmployee();
cout<<endl;
}*/

//COMPARE BY ID
/*
sort(v.begin(),v.end(),employee::compareByid);
for(employee num:v)
{
num.showEmployee();
cout<<endl;

}

//  COMPARE BY NAME
sort(v.begin(),v.end(),employee::compareByname);
for(employee num:v)
{
num.showEmployee();
cout<<endl;

}
}

*/
void example6()
{
    deque<int>d1;
    d1.push_back(50);
       d1.push_back(80);
          d1.push_back(30);
             d1.push_back(60);
                d1.push_back(70);
                   d1.push_back(10);
                      d1.push_back(20);
                         d1.push_back(40);
                         sort(d1.begin(),d1.end());
                         for(int num:d1)
                         cout<<" "<<num;
                         cout<<endl;

}

int main()
{
   // example1();
    //example2();
    //example3();
    //example4();
  //  example5();
  example6();
    getch();

}
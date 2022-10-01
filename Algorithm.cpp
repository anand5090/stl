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
void example1() //adjacent_find
{
    vector<int>v1={4,3,5,8,4,4,6,7,14,62,1,1,2,3,4,9,};
    int x=*adjacent_find(v1.begin(),v1.end());
   cout<<"pair found with element value "<<x;
    vector<int>v2={7,5,16,12,6,9,13,45,62};
    vector<int>::iterator it=adjacent_find(v2.begin(),v2.end());
    if(it==v2.end())
    cout<<"\n NO such pair found"<<endl;
}
*/    
 


void example2() //all_of()
{
vector<int>v1={10,12,14,16,18,22,24,28};
if(all_of(v1.begin(),v1.end(),[] (int a)->int{return a%2==0;}))

cout<<"\nAll no. are even";
else
cout<<"\nNot all no. are even";

}




void example3() //any_of
{
    vector<int>v1={10,12,14,16,18,19,22,24,28};
    if(any_of(v1.begin(),v1.end(),[] (int a)->int {return a%2==1;}))
    cout<<"\nAt least one no. is odd";
    else
    cout<<"\nAll no. are even";
}



void example4() //binary search()
{
   vector<int>v1={10,12,14,16,18,19,22,24,28};
   if(binary_search(v1.begin(),v1.end(),10))
   cout<<"\nElement is found";
   else
   cout<<"\nElement ids not found";  
}



void example5()   //lower_bound & upper_bound
{
    
vector<int>v1={1,4,4,6,7,7,21,53,112,117,119,200};
vector<int>::iterator it=lower_bound(v1.begin(),v1.end(),9);
cout<<"\nElement is just greater than or equal to 9 is at index:"<<it-v1.begin();
cout<<"\n and its value is"<<*it<<endl; 

vector<int>v2={1,4,4,6,7,7,21,53,112,117,119,200};
vector<int>::iterator it1=upper_bound(v2.begin(),v2.end(),21);
cout<<"Element is just greater then 21 is at index :"<<it1-v2.begin();
cout<<"\n and its value is"<<*it1;

}  



void example6()  //max_element & min_element
{
vector<int>v1={10,15,43,86,41,85,4,13};
cout<<"\nMax Element is"<<*max_element(v1.begin(),v1.end());
cout<<"\nMin Element is"<<*min_element(v1.begin(),v1.end());

}




void example7()       //for_each()
{
vector<int>v1={10,15,43,86,41,85,4,13};
for_each(v1.begin(),v1.end(),[](int x)->void{cout<<x-1<<" ";});
}




void example8()    //generate()  
{
vector<int>v1(10);
generate(v1.begin(),v1.end(),[]()->int{static int i;++i;return i*i;});
for(int num:v1)
{
cout<<num<<" ";
cout<<endl;
}

}




void example9()     //generate_n
{
    vector<int>v1(10);
    generate_n(v1.begin(),5,[]()->int{static int i;++i;return i*i;});
    generate_n(v1.begin()+5,5,[]()->int{static int j;++j;return j*j*j;});
    for(int num:v1)
{
cout<<num<<" ";
cout<<endl;
}
}




void example10()      //count & count_if
{
 vector<int>v1={10,12,14,16,18,19,4,4,4,4,2,24,4,4,28};
 cout<<count(v1.begin(),v1.end(),4)<<endl;
 cout<<count_if(v1.begin(),v1.end(),[](int x)->bool{return x>15;});

}




void example11()      //find()
{
 vector<int>v1={10,12,14,16,18,19,4,4,4,4,2,24,4,4,28};
 vector<int>::iterator it=find(v1.begin(),v1.end(),25);
 if(it==v1.end())
 cout<<"\n Element is not found ";
 else
 cout<<"Element is found is at index"<<it-v1.begin();

}


void example12()   //find_if
{
vector<int>v1={11,13,15,17,21,121,79,89,76};
vector<int>::iterator it=find_if(v1.begin(),v1.end(),[](int x)->bool{int k=(int)sqrt(x);
cout<<k<<endl;return k*k==x;});
if(it==v1.end())
cout<<"Element is not found"<<endl;
else
cout<<"element "<<*it<<"found at index"<<it-v1.begin();
}




void example13()     //find_first_of
{
    vector<int>v1={11,13,15,17,21,121,79,33,89,76};
    vector<int>v2={114,23,23,27,33,44,75,154,76};
    vector<int> :: iterator it=find_first_of(v1.begin(),v1.end(),v2.begin(),v2.end());
    cout<<*it;

}




void example14()     //equal()
{
    vector<int>v1={1,2,3,4,5,6};
    vector<int>v2={3,4,5};
    if(equal(v2.begin(),v2.end(),v1.begin()+2))
    cout<<" Equal";
    else
    cout<<"Not equal";
}



void example15()   //equal_range
{
    vector<int>v1={10,10,20,30,30,40,40,40,50,60,60,70,70,70,80};
    pair<vector<int>::iterator,vector<int>:: iterator>p;
    p=equal_range(v1.begin(),v1.end(),40);
    cout<<" 40 is present in the sorted vector from index "<<(p.first-v1.begin())<<" till "<<(p.second-v1.begin());
}



void example16()     //fill()
{
   vector<int>v1={10,10,20,30,30,40,40,40,50,60,60,70,70,70,80};  
   fill(v1.begin()+1,v1.begin()+5,100);
    for(int num:v1)
   cout<<num<<" ";


}




void example17()      //merge()
{
vector<int>v1={10,20,30,40};
vector<int>v2={2,5,7,11,18,25};
vector<int>v3(9);
merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());
for(int num:v3)
   cout<<num<<" ";

}





void example18()       //remove()
{
vector<int>v1={2,5,7,11,18,25};
vector<int>::iterator it,newEnd;
newEnd=remove(v1.begin(),v1.end(),11);
for(int num:v1)
   cout<<num<<" ";
   cout<<endl;
   for(it=v1.begin();it!=newEnd;it++)
   cout<<*it<<" ";
}




void example19()     //remove_if()
{
    vector<int>v1={10,3,4,4,4,5,5,77,8,5,5,2};
    vector<int>::iterator it,newEnd;
    newEnd=remove_if(v1.begin(),v1.end(),[](int x)->bool{x%2==0;});
    for(int num:v1)
   cout<<num<<" ";
   cout<<endl;
   for(it=v1.begin();it!=newEnd;it++)
   cout<<*it<<" ";

}





void example20()      //reverse()
{
vector<int>v1={10,3,4,4,4,5,5,77,8,5,5,2};
reverse(v1.begin(),v1.end());
    for(int num:v1)
   cout<<num<<" ";
}




/*
void example21()      //replace()
{
vector<int>v1={10,3,4,4,4,5,5,77,8,5,5,2};
replace(v1.begin(),v1.end(),4,63);
    for(int num:v1)
   cout<<num<<" ";
}
*/

/*
void example22()      //replace_if()
{
vector<int>v1={10,3,4,4,4,5,5,77,8,5,5,2};
replace_if(v1.begin(),v1.end(),[](int x)->bool{return x>5;},0);
    for(int num:v1)
   cout<<num<<" ";
}

*/

/*
void example23()      //rotate()
{
vector<int>v1={10,3,4,4,4,5,5,77,8,5,5,2};
rotate(v1.begin(),v1.begin()+2,v1.end());
    for(int num:v1)
   cout<<num<<" ";
}

*/

/*
void example24()     //search()
{
    vector<int>v1={11,44,22,77,33,99,66,55,88};
    vector<int>v2={99,66,55};
    vector<int>::iterator it=search(v1.begin(),v1.end(),v2.begin(),v2.end());
    if(it!=v1.end())
    cout<<"Subsequence is found at index"<<it-v1.begin();
    else
    cout<<"Subsequence not found";

}

*/

/*
void example25()      //unique
{
vector<int>v1={2,4,2,2,7,5,6,7,8,6,6,2,6,7,6};
vector<int>::iterator it,newEnd;
newEnd=unique(v1.begin(),v1.end());
 for(int num:v1)
   cout<<num<<" ";
   cout<<endl;
   for(it=v1.begin();it!=newEnd;it++)
   cout<<*it<<" ";
}
*/


/*
void example26()      //is_sorted
{
  vector<int>v1={11,44,22,77,33,33,99,66,55,88};
  if(is_sorted(v1.begin(),v1.end()))
  cout<<"yes vector is sorted";
  else
  cout<<"NO vector is not sorted";  
}

*/

/*
void example27()       //is_sorted_until
{
vector<int>v1{10,15,25,34,21,52,63,85,74};
vector<int>::iterator it=is_sorted_until(v1.begin(),v1.end());
cout<<*it<<endl;
cout<<"Number of sorted element until the first unsorted one is "<<it-v1.begin();
}

*/
int main()
{
  //  example1();
    example2();
    example3();
    example4();
    example5();
    example6();
    example7();
       example8();
   example9();
   example10();
   example11();
   example12();
  example13();
  example14();
     example15();
  example16();
   example17();
    example18();
      example19();
 example20();
 //example21();
 //example22();
 //example23();
//example24();
//example25();
 // example26();
 //example27();
}
#include<iostream>
#include<stdio.h>
using namespace std;
class First
 {
 int a;
 friend class Second; 
 public:
 void get_num(int x)
 {
 a = x;
 }
 };
class Second
 {
 int b;
 public:
 void get_num(int y)
 {
 b = y;
 }
 void get_sum( First obj1) 
 {
 int sum;
 sum = obj1.a + b; 
 cout<<"Total: "<<sum;
 }
 }; 
int main() 
{
 int a,b;
 First obj2; 
 Second s; 
 cout<<"Enter two number: ";
 cin>>a>>b;
 obj2.get_num(a); 
 s.get_num(b); 
 s.get_sum(obj2); 
return 0;
}


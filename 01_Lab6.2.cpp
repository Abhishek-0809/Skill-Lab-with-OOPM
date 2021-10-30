#include<iostream>
using namespace std;
class student{
	public:
	int roll_number;
	string name;
	string branch;
student(){
	cout<<"Enter roll number"<<endl;
	cin>>roll_number;
	cout<<"Enter name"<<endl;
	cin>>name;
	cout<<"Enter branch"<<endl;
	cin>>branch;
}
};
class exam: public student{
public:
	int maths;
	int physics;
	int chemistry;
exam(){
	cout<<"Enter Physics Marks"<<endl;
	cin>>physics;
	cout<<"Enter chemistry Marks"<<endl;
	cin>>chemistry;
	cout<<"Enter Maths Marks"<<endl;
	cin>>maths;
 }
};
class sport{
	public:
	int sports;
sport(){
	cout<<"Enter sports Marks"<<endl;
	cin>>sports;
 }
};
class result : public exam, public sport {
	public:
	int total;
result(){
	total = maths + physics + chemistry + sports;
	cout<<total<<endl;
 }
};
int main()
{
	result obj;
	return 0; 
}


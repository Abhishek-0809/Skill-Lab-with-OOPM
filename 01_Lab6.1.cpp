#include <iostream>
using namespace std;
class Employee
{
	protected:
	string EmpID = "";
	double Empsalary;
	public:
	Employee()
	{
		cout<<endl<<"Enter the employee id : ";
		cin>>EmpID;
		cout<<endl<<"Enter the employee Sal : ";
		cin>>Empsalary;
	}
void getDetails()
{
	cout <<endl<< "EmployeeID is : " << EmpID;
	cout <<endl<<endl<<"Employee Total Salary is : " << 
	Empsalary;
}
};
class Permanent_Employee: public Employee
{
	double hike;
	public:
	Permanent_Employee( double increment)
	{
	hike = increment;
	}
 void getDetails()
{
	cout <<endl<< "EmployeeID is : " << EmpID;
	cout <<endl<<endl<<"Employee Total Salary is : " << 
	generate_salary();
}
float generate_salary()
{
	return (Empsalary + hike);
}
};
class Temporary_Employee: public Employee
{
	double hike;
	public:
	Temporary_Employee( double increment)
	{	
		hike = increment;
	}
 void getDetails()
{
	cout <<endl<< "EmployeeID is : " << EmpID;
	cout <<endl<<endl<<"Employee Total Salary is : " << 
	generate_salary();
}
float generate_salary()
{
	return (Empsalary + hike);
}
};
int main()
{
	cout<<endl<<"For Temporary Employee: "<<endl;
	Temporary_Employee T(667.6);
	cout << endl << endl << "Details of Temporary_Employee : " <<endl;
	T.getDetails();
	cout<<endl<<endl<<"For Permanent Employee: "<<endl;
	Permanent_Employee P(777.99);
	cout << endl << endl << "Details of Permanent_Employee : " <<endl;
	P.getDetails();
	return 0;
}


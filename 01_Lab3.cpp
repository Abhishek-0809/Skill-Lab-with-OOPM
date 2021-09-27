#include<iostream>
using namespace std;
class Bank{
	public:
		string name,address,acc_type;
		long long int mobnum;
		int age;
		float bal = 0,amt,withdrawamt;
		
	CreateAccount(){
		cout<<"---------Enter Your Details:---------" <<endl;
		cout<<"Enter your Name: "<<endl;
		cin>>name;
		cout<<"Enter Address: "<<endl;
		cin>>address;
		cout<<"Enter your mobile number: "<<endl;
		cin>>mobnum;
		cout<<"Enter Your age: "<<endl;
		cin>>age;
		cout<<"Which type of account you want to create(savings or current) " <<endl;
		cin>>acc_type;
		cout<<"Your Account is successfully Created!!!!!! "<<endl;
	}
	
	void deposit(){
		cout<<"Enter the amount to deposit: \nRs";
		cin>>amt;
		bal= bal + amt;
		cout<<"Your amount is successfully deposited!!!!"<<endl;
		cout<<"YOUR BALANCE is Rs"<<bal<<endl;  	
	}
	
	void withdraw(){
		cout<<"Enter the amount to withdraw: \nRs"<<endl;
		cin>>withdrawamt;
		if(withdrawamt>bal){
			cout<<"!!!INSUFFICIENT BALANCE!!!";
		}	
		else 
			bal = bal-withdrawamt;
		    cout<<"YOUR BALANCE is Rs"<<bal<<endl;  
	}
	
	void display(){
		cout<<"YOUR BALANCE is Rs" <<bal<<endl;
	}	
};
	int main(){
		int choice;
		Bank b;
		while(true){
			cout<<"ENTER YOUR CHOICE:\n 1.Create Account\n 2.Deposit\n 3.Withdraw\n 4.Display Balance\n 5.Exit"<<endl;
			cin>>choice;
			switch (choice) {
                case 1:
                    b.CreateAccount();
                    break;
                case 2:
                    b.deposit();
                    break;
                case 3:
                    b.withdraw();
                    break;
                case 4:
                    b.display();
                    break;
                case 5:
                	exit(0);
                	break;
                default:
                	cout<<"Enter valid choice!!!!!";
                    break;	
			}
		}
	}



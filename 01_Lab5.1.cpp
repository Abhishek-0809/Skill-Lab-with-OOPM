#include<iostream>
using namespace std;
class complex{
	float real,img;
	public:
		void get_elements(){
			cout<<"Enter the real and img of complex no.\n";
			cout<<"Real :";
			cin>>real;
			cout<<"Img :";
			cin>>img;
		}
		
		complex operator *(complex c1){
			complex mul;
			mul.real = ((real*c1.real)-(img*c1.img));
			mul.img = ((real*c1.img)+(c1.real*img));
			return(mul);
		}
		
		void display(){
			cout<<"("<<real<<")"<<"+"<<"("<<img<<")"<<"i";
		}		
};
int main()
{
 complex obj1,obj2,obj3;
 obj1.get_elements();
 obj2.get_elements();
 obj3= obj1*obj2;
 cout<<"\n\n";
 obj1.display();
 cout<<" * ";
 obj2.display();
 cout<<" = "; 
 obj3.display(); 
}


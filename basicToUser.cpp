//basic to user define
//test t1;
//int x=9;
//t1=x;//basic to user defined
// Done by Constructor
#include<iostream>
using namespace std;

class Test{
	 int a,b;
	public:
		
		Test(){
			
		}

		
		Test(int h){
				a=h;
			    b=h;	
		}
		
		
		
		void display(){
			cout<<a<<endl;
			cout<<b<<endl;
		}
	};
	 int main(){
	 	Test t1;
	 	int x=9;
	 	t1=x; //basic to user defined
	 	//test t1(x)
	 	t1.display();
	 }

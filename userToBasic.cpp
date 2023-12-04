//user defined to basic
//int x
//test t1
//x=t1;

//done by type casting operator

#include<iostream>
using namespace std;

class Test{
	 int a,b;
	public:
	    void getdata(int x, int y){
			a=x;
			b=y;
	}
			void display(){
			cout<<a<<endl;
			cout<<b<<endl;
		}
		//type casting function
		 
//         operator datatype(){
//	       return (datatypevalue)
//	       }
		
		operator int(){
			return a+b;
		}
	};
	int main(){
	
	Test t1;
	t1.getdata(10,20);
	int x;
	x=t1; //user defined to basic
	//t1.operatorint()
	cout<<x;
	
}


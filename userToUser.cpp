//user defined to user defined  
//test t1,t2;      t1=t2 possible hai          
//sample s1
//t1=s1;

//Done via to ways Constructor and type casting operator function

#include<iostream>
using namespace std;

class test{
	 int a,b;
	public:
		test(){
			cout<<"called";
			
		}
	    test(int x, int y){
			a=x;
			b=y;
	}
			void display(){
			cout<<a<<endl;
			cout<<b<<endl;
		}
	};
	
	class sample{
		int m,n;
		public:
			sample(){	
			}
			
			sample(int g, int h){
				m=g;
				n=h;
			}
			void show(){
				cout<<m<<endl;
				cout<<n<<endl;
			}
			//operator then jisme convert karna hai
			operator test()
			{
				return test(m,n);
			}
			
	};
	
	int main(){
		test t1;
		sample s1(10,60);
		t1=s1;//user defined to user defined
		t1.display();
	}



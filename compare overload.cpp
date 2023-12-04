#include<iostream>
using namespace std;

class Test{
	 int a,b;
	public:
		void get(){
			cin>>a;
			
		}
		void operator ==(Test t2){
			
			if(a == t2.a)
			cout<<"objects are equal";
			else
			cout<<"objects are not equal";
		}
	};
	int main(){
		Test t1,t2;
		cout<<" Enter t1 object a value ";
		t1.get();
		cout<<" Enter t2 object a value ";
		t2.get();
		
		t1==t2;
		
	}

#include<iostream>
using namespace std;

class Test{
	 int a,b;
	public:
		void read(){
			a=10;
			b=20;
		}
		
void show() const
{
	//a=30;
	//b=40;
	cout<<"a "<<a<<endl;
	cout<<"b "<<b<<endl;
}
};
int main(){
		Test t;
		t.read();
		t.show();
	}

#include<iostream>
using namespace std;

class Test{
	 int a;
	public:
		Test():a(0)
			//a=0;
	{  }

Test operator ++ (){
	++a;
}

Test operator -- (int){
	a--;
}

void show(){
	cout<<"a "<<a<<endl;
}		
	
};
	
	int main(){
		Test t;
		t--;
		t.show();
		++t;
		t.show();
	}

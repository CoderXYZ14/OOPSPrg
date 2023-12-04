//subscript overload
#include<iostream>
using namespace std;
class Test{
	 int a[3];
	public:
		
		void getdata(int x, int y,int z){
			a[0]=x;
			a[1]=y;
			a[2]=z;
	}
	
	int operator [](int location){
		return a[location];
	}
/*	
	void display(){
		cout<<a[0]<<endl;
		cout<<a[1]<<endl;
		cout<<a[2]<<endl;
	}
		*/
		
		
	
};
int main(){
	Test t1;
	t1.getdata(20,30,40);
	//t1.display();
	cout<<t1.operator [](0);
}

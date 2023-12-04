//static data members are class data members not the object data member
//we cant call static member func using this keyword
//they are associated with both class name and object name means we can call directly static member..
//func with class name or object name


#include<iostream>
using namespace std;

class Test{
	
	public:
		static void read(int x, int y){
			if(x>y) cout<<x <<" is Greater\n";
			else if(y>x) cout<<x<<" is Greater\n";
			else cout<<"Both are equal";
		}
	};
	int main(){
		Test t1;
		t1.read(10,20);
		Test::read(50,20); //only when static, called like this
		Test::read(20,20);
	}
		

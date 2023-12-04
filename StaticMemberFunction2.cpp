//static data members are class data members not the object data member
//we cant call static member func using this keyword
//they are associated with both class name and object name, means we can call directly static member...
//func with class name or object name

//static member function not able to access non static data members

#include<iostream>
using namespace std;

class Test{
  static int a,b;
	public:
 static	void getdata(){
			cout<<"Two Integers are->";
			cin>>a>>b;
			cout<<" a="<<a<<endl;
			cout<<" b="<<b<<endl;
		}
	};
	
	int Test::a;
	int Test::b;
	
	
	int main()
	{
		Test t;
		Test::getdata();
		//t.getdata();
	}

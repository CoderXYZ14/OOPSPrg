#include <iostream>
#include <string.h>
using namespace std;

class Test{
	char st[100];
	public:
		void read(){
			cout<<"Enter String-> ";
			cin>>st;
		}
		void show(){
			cout<<"String is ="<<st<<endl;
		}
		
		//Test add( Test t1, Test t2)
		Test operator +(Test t2){ 	//explicit t2
		Test t3;
		strcpy(t3.st, st);
		strcat(t3.st, " ");
		strcat(t3.st, t2.st);
		return t3;
		
		}
	
};

int main(){
	Test t1,t2,t3;
	t1.read();
	t2.read();
	t3=t1+t2;
	t3.show();
}

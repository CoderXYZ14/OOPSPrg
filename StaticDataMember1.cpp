#include<iostream>
using namespace std;
class Sample{
	
  static int count;
	
	public:
		Sample(){
			//count=0;
			count++;
			cout<<count<<": Object Created\n";
		}
		
		~Sample(){
			cout<<count<<": Object Deleted\n";
			count--;
		}
};

int Sample::count;



int main(){
	Sample s1,s2,s3;
}






//int Sample::count;
//Static -> declaration and definition, definition outside the class

//when static count is created it stored in data segment
//and static data members are class data members not the object data member

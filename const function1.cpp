//every data member should be initialized with the constructor or constructor list of the same class

#include<iostream>
using namespace std;

class SiInt{
	float p;
	int t;
	const float r;
	
	public:
		SiInt():r(7.6)    
		{
		}

void read(float pa,int ti){
	p=pa;
	t=ti;
}

float show(){
	return (p*t*r)/100;
}
	
};

int main(){
	SiInt s;
	s.read(1000,10);
	cout<<"Simple Interest = "<<s.show();
}

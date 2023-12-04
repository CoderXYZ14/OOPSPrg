#include<iostream>
using namespace std;

class circle{
	float r;
	public:
		circle(){
			r=5;
		}
		
		circle(float r){
			this->r=r;
			//(*this).r=r;
		}
		
		void ShowArea(){
			cout<<"Area is "<<3.14*r*r<<endl;
		}
	
};
int main(){
	circle c1,c2(7),c3(8);
	c1.ShowArea();
	c2.ShowArea();
}

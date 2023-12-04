//function OverLoading

#include<iostream>
using namespace std;

int add(int x,int y){
	return x+y;
}


float add(float x,int y){
	return x+y;
}


int add(int x, int y, int z){
	return x+y+z;
}

double add(double x, double y, double z){
	return x+y+z;
}
double add(double x, float y, double z){
	return x+y+z;
}

//double add(double a, double b, double c){
//	return a+b+c;
//}



int main(){
	
	cout<<add(10,5)<<endl;
	cout<<add(10.6f,5)<<endl;
	cout<<add(10,5,3)<<endl;
	cout<<add(10.5,5.6,3.3)<<endl;
	cout<<add(10.5,5.5,3.3)<<endl;	
	
}


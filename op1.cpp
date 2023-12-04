#include<stdio.h>
#define x 5+2
//#define x (5+2)
int main(){
	int i;
	i=x*x*x; // 5+2*5+2*5+2 ==>5+10 + 10 +2 ==>27
	printf("i is %d",i);
}

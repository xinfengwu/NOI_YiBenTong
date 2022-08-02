#include <iostream>
#include<iomanip>
using namespace std;
int main(){
	float s;//梯形面积
	float a;//上底
	float b;//下底
	float s1;//阴影部分面积
	float h;//高
	
	s1=150;
	a=15;
	b=25;
	
	h=2*s1/a;
	s=(a+b)*h/2;
	cout<<fixed<<setprecision(2)<<s;
	return 0;
}

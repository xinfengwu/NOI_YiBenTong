#include <iostream>

using namespace std;
int main(){
	int s1;//15头牛吃20天的草量
	int s2;//20头牛吃10天的草量
	int x;//x头牛吃1天的草量
	
	s1=15*20;
	s2=20*10;
	x=(s1-s2)/(20-10);
	cout<<x;
	
 	return 0;
}

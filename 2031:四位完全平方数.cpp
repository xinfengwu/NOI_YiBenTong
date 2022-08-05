/*
【题目描述】
给定一个十进制正整数n(1≤n≤10000)，写下从1到n的所有整数，然后数一下其中出现的数字“1”的个数。

例如当n=2时，写下1,2。这样只出现了1个“1”；当n=12时，写下1，2，3，4，5，6，7，8，9，10，11，12。这样出现了5个“1”。

【输入】
正整数n。1≤n≤10000。

【输出】
一个正整数，即“1”的个数。

【输入样例】
12
【输出样例】
5
*/
//解法一
#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,n;
	for(int i=10;i<=99;i++){
		n=i*i;
		a=n/1000;
		b=(n/100)%10;
		c=(n/10)%10;
		d=n%10;
		
		if((a==b)&(c==d)){
			//cout<<i<<endl;
			cout<<n<<endl;
		}
		
	}
	return 0;
}

//解法二
#include<iostream>
using namespace std;
int main(){
	for(int i=1000;i<=9999;i++){
		if(i%10==i/10%10&&i/100%10==i/1000) {
			for(int j=30;j<=100;j++){
				if(j*j==i){
					cout<<i<<endl;
				}
			}
		}
	} 
	return 0;
}

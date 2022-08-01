/*
【题目描述】
已知正整数n是两个不同的质数的乘积，试求出较大的那个质数。

【输入】
输入只有一行，包含一个正整数 n。

对于60%的数据，6≤n≤1000。

对于100%的数据，6≤n≤2×109。

【输出】
输出只有一行，包含一个正整数 p，即较大的那个质数。

【输入样例】
21
【输出样例】
7

*/

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			cout<<n/i;
			break;
		}
	}
	return 0;
}

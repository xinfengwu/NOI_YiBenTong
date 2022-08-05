/*
【题目描述】
假定多项式的形式为xn+xn−1+…+x2+x+1，请计算给定单精度浮点数x和正整数n值的情况下这个多项式的值。x在double范围内，n≤1000000。多项式的值精确到小数点后两位，保证最终结果在double范围内。

【输入】
输入仅一行，包括x和n，用单个空格隔开。x在double范围内，n≤1000000。

【输出】
输出一个实数，即多项式的值，精确到小数点后两位。保证最终结果在double范围内。

【输入样例】
2.0 4
【输出样例】
31.00
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double x;
	int n;
	double s=1;
	double k=1;
	cin>>x>>n;
	for(int i=1;i<=n;i++)
	{
		k*=x;
		s+=k;
	}
	cout<<fixed<<setprecision(2)<<s;
	return 0;
}

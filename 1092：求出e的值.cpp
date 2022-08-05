/*
【题目描述】
利用公式e=1+1/1!+1/2!+1/3!+...+1/n! ，求e的值，要求保留小数点后10位。

【输入】
输入只有一行，该行包含一个整数n（2≤n≤15），表示计算e时累加到1n!。

【输出】
输出只有一行，该行包含计算出来的e的值，要求打印小数点后10位。

【输入样例】
10
【输出样例】
2.7182818011
*/

//解法一
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int n;
	double k=1;
	double e=1;
	double j=0;
	cin>>n;
	for(int i=1;i<=n;i++){
            k*=i;
	        j=1/k;
            e+=j;
	}
	cout<<fixed<<setprecision(10)<<e;
	return 0;
}

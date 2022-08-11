/*
【题目描述】
输出一个整数数列中不与最大数相同的数字之和。

【输入】
输入分为两行：

第一行为N(N为接下来数的个数，N <= 100)；

第二行N个整数，数与数之间以一个空格分开，每个整数的范围是-1000,000到1000,000。

【输出】
输出为N个数中除去最大数其余数字之和。

【输入样例】
3
1 2 3
【输出样例】
3
*/
/*
    要考虑数组中可能有相同的最大数

*/
#include<iostream>
using namespace std;
int main()
{
int N,max,sum;
sum = 0;
max = -1000000;
cin>>N;
int m[N];
for(int i=1;i<=N;i++)
{
    cin>>m[i-1];
    if(m[i-1]>max) max=m[i-1];
}
for(int j=0;j<N;j++)
{
    if(max-m[j]>0) sum += m[j];
}    
	
	
	cout<<sum;
    return 0;
}

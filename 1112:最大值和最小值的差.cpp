/*
【题目描述】
输出一个整数序列中最大的数和最小的数的差。

【输入】
第一行为M，表示整数个数，整数个数不会大于10000；

第二行为M个整数，以空格隔开，每个整数的绝对值不会大于10000。

【输出】
输出M个数中最大值和最小值的差。

【输入样例】
5
2 5 7 4 2
【输出样例】
5
*/
#include<iostream>
using namespace std;
int main()
{
	int min,max;
	int M;
	cin>>M;
	int n;
	cin>>n;
	max=min=n;
	for(int i=1;i<M;i++)
    {
        cin>>n;
        if(max<n)
        {
            max=n;
        }
        if(min>n)
        {
            min=n;
        }
    }

    
    cout<<max-min;
    return 0;
}

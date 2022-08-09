/*
【题目描述】
将a数组中第一个元素移到数组末尾,其余数据依次往前平移一个位置。

【输入】
第一行为数组a的元素个数；

第二行为n个小于1000的正整数。

【输出】
平移后的数组元素，每个数用一个空格隔开。

【输入样例】
10
1 2 3 4 5 6 7 8 9 10
【输出样例】
2 3 4 5 6 7 8 9 10 1

*/
//思路：将a数组中第一个元素移动数组末尾，其余数据依次往前平移一位置。
#include<iostream>
using namespace std;

int main(){
	int temp,n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){//将键盘输入的数据存入数组a
		cin>>a[i];
	}
	//平移数据
	temp=a[0];
	for(int j=0;j<n-1;j++){
		a[j]=a[j+1];
	}
	a[n-1]=temp;
	
	for(int k=0;k<n;k++){//将数组a中每个元素输出
		cout<<a[k]<<" ";
	}
	return 0;
}

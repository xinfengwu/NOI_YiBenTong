/*
【题目描述】
输入n个数,要求程序按输入时的逆序把这n个数打印出来，已知整数不超过100个。也就是说，按输入相反顺序打印这n个数。

【输入】
输入一行共有n个数，每个数之间用空格隔开。

【输出】
如题要求：一行，共有n个数，每个数之间用一个空格隔开。

【输入样例】
1 7 3 4 5
【输出样例】
5 4 3 7 1

*/
#include<iostream>

using namespace std;

int main(){
	string str;
	char a,b;
	getline(cin,str);
	cin>>a>>b;
	for(int i=0;i<str.length();i++)
	{
		if(str[i]==a)str[i]=b;
	}
	cout<<str;

	return 0;
}

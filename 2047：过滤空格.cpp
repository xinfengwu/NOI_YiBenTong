/*
【题目描述】
过滤多余的空格。一个句子中也许有多个连续空格，过滤掉多余的空格，只留下一个空格。

【输入】
一行，一个字符串（长度不超过200），句子的头和尾都没有空格。

【输出】
过滤之后的句子。

【输入样例】
Hello      world.This is    c language.
【输出样例】
Hello world.This is c language.
*/
//解法一：
#include<iostream>
using namespace std;

int main(){
	char s[200];
	string str;
	bool flag=false;
	int i=0;
	int j=0;
	int k=0;
	
	getline(cin,str);
	while(i<str.length())
	{
		if(str[i]!=' ')
		{
			s[k]=str[i];
			i++;
		}else
		{
			while(str[i]==' ')i++;
			s[k]=' ';
		}
		k++;
	}
	for(int i=0;i<k;i++)
	{
		cout<<s[i];
	}
	return 0;
}
//解法二：
#include<iostream>
using namespace std;

int main(){
	string a;
	while(cin>>a)cout<<a<<" ";
	return 0;
}


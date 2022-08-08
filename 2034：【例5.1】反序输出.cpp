/*
【题目描述】
在应用计算机编辑文档的时候，我们经常遇到替换任务。如把文档中的“电脑”都替换成“计算机”。现在请你编程模拟一下这个操作。

【输入】
输入两行内容，第1行是原文(长度不超过200个字符)，第2行包含以空格分隔的两个字符A和B，要求将原文中所有的字符A都替换成字符B，注意：区分大小写字母。

【输出】
一行，输出替换后的结果。

【输入样例】
I love China. I love Beijing.
I U
【输出样例】
U love China. U love Beijing.
*/
#include<iostream>
using namespace std;

int main(){
    int a[101];
    int n=0;
    for(int i=1;cin>>a[i];i++)//把键盘输入的数字依次存入数组中
    {
        n++;
    }
    while(cin>>a[i]){    }
    for(int j=n;j>=1;j--)//把数组的元素依次逆序输出
    {
        cout<<a[j]<<" ";
    }

	return 0;
}


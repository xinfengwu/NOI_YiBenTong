/*
【题目描述】

根据参数，画出矩形。输入四个参数：前两个参数为整数，依次代表矩形的高和宽（高不少于3行不多于10行，宽不少于5列不多于10列）；第三个参数是一个字符，表示用来画图的矩形符号；第四个参数为1或0，0代表空心，1代表实心。
【输入】

输入一行，包括四个参数：前两个参数为整数，依次代表矩形的高和宽（高不少于3行不多于10行，宽不少于5列不多于10列）；第三个参数是一个字符，表示用来画图的矩形符号；第四个参数为1或0，0代表空心，1代表实心。
【输出】

输出画出的图形。
【输入样例】

7 7 @ 0

【输出样例】

@@@@@@@
@     @
@     @
@     @
@     @
@     @
@@@@@@@
*/
//解法一
#include<iostream>
using namespace std;
int main()
{
    int h,w;
    char a;
    bool b;

    cin>>h>>w>>a>>b;
    //输出第一行
    for(int i=0;i<w;i++)
        cout<<a;
    cout<<endl;

    for(int j=0;j<h-2;j++)
    {
        if(b)
        {
            for(int i=0;i<w;i++)
                cout<<a;
        }else
        {
            cout<<a;
            for(int i=0;i<w-2;i++)
                cout<<" ";
            cout<<a;
        }
        cout<<endl;
    }
    //输出最后一行
    for(int i=0;i<w;i++)
        cout<<a;
    return 0;
}

//解法二
#include<iostream>
using namespace std;
int x,y,flag,i,j;
char a;
int main(){
	cin>>x>>y>>a>>flag;
	if(flag==1)
	for(i=1;i<=x;i++){
		for(j=1;j<=y;j++){
			cout<<a;
		}
		cout<<endl;
	}
	else 
	for(i=1;i<=x;i++){
		for(j=1;j<=y;j++){
			if((i!=1)&&(i!=x)&&(j!=1)&&(j!=y)){
				cout<<' ';
			}else{
				cout<<a;
			}
		}
		cout<<endl;
	}
	return 0;
}


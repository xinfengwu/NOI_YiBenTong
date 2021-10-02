#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    int a;
    ofstream outFile("test.out");
    //从键盘循环读取数据
    while(cin>>a){
       //输出到文件
       outFile<<a;
    }

    return 0;

}

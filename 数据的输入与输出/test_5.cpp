#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string str;
    ofstream outFile("test.out");
    //从键盘按行循环读取数据
    while(getline(cin,str)){
       //输出到文件
       outFile<<str;
    }

    return 0;

}

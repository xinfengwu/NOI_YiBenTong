#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string str;
    //从文件循环读取数据
    ifstream inFile("test.in");
    while(inFile>>str){

       //输出到屏幕
       cout<<str;
    };

    return 0;

}

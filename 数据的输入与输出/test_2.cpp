#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    int a;
    //从键盘读取数据
    cin>>a;

    //输出到文件
    ofstream outFile("test.out");
    outFile<<a;
    return 0;

}

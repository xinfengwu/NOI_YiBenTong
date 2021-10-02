#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string str;
    //从文件按行循环读取数据
    ifstream inFile("test.in");
    ofstream outFile("test.out");
    while(getline(inFile,str)){

       //输出到文件
       outFile<<str;
    };

    return 0;

}

/***
【题目描述】
输出正整数a到b之间的所有素数。

【输入】
输入a,b。

【输出】
由小到大，输出a到b之间的所有素数。每个数占一行。

【输入样例】
5 10
【输出样例】
5
7
【提示】
【数据范围】

对于所有数据，1≤a≤b≤20000。

***/
#include<iostream>
#include<math.h>
  using namespace std;
  int main(){
      int a,b,s,i;
      bool flag;
      cin>>a>>b;
      for(s=a;s<=b;s++){
          flag=true;
          for(i=2;i<=sqrt(s);i++){// 一个数不能被超过他开方的数整除
              if(s%i==0)
              {
                flag=false;
                break;
              }
          }
          if(flag){cout<<s<<endl;}
      }
      return 0;
  }

/*
质数（素数）只能被  1  和 它本身整除的数
1 2 3 4 5 6 7 8 9 10

*/

#include<iostream>
  using namespace std;

  int main(){
  int n;
  cin>>n;
  bool isPrime;
  int sum=0;//计数
  for(int i=2;;i++)
  {
    isPrime=true;
    //1 2 ....i-1 i
    // i=10000  j:2----10000-1
    // i=10000  j:2----5000
    // i=10000  j:2----100
    // x * y = m
    //   1 * 16=16
    //   2 * 8 =16
    //   4 * 4 =16
     //  j =sqrt(i=16)//开方


    //for(int j=2;j<i;j++)//
    //for(int j=2;j<=i/2;j++)//一个数不可能被它一半以上的数整除
    for(int j=2;j*j<=i;j++)//一个数不可能被它开方以上的数整除
    {

        if(i%j==0)
        {
            isPrime=false;
            break;
        }
    }
    if(isPrime)
        sum++;
        if(sum==n)
        {
            cout<<i;
            return 0;
        }
  }
    return 0;
  }

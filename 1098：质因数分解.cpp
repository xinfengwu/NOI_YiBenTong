//解法一：
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			cout<<n/i;//n =i * n/i，若i最小，则n/i最大
			break;
		}
	}
	return 0;
}
//解法二：
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
		    bool flag =true;
		    for(int j=2;j<=i/2;j++)
		    {
		        if(i%j==0)
		        {
		            flag==false;
		            break;
		        }        
		    }
		    if(flag==true)
	        {
	            cout<<n/i;  //n =i * n/i，若i最小，则n/i最大
		        break; 
	        }
		}
	}
	return 0;
}

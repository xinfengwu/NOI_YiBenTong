#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double n,m,s;
	cin>>n>>m;
	s=n-m*0.8;
	cout<<fixed<<setprecision(2)<<s;
	return 0;
}

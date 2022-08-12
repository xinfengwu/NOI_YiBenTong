/*

*/
#include<iostream>
using namespace std;

int main(){
	int n; //数的个数n;
	cin>>n;
	int a[n]={0};
	int max=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		max=max<a[i]?a[i]:max;
	}
	for(int j=0;j<n;j++){
		if(max==a[j])cout<<j+1<<" ";
	}
	return 0;
}

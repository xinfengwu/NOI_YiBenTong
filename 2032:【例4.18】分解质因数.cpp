#include<iostream>

using namespace std;
int main(){
	// 21 = 3 * 7
	//n = i * j
	int n;
	cin>>n;
	cout<<n<<"=";
	for(int i=2;i<=n/2;i++){
		while(n%i==0){
			cout<<i;
			n=n/i;//n =i * n/i，若i最小，则n/i最大
			if(n!=1)cout<<"*";
		}
	}
	return 0;
}
2031
1092
1093
1094
1095
1096
1097
1101


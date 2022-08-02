#include <iostream>
#include<iomanip>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	cout<<setw(8)<<setiosflags(ios::right)<<a<<" "<<setw(8)<<setiosflags(ios::right)<<b<<" "<<setw(8)<<setiosflags(ios::right)<<c;
	return 0;
}

#include<iostream>
using namespace std;
int main(){
	int tou,jiao;
	int ji,tu;
	//1只鸡1个头，2个脚
	//1只兔1个头，4个脚
	 
	cin>>tou>>jiao;
	for(tu=0;tu<=tou;tu++){
		ji=tou-tu;//鸡的数量
		if(jiao==ji*2+tu*4){
			cout<<ji<<" "<<tu;
		}
	}
	return 0;
}

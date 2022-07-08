#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,d;
		cin>>a>>b;
		d = fabs(b-a);
		if(d == 0){
			cout<<0<<endl;
		}
		else if((d%2) == 0 ){
			cout<<d/2<<endl;

		}else{
			cout<<d<<endl;
		}	
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,d;
		cin>>a>>b;
		d=a-b;
		if(d== 0){
			return 0;
		}
		else if(d%2 == 0 ){
			return d/2;

		}else{
			return d;
		}	
	}
	
	return 0;
}
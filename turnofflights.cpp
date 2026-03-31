//hackerearth "turn off lights problem"
#include <iostream>
using namespace std;
int main() {
	 int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
	for(int k=1;k<=n;k++){
		int count=0;
		for(int i=0;i<n;){
			if(s[i]=='1'){
                count++;
                i+=k;
            }
			else{
                i++;
            }
        }
		if(count<=m){
			 cout<<k;
			 return 0;
        }
    }

}
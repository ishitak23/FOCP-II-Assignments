//Help Alice to find the Parity
#include<iostream>
using namespace std;
int main(){
long long L,R;
cin>>L>>R;
long long c=(R+1)/2-(L/2);
if(c%2==0)cout<<"even";
else cout<<"odd";
return 0;
}
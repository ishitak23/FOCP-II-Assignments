//hackerearth count pairs problem
#include<iostream>
using namespace std;

int main(){
int t;cin>>t;
while(t--){
int n;cin>>n;
int count=0;

for(int i=2;i<=n;i++){
if(n%i==0){
count++;
while(n%i==0){
n=n/i;
}
}
}

int ans=1;
for(int i=0;i<count;i++){
ans=ans*2;
}

cout<<ans<<endl;
}
return 0;
}
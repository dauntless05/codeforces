#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int sum=0;

    for(int i=1;i<=w;i++){
        int a=(i*k);
        sum=sum+a;
    }

    if(sum<=n){
        cout<<0;
    }
    else{
        cout<<sum-n<<endl;
    }

    return 0;
}
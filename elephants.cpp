#include<iostream>
using namespace std;

int main(){
    int x,n;
    cin>>x;

    if(x<=5){
        cout<<1;
    }

    else{
        if((x%5)==0){
            n=x/5;
            cout<<n;
        }
        else{
            n=(x/5)+1;
            cout<<n;
        }
    }

    return 0;
}
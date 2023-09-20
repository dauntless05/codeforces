#include<iostream>
using namespace std;

int main(){
    int a[101];
    int count=0;

    for(int i=0;i<101;i++){
        cin>>a[i];
    }

    int size=sizeof(a)/sizeof(a[0]);

    for(int j=0;j<size;j++){
        if(a[j]==a[j+1]){
            count++;
            if(count==6){
                cout<<"YES"<<endl;
                return 0;
            }
        }
        else{
            count=0;
        }
    }
    cout<<"NO"<<endl;

    return 0;
}
#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    char a[n];
    int count=0;

    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i>0){//iterate through the loop again to compare
            if(a[i-1]==a[i]){
                count++;
            }
        }
    }

    cout<<count;

    return 0;

}
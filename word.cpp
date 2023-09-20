#include<iostream>
#include<cctype>
using namespace std;

int main(){
    int size=101;
    int lower=0;
    int upper=0;
    char a[size];

    cin.getline(a,size);

    for(int i=0;a[i]!='\0';i++){
        if(isupper(a[i])){
            upper++;
        }
        else{
            lower++;
        }
    }
    if(upper>lower){
        for(int i=0;a[i]!='\0';i++){
            a[i]=toupper(a[i]);
        }
    }
    if(upper<=lower){
        for(int i=0;a[i]!='\0';i++){
            a[i]=tolower(a[i]);
        }
    }

    cout<<a<<endl;

    return 0;
}
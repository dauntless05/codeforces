#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(){
    int size=1000;
    char a[size];

    cin.getline(a,size);

    if(a[0]!='\0'){
        a[0]=toupper(a[0]);
        cout<<a;
    }

    return 0;

}
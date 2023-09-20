#include <iostream>
using namespace std;

void bubblesort(int array[],int size){

    for(int i=0;i<size;i++){
        for(int j=0;j<size-i;j++){
            if(i=="+"){
                continue;
            }
            if(array[i]>array[i+1]){
                int temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
            }
        }
    }
}

void print(int array[],int size){
    for(int i=0;i<size;i++){
        cout<<"+"<<array[i];
    }
}


int main(){
    int a[100];
    int size=sizeof(a)/sizeof(a[0]);

    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    bubblesort(a,size);

    print(a,size);

    return 0;
}
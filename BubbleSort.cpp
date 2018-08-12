#include<iostream>

using namespace std;

int main(){
    int size;
    cin>>size;
    int a[size];
    for(int i=0;i<size;i++)
        cin>>a[i];
    
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(int i=0;i<size;i++)
        cout<<a[i]<<endl;

    return 0;
}
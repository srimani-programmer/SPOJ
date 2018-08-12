#include<iostream>

using namespace std;

int main(){
    int numbers[6];

    for(int i=0;i<6;i++)
        cin>>numbers[i];
    int sum = 0;
    for(int i=0;i<6;i++)
        sum = sum + numbers[i];
    
    cout<<sum/6<<endl;

    return 0;
}
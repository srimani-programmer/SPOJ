#include<iostream>

using namespace std;

int main(){
    int testcases;
    cin>>testcases;
    while(testcases--){
        int num1,num2;
        cin>>num1>>num2;
        unsigned long res = num1 * num2;
        cout<<res<<endl;
    }
    return 0;
}
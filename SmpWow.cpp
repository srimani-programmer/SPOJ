#include<iostream>

using namespace std;

int main(){
    int val;
    cin>>val;
    string str = "W";
    while(val--){
        str = str + "o";
    }
    str = str + "w";
    cout<<str<<endl;
    return 0;
}
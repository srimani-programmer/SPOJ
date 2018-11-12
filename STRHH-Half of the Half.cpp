#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s,s1 = "";
        cin>>s;

        int size = s.size();
        int mid = size/2;

        for(int i=0;i<mid;i=i+2)
            s1 = s1 + s[i];

        cout<<s1<<endl;

    }

    return 0;
}
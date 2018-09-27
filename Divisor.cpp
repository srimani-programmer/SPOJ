/**
 * DivisorsSumation
 */
#include<iostream>
using namespace std;
class DivisorsSumation {
     public:
       void divisor(){
        int n,sum = 0;
        int a[50000];
        int b[50000];
            cin>>n;

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int i=0;i<n;i++){
            for(int j=1;j<a[i];j++){
                if(a[i]%j == 0){
                    sum = sum + j;
                }
            }

            b[i] = sum;
            sum = 0;
        }

        for(int i=0;i<n;i++){
            cout<<b[i]<<endl;
        }
    }

};

int main(){
       DivisorsSumation d;
       d.divisor();
       return 0;
   }
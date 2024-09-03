#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    while(n--){
        long long k;
        cin>>k;
        if(k & (k-1)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }








    return 0;
}

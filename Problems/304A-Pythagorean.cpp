#include<iostream>
using namespace std;

const int mx=2e8+12;
bool isPerfectSquar[mx];

int main(){

    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        isPerfectSquar[i*i]=1;
    }

    int cnt=0;
    for(int a = 1;a <= n; a++){
        for(int b=a; b<=n; b++){
            int v=(a*a)+(b*b);
            if(isPerfectSquar[v]){
                cnt++;
            }
        }
    }

    cout<<cnt<<endl;



    return 0;
}

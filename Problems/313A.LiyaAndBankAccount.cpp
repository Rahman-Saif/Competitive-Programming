#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    if(n>0)cout<<n<<endl;

    else{
      if(n%10==0)cout<<0<<endl;
      else cout<<n/10<<endl;



    }


    return 0;
}

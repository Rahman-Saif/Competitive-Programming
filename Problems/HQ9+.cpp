#include<iostream>
using namespace std;

int main(){

    string s;
    int a=0;

    cin>>s;
    int len=s.length();

    for(int i=0;i<len;i++){
        if(int(s[i])>=33 && int(s[i]<=126)){
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9'||s[i]=='+')a++;
        }else{
            a=0;
            break;
        }
    }

    if(a==0)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

}

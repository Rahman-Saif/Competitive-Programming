#include <iostream>
#include <string>
using namespace std;

int main(){

    string s;
    cin>>s;
    int len=s.length();
    int count=0;


    for(int i=0;i<len-6;i++){
        if(s.substr(i,7)=="1111111"){
            //cout<<s.substr(i,7)<<endl;

            count++;
        }
        if(s.substr(i,7)=="0000000"){
            //cout<<s.substr(i,7)<<endl;

            count++;
        }
    }

    if(count==0)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;


    return 0;


}

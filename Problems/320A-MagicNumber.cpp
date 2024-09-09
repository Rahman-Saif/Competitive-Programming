#include<bits/stdc++.h>
using namespace std;


int main(){

    string n;
    cin>>n;

    bool flag=true;


   for(int i = 0; i<n.size();){
        if(n[i]=='1' && n[i+1] == '4' && n[i+2] == '4'){
            i+=3;
        }

        else if (n[i]=='1' && n[i+1]=='4'){
            i+=2;
        }

        else if(n[i]=='1'){
            i+=1;
        }
        else{
            flag=false;
            break;
        }
   }

    if(flag){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    string s;
    cin>>s;
    int max=0;
    string res;

    for(int i=0;i<n-1;i++){
        string k=s.substr(i,2);
      int count = 0;
      for(int j=i;j<n-1;j++){
            string l=s.substr(j,2);

           if(k == l){
               count++;
              if(count>max){
                   max=count;
                   res=k;
               }
        }
        }
   }
                      cout<<res<<endl;


    return 0;
}

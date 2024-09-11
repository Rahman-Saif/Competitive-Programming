#include<bits/stdc++.h>
using namespace std;


int main(){


    //int a[]={3,4,5,6,7};
    //reverse(a,a+5);

    int a[]={1,2,3,4,5,6,8,2,9,10};
    //reverse(a+3,a+8);
   // sort(a,a+10);

   memset(a,-1,sizeof(a));
    for(int i = 0 ; i< 10 ; i++ ){
        cout<<a[i]<<endl;
    }

    //cout<<*max_element(a+3,a+7)<<endl;


    char c='a';
    cout<<char(toupper(c))<<endl;

    cout<<__gcd(16,12)<<endl;

    //islower,isupper,isdigit,isalpha
    if(islower(c)){
        cout<<"Lower case"<<endl;
    }else{
        cout<<"Upper Case"<<endl;
    }








    return 0;
}

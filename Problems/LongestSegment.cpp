#include<iostream>
#include<math.h>
#include <iomanip>


using namespace std;

const int mx=123;
int x[mx],y[mx];


int main(){

    int n;
    cin>>n;

    for( int i =0 ; i < n ; i++ ){
        cin>>x[i]>>y[i];
    }

    double maxDistance=0;
    for ( int i=0; i<n ; i++ ){
        for( int j=0;j<n ; j++){
            int x1=x[i];
            int y1=y[i];

            int x2=x[j];
            int y2=y[j];

            double dist=sqrt(((x1-x2) * (x1-x2))+(y1-y2)*(y1-y2));

            if(dist>maxDistance){
                maxDistance=dist;
            }
        }
    }

    cout<<setprecision(12)<<maxDistance<<endl;




    return 0;
}

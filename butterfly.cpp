#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(i=1;i<=2*n;i++){
        for(j=1;j<=2*n;j++){
            if(i>n){
                if(j<=2*n-i+1 || j>i-n+3){
                    cout<<"*";
                }
                 
                else{
                    cout<<" ";
                }
            }
            else if(i<=n){
                if(j<=i || j>=2*n+1-i){
                cout<<"*";
                }
                 
                else{
                    cout<<" ";
                }
            
            }
            
            
            
        }
        cout<<endl;
    }
}
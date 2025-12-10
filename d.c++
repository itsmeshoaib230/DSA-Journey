#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<4;i++){
        for(int j=0;j<4-i-1;j++){
           cout<<" ";
        }
        for(int k=0;k<i+1;k++){
            cout<<k+1;
        }
        for(int l=i;l>0;l--){
            cout<<l;
        }
        cout<<endl;
    }
}
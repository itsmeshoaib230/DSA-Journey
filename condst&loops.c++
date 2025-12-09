// if-else
// if-elseif-else
// ternary condition: cond?str1:str2;
// loops:while,do while,for loop
#include<iostream>
using namespace std;
int main(){
    int count=2;
    while(count<=5){
        cout<<count;
        count++;
    }
}
// sum of odd numbers
#include<iostream>
using namespace std;
int main(){
    int ans=0;
    for(int i=0;i<100;i++){
        if(i%2!=0){
           ans+=i;
        }
    }
    cout<<ans;
}
// 
// Data structures are divided in two 
// primitive and non primitive
// non primitive are two 
// linear and non linear
// linaer are two : static and dynamic 
// static: arrays
// dynamic: vector linkedlist stack queue
// non linear tree graph table/set
// concept of flowchart:
// 1) oval:start/stop
// 2)parellelogram:input/output
// 3)rectangle:process
// 4)arrows represent direction of flow of code
// 5)diamond:decisiom

// first program:area of square

#include<iostream>
using namespace std;
int main(){
    int a;
    a=9;
    cout<<a*a;
}

// 2nd program: max of two numbers

#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    a=9;
    b=7;
    if (a>b){
     cout<<a;
    }
    else{
        cout<<b;
    }
    
}

// 3rd program: number is odd or even

#include<iostream>
using namespace std;
int main(){
    int a=10;
    if(a%2==0){
        cout<<"even";
    }
}

// 4th program:sum of 1 to n numbers

#include<iostream>
using namespace std;
int main(){
    int x=5;
    int ans=0;
    for(int i=1;i<=x;i++){
      ans+=i;
    }
    cout<<"the answer =";
    cout<<ans;
}

// 5th problem: number is prime or not

#include<iostream>
using namespace std;
int main(){
    int a;
    a=87;
    int c=0;
    for(int i=2;i*i<a;i++){
        if(a%i==0){
            cout<<"not prime";
            c=1;
        }
    }
    if (c==0){
        cout<<"prime";
    }
}

// 6th problem: factorial of a number

#include<iostream>
using namespace std;
int main(){
    int a=5;
    int ans=1;
    for(int i=1;i<=a;i++){
       ans*=i;
    }
    cout<<ans;
}

// 7th problem: simple intrest(p,r,t)

#include<iostream>
using namespace std;
int main(){
    int p=10000;
    int r=2;
    int t=3;
    cout<<((p*r*t)/100);
}

// 8th problem: min of two numbers

#include<iostream>
using namespace std;
int main(){
    int a=9;
    int b=8;
    if(a<b){
        cout<<a;
    }
    else{
        cout<<b;
    }
}

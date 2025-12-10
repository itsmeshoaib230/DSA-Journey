// patterns: 1)square pattern
#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<j+1;
        }
        cout<<"\n";
    }
}

// ABCD pattern
#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<4;i++){
        int k=65;
        for(int j=0;j<4;j++){
            cout<<char(k);
            k++;
        }

    }
}


// triangle pattern

#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<4;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}

// 1234-5678-9101112-13141516
#include<iostream>
using namespace std;
int main(){
    int k=1;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<k;
            k++;
        }
    }
} 

// 1223334444 pattern
#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<4;i++){
        for(int j=0;j<i+1;j++){
            cout<<i+1;
        }
    }
}

// Triangle pattern: 1121231234
#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<4;i++){
        for(int j=0;j<i+1;j++){
            cout<<j+1;
        }
    }
}

// triangle pattern: 1213214321
#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<4;i++){
        for(int j=i+1;j>0;j--){
            cout<<j;
        }
    }
}

// floyd's triangle

#include<iostream>
using namespace std;;
int main(){
    int k=1;
    for(int i=0;i<4;i++){
        for(int j=0;j<i+1;j++){
           cout<<k;
           k++;
        }
    }
}

// inverted traingle

#include<iostream>
using namespace std;
int main(){
    int ch=1;
    for(int i=0;i<4;i++){
        
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int k=i;k<4;k++){
            cout<<ch;
        }
        ch++;
        cout<<endl;
    }
}

// ***pyramid pattern***
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
        for(int l=i;l<i+1;l--){
            cout<<l;
        }
    }
}

// Hollow Diamond pattern

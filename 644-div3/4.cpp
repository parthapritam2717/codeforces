#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<limits>
#include<list>
#include<map>
#include<set>
#include<time.h>
#include<math.h>
#include<cstring>
#include<unordered_set>
#include<unordered_map>
#include<stack>
#include<queue>
#include<deque>

using namespace std;


bool isPrime(int n){
    int t=sqrt(n);
    for(int i=2;i<=t;++i){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

//to read strings with whitespace string s,getline(cin,s);
int main(){
    ios_base::sync_with_stdio(false); //makes cin cout faster
    cin.tie(NULL);    
    int t;
    cin>>t;
    for(int i=0;i<t;++i){
        int n,m;
        cin>>n>>m;
        if(m>=n){
            cout<<1<<endl;
        }
        else if(m==1){
            cout<<n<<endl;
        }
        else{
            //check if prime number then n will be output
            if(isPrime(n)){
                cout<<n<<endl;
            }
            else{   
               int sq=sqrt(n);
               int c=n;
               if(sq>m)
                    sq=m;
               for(int j=2;j<=sq;++j){
                   if(n%j==0){
                       int q=n/j;
                       if(q<=m){
                           c=min({c,j,q});
                       }
                       else{
                           c=min(c,q);
                       }
                   }
               }
               cout<<c<<endl;
            }

        }

    }

    return 0;

}




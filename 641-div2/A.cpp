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

typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
typedef vector<pii> vpi;
typedef vector<pll> vpl;
typedef vector<string> vs;
typedef unordered_map<int,int> umap;
typedef map<long long,long long> omap;
typedef multimap<long long,long long> mmap;

#define fori(i,s,n) for(int i=(s);i<(n);++i)
#define forl(i,s,n) for(ll i=(s);i<(n);++i)


//vector<vector<int>> matrix(n+1,vector<int>(n+1,0));

//to read strings with whitespace string s,getline(cin,s);



bool isPrime(int n){
    int s=sqrt(n);
    for(int i=2;i<=s;++i){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int getFactor(int n){
    int s=sqrt(n);
    for(int i=2;i<=s;++i){
        if(n%i==0){
            return i;
        }
    }
    return n;
}

ll compute(ll n,ll k){
    
    if(isPrime(n)){
        return 2*n+(k-1)*2;
    }
    else{
        //more than two possibilities
        if(n%2==0)
            return n+(k*2);
        else{
            return n+getFactor(n)+(k-1)*2;
        }
        
    }
}


int main(){
    ios_base::sync_with_stdio(false); //makes cin cout faster
    cin.tie(NULL);    
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        cout<<compute(n,k)<<"\n";
    }
    return 0;

}




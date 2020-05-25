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


//vvi matrix(n+1,vi(n+1,0));

//to read strings with whitespace string s,getline(cin,s);
void generateNext(vs &A,unordered_map<string,int> &um,int n,int m,int &maxi,string &ans){
    fori(i,0,1){
        string t=A[i];
        for(int k=0;k<m;++k){
            char c=t[k];
            for(int j='a';j<='z';++j){
                if(c!=j){
                    t[k]=j;
                    if(um.find(t)!=um.end()){
                        int count=um[t];
                        um[t]++;
                    }
                    else{
                        um.insert(make_pair(t,1));
                    }
                }
            }
            t[k]=c;
        }
    }
    fori(i,1,n){
        string t=A[i];
        for(int k=0;k<m;++k){
            char c=t[k];
            for(int j='a';j<='z';++j){
                if(c!=j){
                    t[k]=j;
                    if(um.find(t)!=um.end()){
                        int count=um[t];
                        um[t]++;
                        if(um[t]==n){
                            //cout<<t<<endl;
                           ans=t;
                           maxi=n;
                           return;
                        }
                    }
                }
            }
            t[k]=c;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false); //makes cin cout faster
    cin.tie(NULL);    
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vs A(n);
        unordered_map<string,int> um;
        fori(i,0,n){
            cin>>A[i];
            um.insert(make_pair(A[i],1));
        }
        int maxi=0;
        string ans="";
        if(n==1){
            cout<<A[0]<<endl;
            continue;
        }
        generateNext(A,um,n,m,maxi,ans);
        if(maxi==0){
            cout<<-1<<endl;
        }
        else
            cout<<ans<<endl;
        
    }
    return 0;

}




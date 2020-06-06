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


//to read strings with whitespace string s,getline(cin,s);
int main(){
    ios_base::sync_with_stdio(false); //makes cin cout faster
    cin.tie(NULL);    
    int t;
    cin>>t;
    while(t--){
       int n,x;
       cin>>n>>x;
       int even=0;
       int odd=0;
       for(int i=0;i<n;++i){
           int item;
           cin>>item;
           if(item%2==0)
                even++;
            else
                odd++;
       }
       if(x%2==0){
           int y=0;
           if(odd>0 && odd%2==0 && odd<=x){
               y+=(odd-1);
           }
           else if(odd%2==1 && odd<=x){
               y+=odd;
           }
           else if(odd>x){
               y+=(x-1);
           }
           if(x-y<=even && y>0){
               cout<<"Yes"<<endl;
           }
           else{
               cout<<"No"<<endl;
           }
       }
       else{
           int y=0;
           if(odd>0 && odd%2==0 && odd<=x){
               y+=(odd-1);
           }
           else if(odd%2==1 && odd<=x){
               y+=(odd);
           }
           else if(odd>x){
               y+=x;
           }
           if(x-y<=even && y>0){
               cout<<"Yes"<<endl;
           }
           else{
               cout<<"No"<<endl;
           }
       } 
    }
    return 0;

}




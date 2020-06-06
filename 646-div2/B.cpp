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
       string s;
       cin>>s;
       if(s.length()<=2){
           cout<<0<<endl;
       }
       else{
           //count number of zeros in between 1th index an l-1
           int c=0;
           int l=s.length();
           int x1=0,x2=0,x3=0,x4=0;
           //00000...000
           for(int i=0;i<l;++i){
               if(s[i]!='0'){
                   x1++;
               }
           }
           //111....111
           for(int i=0;i<l;++i){
               if(s[i]!='1'){
                   x2++;
               }
           }
           //all convert to 0
           //0000.....1
           for(int i=0;i<l-1;++i){
               if(s[i]!='0'){
                   x3++;
               }
           }
           if(s[l-1]=='0' && x3>0)
                x3++;
            //1.....0
           for(int i=1;i<l;++i){
               if(s[i]!='0'){
                   x4++;
               }
           }
           if(x4>0 && s[0]!='1')
                x4++;
           //cout<<x1<<" "<<x2<<" "<<x3<<" "<<x4<<endl;
           int ans=min({x1,x2,x3,x4});
           cout<<ans<<endl;
           
       }
    }
    return 0;

}




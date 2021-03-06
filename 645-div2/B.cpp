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
        int n;
        cin>>n;
        vi A(n);
        fori(i,0,n){
            cin>>A[i];
            //cout<<A[i]<<" ";
        }
        //cout<<endl;
        sort(A.begin(),A.end());
        int aval=1;
        int temp=1;
        int needed=A[0];
        int i=0;
        while(i<n){
            if(needed<=temp){
                aval=temp+1;
                i++;
                temp++;
                needed=A[i];
            }
            else{
                temp++;
                i++;
                if(i<n)
                    needed=A[i];
                else
                    break;
            }
        }
        cout<<aval<<"\n";
    }
    return 0;

}




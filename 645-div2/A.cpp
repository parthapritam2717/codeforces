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

// using namespace std;

// typedef long long ll;
// typedef vector<int> vi;
// typedef vector<string> vs;
// typedef vector<ll> vl;
// typedef vector<vi> vvi;
// typedef vector<vl> vvl;
// typedef vector<double> vd;
// typedef vector<vd> vvd;
// typedef pair<int, int> pii;
// typedef pair<ll, ll> pll;
// typedef pair<double, double> pdd;
// typedef vector<pii> vpi;
// typedef vector<pll> vpl;
// typedef vector<string> vs;
// typedef unordered_map<int,int> umap;
// typedef map<long long,long long> omap;
// typedef multimap<long long,long long> mmap;

// #define fori(i,s,n) for(int i=(s);i<(n);++i)
// #define forl(i,s,n) for(ll i=(s);i<(n);++i)


// //to read strings with whitespace string s,getline(cin,s);
// int main(){
//     ios_base::sync_with_stdio(false); //makes cin cout faster
//     cin.tie(NULL);    
//     int t;
//     cin>>t;
//     while(t--){
//         int n,m;
//         cin>>n>>m;//m is breadth
//         int ans=0;
//         if(m%2==0){
//             ans=n*(m/2);
//         }
//         else{
//             ans=n*(m/2)+ceil((double)n/2);
//         }
//         cout<<ans<<"\n";
//     }
//     return 0;

// }

//#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    scanf("%d", &test);
    while(test--){
        int n, m;
        scanf("%d %d", &n, &m);
        int a = max(n, m), b = min(n, m);
        int res=0;
        if(b==1||a==1)
            res = (a+1)*b/2;
        else if(b%2==0||a%2==0){
            res = (a*b)/2;
        }
        else
            res = (a-1)*(b-1)/2 + (a+b)/2;
        printf("%d\n", res);
    }
    return 0;
}




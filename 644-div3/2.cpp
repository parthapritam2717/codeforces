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


/*ACCEPTED*/


//to read strings with whitespace string s,getline(cin,s);
int main(){
    ios_base::sync_with_stdio(false); //makes cin cout faster
    cin.tie(NULL);    
    int t;
    cin>>t;
    for(int i=0;i<t;++i){
        int n;
        cin>>n;
        vector<int> A(n);
        int c=INT_MAX;
        for(int j=0;j<n;++j){
            cin>>A[j];
        }
        sort(A.begin(),A.end());
        for(int j=0;j<n-1;++j){
            c=min(c,A[j+1]-A[j]);
        }
        cout<<c<<endl;
    }

    return 0;

}




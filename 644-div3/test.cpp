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

//to read strings with whitespace string s,getline(cin,s);
int main(){
    ios_base::sync_with_stdio(false); //makes cin cout faster
    cin.tie(NULL);    
    int t;
    cin>>t;
    vector<int> A(t);
    for(int i=0;i<t;++i){
        cin>>A[i];
    }
    unordered_multiset<int> us(A.begin(),A.end());
    cout<<us.count(3)<<endl;
    us.erase(3);
    cout<<us.count(3)<<endl;
    
    return 0;

}




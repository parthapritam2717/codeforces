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


//Usefull for codeforces and spoj for faster integer input reading

//to read strings with whitespace string s,getline(cin,s);
int main(){
    ios_base::sync_with_stdio(false); //makes cin cout faster
    cin.tie(NULL);    
    int t;
    vector<int> A;
    cin>>t;
    for(int i=0;i<t;++i){
        int a,b;
        cin>>a>>b;
        int area;
        int ans;
        if(a==b){
            ans=a*2;
            A.push_back(ans*ans);
        }
        else{
            int mini=min(a,b)*2;
            int maxi=max(a,b);
            ans=max(mini,maxi);
            A.push_back(ans*ans);
        }
       
    }
    for(int i=0;i<t;++i){
        cout<<A[i]<<"\n";
    }

    return 0;

}




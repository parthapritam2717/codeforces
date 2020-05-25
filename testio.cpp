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
    //int t;
    int n,k;
    cin>>n>>k;
    int c=0;
    for(int i=0;i<n;++i){
        int item;
        cin>>item;
        if(item%k==0){
            c++;
        }

    }
    cout<<c<<"\n";
    return 0;

}




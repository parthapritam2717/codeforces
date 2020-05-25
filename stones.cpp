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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c=0;
    int i=1;
    int tempc=1;
    while(i<n){
        int tempc=1;
        while(i<n && s[i]==s[i-1]){
            tempc++;
            i++;
        }
        if(tempc>1){
            c+=(tempc-1);
        }
        else{
            i++;
        }
    }
    c+=(tempc-1);
    cout<<c<<"\n";
    return 0;

}




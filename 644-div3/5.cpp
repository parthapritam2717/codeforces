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


bool isPrime(int n){
    int t=sqrt(n);
    for(int i=2;i<=t;++i){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
bool validMatrix(vector<string> matrix){
    int n=matrix.size();
    bool flag=1;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(matrix[i][j]=='1'){
                if(i==n-1 || j==n-1 ||(i+1<n && matrix[i+1][j]=='1') ||(j+1<n && matrix[i][j+1]=='1')){
                    continue;
                }
                else{
                    flag=0;
                    break;
                }
            }
        }
    }
    return flag;

}
//to read strings with whitespace string s,getline(cin,s);
int main(){
    ios_base::sync_with_stdio(false); //makes cin cout faster
    cin.tie(NULL);    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> matrix(n);
        for(int i=0;i<n;++i){
            
                cin>>matrix[i];
            
        }
        if(validMatrix(matrix)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;

}




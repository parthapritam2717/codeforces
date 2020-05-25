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
    for(int i=0;i<t;++i){
        int n;
        cin>>n;
        vector<int> A(n);
        for(int j=0;j<n;++j){
            cin>>A[j];
        }
            //count the number of odds and evens
            //if both are same then can be possible
        int evenCount=0;
        int oddCount=0;
        for(int j=0;j<n;++j){
            if(A[j]%2==0)
                evenCount++;
            else
                oddCount++;
        }
        if(evenCount%2==0 && oddCount%2==0){
            cout<<"YES"<<endl;
        }
        else{
            //have to check if we have some diff==1
            unordered_multiset<int> us(A.begin(),A.end());
            for(int j=0;j<n;++j){
                if(us.find(A[j])!=us.end() && us.find(A[j]+1)!=us.end()){
                    oddCount--;
                    evenCount--;
                    break;
                    
                }
                else if(us.find(A[j])!=us.end() && us.find(A[j]-1)!=us.end()){
                    oddCount--;
                    evenCount--;
                    break;
                }
            }
            if(oddCount%2==0 && evenCount%2==0 ){
                cout<<"YES"<<endl; 
            }
            else{
                cout<<"NO"<<endl;
            }


        }
    }

    return 0;

}




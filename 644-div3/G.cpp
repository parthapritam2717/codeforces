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


bool isSafe(vector<vector<int>> &matrix,int i,int j,int n,int m,int rMax,int cMax){
    //find the number of 1s in the row and column
    if(i>=n || j>=m)
        return 0;
    int crow=0;
    for(int ii=0;ii<m;++ii){
        crow+=matrix[i][ii];
    }
    if(crow>=rMax)
        return 0;
    int ccol=0;
    for(int ii=0;ii<n;++ii){
        ccol+=matrix[ii][j];
    }
    if(ccol>=cMax)
        return 0;
    return 1;
}
void printMatrix(vector<vector<int>> &matrix){
    int n=matrix.size();
    int m=matrix[0].size();
    for(int i=0;i<n;++i){
                for(int j=0;j<m;++j){
                    cout<<matrix[i][j]; 
                }
                cout<<endl;
    }
    cout<<endl;
}

void constructMatrix(vector<vector<int>> &matrix,int i,int j,int n,int m,int rMax,int cMax,bool &possible){
    
    // if(i==n && j<m-1)
    //     return;
    // if(i==n && j==m-1){
    //      printMatrix(matrix);
    //      int crow=0;
    //     for(int ii=0;ii<m;++ii){
    //         crow+=matrix[i-1][ii];
    //     }
    //     int ccol=0;
    //     for(int ii=0;ii<n;++ii){
    //         ccol+=matrix[ii][j];
    //     }
    //     if(crow==rMax && ccol==cMax){
    //         possible=1;
    //         return;
    //     }
    // }
    if(j==m){
        printMatrix(matrix);
        int crow=0;
        for(int ii=0;ii<m;++ii){
            crow+=matrix[i][ii];
        }
        int ccol=0;
        for(int ii=0;ii<n;++ii){
            ccol+=matrix[ii][j-1];
        }
        if(crow==rMax && ccol==cMax){
            possible=1;
            return;
        }
    }
    
    if(isSafe(matrix,i,j,n,m,rMax,cMax)){ 
        matrix[i][j]=1;  
        for(int ii=0;ii<n;++ii){
            constructMatrix(matrix,ii,j+1,n,m,rMax,cMax,possible);
        }
    }
}


//to read strings with whitespace string s,getline(cin,s);
int main(){
    ios_base::sync_with_stdio(false); //makes cin cout faster
    cin.tie(NULL);    
    int t;
    cin>>t;
    while(t--){
        int n,m,a,b;
        cin>>n>>m>>a>>b;
        vector<vector<int>> matrix(n+1,vector<int>(m+1,0));
        bool possible=0;
        for(int i=0;i<n;++i){   
            if(!possible)
                constructMatrix(matrix,i,0,n,m,a,b,possible);
                else{
                    break;
                }
        }
        if(possible){
            cout<<"YES"<<endl;
            printMatrix(matrix);
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;

}




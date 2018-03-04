//#include <bits/stdc++.h>
#include<iostream>
#include<string>
#include<queue>
#include<vector>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)//初期値a,i<bの範囲でループ
#define REP(i,n) FOR(i,0,n)//初期値0,i<nの範囲でループ
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int n;
int w[110];
int v[110];
int W;
int dp[110][10010];

int main(){
    cin>>n>>W;
    REP(i,n)cin>>v[i]>>w[i];

    REP(i,n){
        REP(j,W+1){
            if(j>=w[i])dp[i+1][j]=max(dp[i][j-w[i]]+v[i],dp[i][j]);
            else dp[i+1][j]=dp[i][j];
            
        }
    }

    cout<<dp[n][W]<<endl;
    

    return 0;
}
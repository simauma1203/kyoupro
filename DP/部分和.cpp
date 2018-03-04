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

int n,A;
int a[110];

bool dp[110][10010];
//dp[i+1][j]:=i番目まで選んでjになるか

int main(){

    cin>>n>>A;
    REP(i,n)cin>>a[i];

    memset(dp,0,sizeof(dp));//すべてにfalseをセット
    dp[0][0]=true;
    
    for(i,n){
        for(j,A){
            dp[i+1][j]|=dp[i][j];
            if(j>=a[i])dp[i+1][j]|=dp[i][j-a[i]];
        }
    }
    
    cout<<dp[n][A]<<endl;
    return 0;
}
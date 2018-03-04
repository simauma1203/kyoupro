#include <bits/stdc++.h>
#include<iostream>
#include<string>
#include<queue>
#include<vector>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)//初期値a,i<bの範囲でループ
#define REP(i,n) FOR(i,0,n)//初期値0,i<nの範囲でループ
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int n,W;
int weight[101],value[101];
int 
int dp[101][10001]

//dp[i][j]:=i-1個目までの品物を選んだときの価値の最大値

int main(){

    cin>>n;
    REP(i,n)cin>>v[i]>>w[i];

    REP(i,n){
        REP(w,W+1){
            //空きあり
            if(w>=weight[i]){
                dp[i+1][w]=max(
                    dp[i][w-weight[i]+value[i],
                    dp[i][w]
                );
            }else{
                dp[i+1][w]=dp[i][w];
            }
        }
    }

    cout<<dp[n][w]<<endl;

    

    return 0;
}
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

int n;
int a[1000];
int dp[10010];

int main(){
    cin>>n;
    REP(i,n)cin>>a[i];
    dp[0]=0;
    REP(i,n)dp[i+1]=max(dp[i],dp[a]+a[i]);

    cout<<dp[n];
    

    return 0;
}
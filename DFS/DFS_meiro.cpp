//#include <bits/stdc++.h>
#include<iostream>
#include<string>
#include<queue>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)//初期値a,i<bの範囲でループ
#define REP(i,n) FOR(i,0,n)//初期値0,i<nの範囲でループ
using namespace std;
typedef long long ll;
typedef unsigned long long ull;



int vx[]={-1,0,1,0};
int vy[]={0,1,0,-1};

int sx,sy,gx,gy;
int nowx,nowy;
int nx,ny;
int h,w;
int dp[501][501];
char c[501][501];

int main(){
    queue<int> qx;
    queue<int> qy;

    cin>>h>>w;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            dp[i][j]=-1;
            cin>>c[i][j];
            if(c[i][j]=='s'){
                sx=i;
                sy=j;
            }
            if(c[i][j]=='g'){
                gx=i;
                gy=j;
            }
        }
    }

    qx.push(sx);
    qy.push(sy);
    dp[sx][sy]=0;

    for(;;){
        if(qx.empty()){
            cout<<"No";
            return 0;
        }
        nowx=qx.front();
        nowy=qy.front();
        qx.pop();
        qy.pop();

        if(nowx==gx && nowy==gy){
            cout<<"Yes";
            return 0;
        }
        
        REP(j,4){
            nx=nowx+vx[j];
            ny=nowy+vy[j];
            if(nx<0 || h<=nx || ny<0 || w<=ny){
                continue;
            }else{
                if(dp[nx][ny]==-1 && c[nx][ny]!='#'){
                    dp[nx][ny]=dp[nowx][nowy]+1;
                    qx.push(nx);
                    qy.push(ny);
                }
            }
        }
    }
    

    return 0;
}
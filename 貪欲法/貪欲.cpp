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

int main(){
    int n;
    int mai=0;
    cin>>n;
    n=1000-n;

    for(;;){
        if(n>=500){
            mai++;
            n-=500;
        }else{
            break;
        }
    }
    for(;;){
        if(n>=100){
            mai++;
            n-=100;
        }else{
            break;
        }
    }
    for(;;){
        if(n>=50){
            mai++;
            n-=50;
        }else{
            break;
        }
    }
    for(;;){
        if(n>=10){
            mai++;
            n-=10;
        }else{
            break;
        }
    }
    for(;;){
        if(n>=5){
            mai++;
            n-=5;
        }else{
            break;
        }
    }
    mai+=n;
    cout<<mai;

    

    return 0;
}
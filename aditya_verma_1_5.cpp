#.dev github demo
#include <bits/stdc++.h>
#include <cstring>
using namespace std;
//without memoization
//int knapsack(int wt[],int val[],int W,int n){
//    if(W==0 || n==0)    return 0;
//    if(wt[n-1]<=W) return max(val[n-1]+ knapsack(wt,val,W-wt[n-1],n-1), knapsack(wt,val,W,n-1));
//    else if(wt[n-1]>W) return knapsack(wt,val,W,n-1);
//}

//with memoization
int dp[1000][1000];
//memset(dp,-1,sizeof(dp)); //memset can only be called from within main() or some function
int knapsack(int wt[],int val[],int W,int n){
    if(W==0||n==0) return 0;
    if(dp[n][W]!=-1) return dp[n][W];
    else if(wt[n-1]<=W) return dp[n][W]=max(val[n-1]+ knapsack(wt,val,W-wt[n-1],n-1),knapsack(wt,val,W,n-1));
    else if(wt[n-1]>W) return dp[n][W]= knapsack(wt,val,W,n-1);
}

int main() {
    //std::cout << "Hello, World!" << std::endl;
    int wt[5];
    int val[5];

    int n=5;
    int W;
    cin>>W;
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++){
        cin>>wt[i]>>val[i];
    }

    cout<<knapsack(wt,val,W,n);
    return 0;
}

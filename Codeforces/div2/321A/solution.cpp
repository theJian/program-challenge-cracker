Link : http://codeforces.com/contest/580/problem/A

Note, that if the array has two intersecting continuous non-decreasing subsequence, 
they can be combined into one. Therefore, you can just pass the array from left to right.
If the current subsequence can be continued using the i-th element, then we do it, 
otherwise we start a new one. The answer is the maximum subsequence of all the found ones.
Asymptotics — O(n).

here is the code

#include <cstdio>
#include <cstring>
#include <iostream>
#include <stack>
#include <queue>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

const int maxn = 1000005;

typedef long long LL;

vector<int>G[maxn];

int a[maxn];
int dp[maxn];


int main()
{
    int n,m;
    int tmp = 1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    int cnt = 1;
    int ans = 0;
    while(cnt<=n){
        if(a[cnt]<=a[cnt+1]){
            tmp++;
        }
       else if (a[cnt]>a[cnt+1]){
            tmp  = 1;
        }
        ans = max(tmp,ans);
        cnt++;
    }
    printf("%d\n",ans);
    return 0;
}

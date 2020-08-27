/*描述
给出一个正整数a，要求分解成若干个正整数的乘积，即a = a1 * a2 * a3 * ... * an，并且
1 < a1 <= a2 <= a3 <= ... <= an，问这样的分解的种数有多少。注意到a = a也是一种分解。
输入
第1行是测试数据的组数n，后面跟着n行输入。每组测试数据占1行，包括一个正整数a (1 < a < 32768)
输出
n行，每行输出对应一个输入。输出应是一个正整数，指明满足要求的分解的种数*/
#include<bits/stdc++.h>
using namespace std;
int x,ans;
void dfs(int p,int k){ //p表示乘积，k表示当前的因子
    if(p==x){
        ans++;
        return;
    }
    for(int i=k;i<=x;i++){
        if(p*i>x)break;
        if(x%i==0)dfs(p*i,i);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        ans=0;
        scanf("%d",&x);
        dfs(1,2);
        printf("%d\n",ans);
    }
    return 0;
}


//n盏灯，第一个人把所有灯打开，第2个人按下所有编号为2的倍数开关，第三个人按3的倍数开关。共k个人，k<=n<=1000.问最后几盏灯亮着
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maxn 1010
int a[maxn];
int main()
{
    int n,k,first = 1;
    memset(a,0,sizeof(a));
    scanf("%d%d",&n,&k);
    for(int i = 1;i<=k; i++)
        for(int j = 1; j<=n;j++)
        if(j%i==0) a[j]=!a[j];
    for(int i = 1; i<=n; i++)
        if(a[i])
    {   if(first) first = 0;else printf(" ");printf("%d",i);
    }

    return 0;
}

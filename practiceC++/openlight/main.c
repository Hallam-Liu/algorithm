//nյ�ƣ���һ���˰����еƴ򿪣���2���˰������б��Ϊ2�ı������أ��������˰�3�ı������ء���k���ˣ�k<=n<=1000.�����յ������
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

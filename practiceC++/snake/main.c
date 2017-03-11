#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maxn 20
int a[maxn][maxn];  // named a two dimension array respectively represent the line and row
int main()
{
    int n,x,y,tot = 0;
    scanf("%d",&n);
    memset(a,0,sizeof(a));
    tot = a[x=0][y=n-1] = 1;
    while(tot < n*n)
    {
        while((x+1) < n && !a[x+1][y]) a[++x][y] = ++tot; //if line exist,and the next line is 0. the number next line add 1.
        while((y-1>=0) && !a[x][y-1])  a[x][--y] = ++tot; //go back to add 1 on the same line in different column.
        while((x-1>=0)&& !a[x-1][y])   a[--x][y] = ++tot; //then add 1 on the same column in different line;
        while(y+1 < n && !a[x][y+1])   a[x][++y] = ++tot; //add 1 on the same line in different column from left to right.

    }
    for(x = 0; x < n; x++)
    {
        for(y = 0 ; y < n; y++) printf("%3d",a[x][y]);  //%3d,printf an int number take 3 blocks
        printf("\n");                                   //printf number in column needn't change line.
    }
    return 0;
}


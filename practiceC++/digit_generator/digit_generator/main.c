//
//  main.c
//  digit_generator
//
//  Created by 刘浩然 on 2/26/18.
//  Copyright © 2018 刘浩然. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define maxn 100005
int ans[maxn];
int main(int argc, const char * argv[]) {
    // insert code here...
    int T,n;
    memset(ans, 0, sizeof(ans));
    for(int m = 1; m<maxn; m++)
        {
            int x = m, y = m;
            while(x>0) {
                y+=x%10;x/=10; //y 加上y 各个位数上的数字之和
                }
            if(ans[y]==0 || m<ans[y])
                ans[y]=m; //y 的最小生成元
        }
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        printf("%d\n", ans[n]);
    }
    
    return 0;
}

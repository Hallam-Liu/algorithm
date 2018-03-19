//
//  main.c
//  The_Dolequeue
//
//  Created by 刘浩然 on 3/1/18.
//  Copyright © 2018 刘浩然. All rights reserved.
//

#include <stdio.h>
#define maxn 25
int n,k,m,a[maxn];
int go(int p,int d,int t){
    while (t--) {
        do{
            p=(p+d+n-1)%n+1; //当p+1 大于n时返回零重新计数
        }
        while (a[p]==0);
        
    }
    return p;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    while(scanf("%d%d%d",&n,&k,&m)==3&&n ){
        for (int i =1; i<=n; i++) a[i]=i;
            int left = n; //剩下的人数
            int p1=n, p2=1;
            while (left) {
                p1 = go(p1,1,k);
                p2 = go(p2,-1,m);
                printf("%3d",p1); left--;
                if(p2!=p1){
                    printf("%3d",p2); left--;
                }
                a[p1] = a[p2] =0;
                if(left)
                    printf(",");
            }
            printf("\n");
        
    
    }
    printf("Hello, World!\n");
    return 0;
}

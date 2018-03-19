//
//  main.cpp
//  Marble
//
//  Created by 刘浩然 on 3/12/18.
//  Copyright © 2018 刘浩然. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
const int maxn = 10000;

int main(int argc, const char * argv[]) {
    // insert code here...
    int n,q,x,a[maxn],kase = 0;
    while (scanf("%d%d",&n,&q)==2 && n) {
        printf("CASE# %d:\n",++kase);
        for(int i =0; i<n;i++) scanf("%d",a[i]);
        sort(a, a+n );  //其实地址a，终止地址a+n，从小到大排列。
        while (q--) {
            scanf("%d",&x);
            int p = lower_bound(a, a+n, x)-a; //a 到a+n里面大于等于x的第一个数的位置。
            if(a[p]==x) printf("%d found at %d\n",x,p+1);
            else printf("%d not found \n",x);
        }
    
    }
    
    std::cout << "Hello, World!\n";
    return 0;
}

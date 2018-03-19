//
//  main.c
//  arrayParameter
//
//  Created by 刘浩然 on 3/1/18.
//  Copyright © 2018 刘浩然. All rights reserved.
//

#include <stdio.h>

int sum(int*a,int n){
    int ans = 0;
    for(int i=0;i<n;i++)  //传入数组作为参数时只有首组参数进入了函数。不可以使用sizeof（）函数。没有结果。使用指针，再传入数组大小。
        ans+=a[i];
    return ans;

}

int main(int argc, const char * argv[]) {
    // insert code here...
    int a[] ={1,2,3,4};
    printf("%d\n",sum(a+1,3));
    printf("Hello, World!\n");
    return 0;
}

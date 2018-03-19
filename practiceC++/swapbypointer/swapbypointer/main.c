//
//  main.c
//  swapbypointer
//
//  Created by 刘浩然 on 3/1/18.
//  Copyright © 2018 刘浩然. All rights reserved.
//

#include <stdio.h>

void swap(int*a, int*b){
    int t=*a;
    *a = *b;
    *b=t;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int a = 3, b=4;
    swap(&a, &b);       //函数输入指针，所以参量是地址。 索引地址之后局部的函数变量反应到全局
    printf("%d %d",a,b);
    return 0;
}

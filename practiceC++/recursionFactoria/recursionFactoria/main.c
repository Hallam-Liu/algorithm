//
//  main.c
//  recursionFactoria
//
//  Created by 刘浩然 on 3/1/18.
//  Copyright © 2018 刘浩然. All rights reserved.
//

#include <stdio.h>

int f(int n){
    return n==0?1:f(n-1)*n;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("%d\n",f(3));
    printf("Hello, World!\n");
    return 0;
}

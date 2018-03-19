//
//  main.c
//  messageDecode
//
//  Created by 刘浩然 on 3/1/18.
//  Copyright © 2018 刘浩然. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int readchar(){
    for (; ; ) {
        int ch = getchar();
        if(ch!='\n' && ch!='\r') //一直读到非换行符为止
            return ch;
    }
}
// 读取c位二进制数并且转换为十进制证书。
int readint(int c){
    int v = 0;
    while(c--) v=v*2 +readchar() - '0';
    return v;
}

int code[8][1<<8];
int readcodes(){
    memset(code, 0, sizeof(code));
    code[1][0] = readchar();
    for(int len =2 ;len<=7;len++){
        for(int i =0;i<(1<<len)-1;i++){
            int ch = getchar();
            if(ch ==EOF) return 0;
            if(ch == '\n'||ch =='\r') return 1;
            code[len][i]=ch;
        }
    }
    return 1;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    while(readcodes()){
        for(;;){
            int len = readint(3);
            if(len==0) break;
            for (; ; ) {
                int v = readint(len);
                if (v==(1<<len)-1)  break;
                putchar(code[len][v]);
                
            }
        }
        putchar('\n');
    }
    printf("Hello, World!\n");
    return 0;
}
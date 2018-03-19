//
//  main.c
//  WERTYU
//
//  Created by 刘浩然 on 2/22/18.
//  Copyright © 2018 刘浩然. All rights reserved.
//

#include <stdio.h>
char s[] = "`12234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
int main(int argc, const char * argv[]) {
    // insert code here...
    int i,c;
    while((c=getchar()) != EOF){
        //getchar 读入一个字符
        for(i=1;s[i] && s[i]!= c;i++);
        //just count the i to get the position in the array s.
            if(s[i])
                putchar(s[i-1]);
            else putchar(c);
    // putchar 输出一个字符
    }
    return 0;
}

//
//  main.c
//  palindromes
//
//  Created by 刘浩然 on 2/22/18.
//  Copyright © 2018 刘浩然. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>
const char *rev = "A   3  HIL JM O   2TUVWXY51SE Z  8";
const char * msg[] = {"not a palindrome","a regular palindrome", "a mirrored string","a mirrored palindrome"};
char r(char ch){
    if (isalpha(ch)) return rev[ch-'A'];
    // 是字母的话返回在rev数组中的位置
    return rev[ch-'0'+25]; //数字的话返回在rev数组中的位置
    
}
int main(int argc, const char * argv[]) {
    // insert code here...
    char s[30];
    while(scanf("%s",s) == 1)
        {
            int len= strlen(s);
            int p = 1, m = 1;
            for(int i = 0; i < (len+1)/2; i++)
                {
                    if(s[i] != s[len-1-i]) p=0; // not a palindrome
                    if(r(s[i]) != s[len-1-i]) m=0; // not a mirrored string
                    
                }
            printf("%s -- is %s.\n\n",s,msg[m*2+p]);
        }
    //printf("Hello, World!\n");
    return 0;
}

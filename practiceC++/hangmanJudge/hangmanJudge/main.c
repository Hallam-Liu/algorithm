//
//  main.c
//  hangmanJudge
//
//  Created by 刘浩然 on 3/1/18.
//  Copyright © 2018 刘浩然. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define maxn 100
int left, chance;
char s[maxn], s2[maxn];
int win, lose;
void guess(char ch,j){
    int bad = 1;
    //for (int i = 0; i<strlen(s); i++) {
        if(s[j]==ch){
            left--;
            s[j]=' ';
            bad =0;
        }
        if (bad)  chance--;
        if(!chance) lose=1;
        if(!left) win = 1;
    //}
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int rnd;
    while(scanf("%d%s%s",&rnd,s,s2)==3 && rnd!=-1 ){
        printf("Round %d\n",rnd);
        win=lose=0;
        left = strlen(s);
        chance = 7;
        for (int i=0; i<strlen(s2); i++) {
            guess(s2[i],i);
            if(win||lose) break;
        }
        if(win) printf("You win.\n");
        else if(lose) printf("You lose.\n");
        else printf("you chickened out.\n");
    }
    //printf("Hello, World!\n");
    return 0;
}

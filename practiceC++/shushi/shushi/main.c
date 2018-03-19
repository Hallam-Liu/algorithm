//
//  main.c
//  shushi
//
//  Created by 刘浩然 on 2/22/18.
//  Copyright © 2018 刘浩然. All rights reserved.
//
//所有三位数乘两位数的竖式过程与结果中使用的数字，都在输入的数字集合中

#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    int count = 0;
    char s[20], buf[99];
    scanf("%s",s);
    for(int abc = 111; abc<=999;abc++)
        for(int de = 11; de<=99; de++)
        {
            int x = abc*(de%10),y = abc*(de/10), z = abc*de;
            sprintf(buf,"%d%d%d%d%d",abc,de,x,y,z);
            //找出所有三位数乘两位数结果，输出到字符串buf中。
            int ok=1;
            for(int i =0; i< strlen(buf);i++)
                if (strchr(s,buf[i]) == NULL ) ok =0;
            //查看数组buf中的元素是不是在s中。有不在的话ok = 0；
            if(ok)
            {
                printf("<%d>\n",++count);
                printf("%5d\nX%4d\n=----\n%5d\n%4d\n-----\n%5d\n\n",abc,de,x,y,z);
            }
            
        }
    printf("The number of solutions = %d",count);
    return 0;
}

//
//  main.cpp
//  Rails
//
//  Created by 刘浩然 on 2/23/18.
//  Copyright © 2018 刘浩然. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <stack>
using namespace std;
const int MAXN = 1000+10;
int n,target[MAXN];

int main(int argc, const char * argv[]) {
    // insert code here...
    while(scanf("%d",&n)==1){
        stack<int> s;
        int A = 1, B = 1;
        for(int i = 1; i <=n; i++)
            scanf("%d", &target[i]);
        int ok = 1;
        while(B<=n){
            if(A==target[B]){A++;B++;}
            else if (!s.empty() && s.top() == target[B]){s.pop(); B++;}
            else if (A<=n ) s.push(A++);
            else { ok = 0;break;}
        }
        printf("%s\n",ok? "Yes":"NO");
        
    }
    return 0;
}

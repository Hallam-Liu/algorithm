//
//  main.cpp
//  beautiful_day
//
//  Created by 刘浩然 on 4/6/18.
//  Copyright © 2018 刘浩然. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;
bool isOk(int x, int mod) {
    int n = x;
    int m = 0;
    //求 n 的reverse 的方法
    while (x > 0) {
        m = m * 10 + x % 10;
        x /= 10;
    }
    int delta = abs(n - m);
    delta %= mod;
    return (delta == 0);
}

int main() {
    int l, r, k;
    cin >> l >> r >> k;
    int ans = 0;
    for (int i = l; i <= r; i++) {
        if (isOk(i, k)) {
            ++ans;
        }
    }
    cout << ans << endl;
    return 0;
}
// int beautifulDays(int i, int j, int k) {
// Complete this function
// int count=0;
// for(int a=i;a<=j;a++){
//     int b=0;
//     int record =0;
//     while(a>=pow(10,b)){
//         b++;
//     }
//     for(int m=b-1;m>=0;m--){
//         record =record+(a/pow(10,m))*pow(10,(b-1-m));
//         //a=fmod(a,pow(10,m));
//         //printf("ll%d--%d\n",a,record);
//     }
//     if(abs(a-record)%k==0)
//         count++;
//     else if(a==record)
//         count++;
//    // printf("%d--%d--%d-%d\n",a,count,record,b);
// }
// return count;

// }

// int main() {
//     int i;
//     int j;
//     int k;
//     cin >> i >> j >> k;
//     int result = beautifulDays(i, j, k);
//     cout << result << endl;
//     return 0;
// }



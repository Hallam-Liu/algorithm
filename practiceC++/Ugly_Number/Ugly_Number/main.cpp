//
//  main.cpp
//  Ugly_Number
//
//  Created by 刘浩然 on 3/13/18.
//  Copyright © 2018 刘浩然. All rights reserved.
//
#include <vector>
#include <queue>
#include <set>
#include <iostream>
using namespace std;
typedef long long LL;
const int coeff[3] = {2,3,5};

int main(int argc, const char * argv[]) {
    priority_queue<LL,vector<LL>,greater<LL>> pq; // 优先队列，从小到大。
    set<LL> s;
    pq.push(1);
    s.insert(1);
    for (int i =1; ; i++) {
        LL x = pq.top();
        pq.pop();
        if(i==1500) {
        cout <<"the 1500'th ugly number is "<< x<<"\n";
            break;
        }
        for(int j = 0;j<3 ;j++){
            LL x2 = x*coeff[j];  //第一个丑数是1， 丑数乘以2，3，5 也是丑数。
            if(!s.count(x2)){
                s.insert(x2);
                pq.push(x2);
            }
        }
    }
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

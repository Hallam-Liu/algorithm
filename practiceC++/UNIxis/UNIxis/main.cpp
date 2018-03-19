//
//  main.cpp
//  UNIxis
//
//  Created by 刘浩然 on 3/13/18.
//  Copyright © 2018 刘浩然. All rights reserved.
//
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;
const int maxcol = 60;
const int maxn = 100+5;
string filename[maxn];

//输出字符串s，长度不足len时补字符extra
void print(const string&s, int len, char extra){
    cout <<s;
    for(int i=0;i<len-s.length();i++)
        cout<<extra;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    while (cin>>n) {
        int M =0;
        for(int i =0;i<n;i++){
            cin >>filename[i];
            M=max(M,(int)filename[i].length());
        }
    
    //计算列数cols和行数rows
    int cols =(maxcol - M)/(M+2) +1, rows = (n-1)/(cols+1);
    print("", 60, '-');
        cout << "\n";
        sort(filename, filename+n );
        for(int r =0; r<rows;r++){
            for(int c=0;c<cols;c++){
                int idx = c*rows+r;
                if(idx<n)
                    print(filename[idx], c==cols-1?M:M+2, ' ');
                
            }
            cout << "\n";
        }
    }
    std::cout << "Hello, World!\n";
    return 0;
}

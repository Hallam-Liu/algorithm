//
//  main.cpp
//  block
//
//  Created by 刘浩然 on 3/12/18.
//  Copyright © 2018 刘浩然. All rights reserved.
//
#include <cstdio>
#include <string>
#include <vector>
#include <iostream>
using namespace std;
const int maxn =30;
int n;
vector<int> pile[maxn]; // 每个pile 是一个vector;
//找到木块a
void find_block(int a, int &p, int &h){
    for (p =0; p<n; p++)
        for(h=0;h<n;h++)
            if(pile[p][h] == a) return;
    
}
//把p堆高度为h的木块上方所有木块全部移回原位。
void clear_block(int p , int h){
    for (int i = h+1; i<pile[p].size(); i++) {
        int b = pile[p][i];
        pile[b].push_back(b);
    }
    pile[p].resize(h+1);
}

void pile_onto(int p, int h, int p2){
    for (int i =h; i<pile[p].size(); i++)
        pile[p2].push_back(pile[p][i]);
    pile[p].resize(h);
    
}

void print(){
    for (int i=0; i<n; i++) {
        printf("%d:",i);
        for (int j=0; j<pile[i].size(); j++) {
            printf("%d",pile[i][j]);
        }
        printf("\n");
    }

}

int main(int argc, const char * argv[]) {
    // insert code here...
    int a,b;
    cin >> n;
    string s1,s2;
    for (int i=0; i<n; i++) {
        pile[i].push_back(i);
    }
    while (cin>>s1>>a>>s2>>b) {
        int pa,pb,ha,hb;
        find_block(a, pa, ha);
        find_block(b, pb, hb);
        if (pa==pb) {
            continue;
        }
        if(s2=="onto") clear_block(pb, hb);
        if(s1=="move") clear_block(pa, ha);
        pile_onto(pa, ha, pb);
    }
    print();
    
    std::cout << "Hello, World!\n";
    return 0;
}








//
//  main.cpp
//  stringcombine
//
//  Created by 刘浩然 on 3/27/18.
//  Copyright © 2018 刘浩然. All rights reserved.
//


#include <cstdio>
#include <iostream>
#include <sstream>
using namespace std;
ostringstream oss;
string solve(int year){
    // Complete this function
    string result;
    string str1="12.09.";
    string str2="13.09.";
    string str3="26.09.";
    if (year<1918){
        if(year%4==0){
            oss<<str1<<year<<endl;
            result = oss.str();
        }
        else{
            oss<<str2<<year<<endl;
            result = oss.str();
        }
    }
    else if(year==1918){
        result="26.09.1918";
    }
    else {
        if (year%4==0){
            if(year%100!=0){
                oss<<str1<<year<<endl;
                result = oss.str();}
            else if(year%400==0){
                oss<<str1<<year<<endl;
                result = oss.str();
            }
            else {
                oss<<str2<<year<<endl;
                result = oss.str();
            }
        }
        else {
            oss<<str2<<year<<endl;
            result = oss.str();
        }
    }
    return result;
}

int main() {
    int year;
    cin >> year;
    string result = solve(year);
    cout << result << endl;
    return 0;
}



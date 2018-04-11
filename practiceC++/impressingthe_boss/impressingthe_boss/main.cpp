//
//  main.cpp
//  impressingthe_boss
//
//  Created by 刘浩然 on 4/2/18.
//  Copyright © 2018 刘浩然. All rights reserved.
//
#include <stdlib.h>
#include <vector>
#include <iostream>
#include <sstream>
#include <cstring>
#include <string>
using namespace std;


vector<string> split_string(string);

/*
 * Complete the canModify function below.
 */
string canModify(vector<int> a) {
    /*
     * Write your code here.
     */
    int count =0;
    for(int i=0;i<a.size();i++){
        if (a[i]>a[i+1]){
            count++;
            
            if(a[i]>a[i+2])
                return "NO";
        }
        if(i==a.size()-2){
            if(count<=1) return "YES";
            else return "NO";
        }
    }
    return 0;
}

int main()
{
    //ofstream fout(getenv("OUTPUT_PATH"));
    
    int n;
    cin >> n;
    while(n--){
        int Number;
        cin >> Number;
        int ele;
        vector<int>a(Number);
        for(int i=0;i<a.size();i++){
            cin>>ele;
            a.push_back(ele);
        }
        string result = canModify(a);
        cout << result <<'\n';
        
    }
    //cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    //string a_temp_temp;
    //getline(cin, a_temp_temp);
    
    //vector<string> a_temp = split_string(a_temp_temp);
    /*
     vector<int> a(n);
     
     for (int a_itr = 0; a_itr < n; a_itr++) {
     int a_item = stoi(a_temp[a_itr]);
     
     a[a_itr] = a_item;
     }
     
     string result = canModify(a);
     
     fout << result << "\n";
     
     fout.close();
     */
    return 0;
}

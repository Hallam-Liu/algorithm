//
//  main.cpp
//  birdimmigration
//
//  Created by 刘浩然 on 3/24/18.
//  Copyright © 2018 刘浩然. All rights reserved.
//

#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int migratoryBirds(int n, vector <int> ar) {
    // Complete this function
    int array[n];
    int max=0;
    int result;
    vector<int>number;
    int numberOfEle=1;
    //memset(array,1,sizeof(array));
    sort(ar.begin(),ar.end());
    for(int i=0;i<n;i++){
        
        if(ar[i]==ar[i+1])
            numberOfEle++;
        else {
            if(max<numberOfEle){
                max=numberOfEle;
                result= ar[i];
            }
            numberOfEle=1;
        }
        //for(int j=i+1;j<n;j++){
        //    if(ar[i]==ar[j])
        //        array[i]++;
    }
    /*
     for(int i=0;i<n;i++){
     if(max<array[i])
     max=array[i];
     }
     
     for(int i=0;i<n;i++){
     if(array[i]==max)
     number.push_back(ar[i]);
     //number.push_back(i);
     }
     sort(number.begin(),number.end());
     return number[0];
     */
    /*
     int min =10;
     for(int i=0;i<number.size();i++){
     if (min>ar[number[i]])
     min =ar[number[i]];
     }
     int result=0;
     for(int i=0;i<n;i++){
     if(ar[i]==min)
     result = ar[i];
     }
     */
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
        cin >> ar[ar_i];
    }
    int result = migratoryBirds(n, ar);
    cout << result << endl;
    return 0;
}


//
//  main.cpp
//  inputvector
//
//  Created by 刘浩然 on 3/27/18.
//  Copyright © 2018 刘浩然. All rights reserved.
//

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    
    int n,k;
    int b;
    int charge;
    int sum =0;
    
    cin>>n;
    cin>>k;
    // vector<int> ar(n);
    // for(int ar_i = 0; ar_i < n; ar_i++){
    //    cin >> ar[ar_i];
    // }
    vector<int> price(n);
    for(int j=0;j<n;j++){
        cin >> price[j];
    }
    cin >> b;
    
    for(int i=0;i<n;i++){
        //if(i!=k){
        sum=sum+price[i];
        //}
        // charge = b-sum/2;
        //cout<<charge<<endl;
    }
    sum=sum-price[k];
    charge = b-sum/2;
    if(charge>0)
        cout<<charge;
    else
        cout<<"Bon Appetit";
    
    
    return 0;
}



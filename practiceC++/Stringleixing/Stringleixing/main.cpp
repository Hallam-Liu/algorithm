//
//  main.cpp
//  Stringleixing
//
//  Created by 刘浩然 on 3/5/18.
//  Copyright © 2018 刘浩然. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>
using namespace std;



int main(int argc, const char * argv[]) {
    string line;
    while (getline(cin, line)) {
        int sum =0,x;
        stringstream ss(line);
        while (ss>>x) sum+=x;
            cout<< sum << "\n";
        
    }
    cout << "Hello, World!\n";
    return 0;
}

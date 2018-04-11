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
int deleteNumber=0;
vector<char> OnlyA;
vector<char> ONlyB;
int number_needed(string a, string b) {
    int lenthA= a.length();
    int lenthB =b.length();
    int flag;
    
    for(int i =lenthA-1; i>=0;i--){
        flag=0;
        
        for(int j =lenthB-1; j>=0;j--){
            if (a[i]==b[j])
                flag =1;
        }
        if (flag==0){
            a.erase(i,1);
            deleteNumber++;
        }
    }
    for(int i =lenthB-1; i>=0;i--){
        flag=0;
        for(int j =lenthA-1; j>=0;j--){
            if (b[i]==a[j])
                flag =1;
        }
        if (flag==0){
            b.erase(i,1);
            deleteNumber++;
        }
    }
    
    
    lenthA= a.length();
    lenthB =b.length();
    //cout<<lenthA<<lenthB<<endl;
    for(int i =lenthA-1; i>=0;i--){
        for(int j =lenthB-1; j>=0;j--){
            if (a[i]==b[j]){
                a.erase(i,1);
                b.erase(j,1);
                break;
            }
        }
    }
    lenthA= a.length();
    lenthB =b.length();
    //cout<<lenthA<<lenthB<<endl;
    deleteNumber+= lenthA;
    deleteNumber+= lenthB;
    
    return deleteNumber;
}

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}


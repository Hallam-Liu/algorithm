//
//  main.cpp
//  sumC++
//
//  Created by 刘浩然 on 3/5/18.
//  Copyright © 2018 刘浩然. All rights reserved.
//

#include <iostream>
using namespace std;

struct Point{
    int x,y;
    Point(int x=0,int y=0):x(x),y(y){}
};
//定义结构体的加法
Point operator + (const Point& A, const Point& B){
    return Point(A.x+B.x,A.y+B.y);
}
//定义结构体的流输出方式
ostream& operator <<(ostream &out,const Point& p){
    out <<"("<<p.x<<","<<p.y<<")";
    return out;
}


int sum(int* begin,int* end){
    int *p =begin;
    int ans = 0;
    for(int *p=begin; p!=end;p++)
        ans +=*p;
    return  ans;

}

template <typename T>
T sum(T* begin,T* end)  {
    T *p = begin;
    T ans = 0;
    for(T *p=begin ; p != end;p++)
        ans = ans+*p;
    return ans;
}

int main(int argc, const char * argv[]) {
    double a[]= {1.1,2.2,3.3,4.4};
    // insert code here...
    cout<< sum(a,a+4)<<"\n";
    Point b[] = {Point(1,2),Point(3,4),Point(5,6),Point(7,8)};
    cout<<sum(b,b+4)<<"\n";
    cout << "Hello, World!\n";
    return 0;
}

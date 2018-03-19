//
//  main.cpp
//  timeconversion
//
//  Created by 刘浩然 on 3/18/18.
//  Copyright © 2018 刘浩然. All rights reserved.
//
/*
 Given a time in 12-hour AM/PM format, convert it to military (24-hour) time.
 
 Note: Midnight is 12:00:00AM on a 12-hour clock, and 00:00:00 on a 24-hour clock. Noon is 12:00:00PM on a 12-hour clock, and 12:00:00 on a 24-hour clock.
 
 Complete the timeConversion function which takes 1 argument, a string s and returns a string denoting the 24-hr formatted time.
 
 
 A single string s containing a time in -hour clock format (i.e.:hh:mm:ssAM or hh:mm:ssPM ), where  and
 */

#include <iostream>
#include<cstdio>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int n = s.length();
    int hh, mm, ss;
    hh = (s[0] - '0') * 10 + (s[1] - '0');
    mm = (s[3] - '0') * 10 + (s[4] - '0');
    ss = (s[6] - '0') * 10 + (s[7] - '0');
    
    if (hh < 12 && s[8] == 'P') hh += 12;
    if (hh == 12 && s[8] == 'A') hh = 0;
    
    printf("%02d:%02d:%02d\n", hh, mm, ss);
    
    return 0;
}

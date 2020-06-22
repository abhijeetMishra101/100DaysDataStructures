//
//  main.cpp
//  GeeksForGeeks
//
//  Created by Abhijeet Mishra on 22/06/20.
//  Copyright © 2020 Abhijeet Mishra. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

void reverse(string &s) {
    int start=0, end= (int)s.length()-1;
    while(start<end){
        char temp=s[start];
        s[start]=s[end];
        s[end]=temp;
        start++;
        end--;
    }
}


int main(int argc, const char * argv[]) {
   
    string s= "qwerty";
    reverse(s);
    cout << s;
    
    return 0;
}

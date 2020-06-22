//
//  LeftRotateArray.cpp
//  GeeksForGeeks
//
//  Created by Abhijeet Mishra on 22/06/20.
//  Copyright © 2020 Abhijeet Mishra. All rights reserved.
//

#include <iostream>
using namespace std;


void reverse(int A[], int start, int end){
    while(start<end){
        int temp=A[start];
        A[start]=A[end];
        A[end]=temp;
        start++;
        end--;
    }
}

void leftRotated(int A[], int n, int k){
    //first reverse the first k numbers
     reverse(A, 0, k-1);
    // //then reverse then k+1 to n numbers
     reverse(A, k, n-1);
    // //at last reverse the entire array
     reverse(A, 0, n-1);
    
    for(int i=0; i<n; i++){
        cout << A[i] << " ";
    }
    cout << endl;
}

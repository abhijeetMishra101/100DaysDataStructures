//
//  RemoveDuplicatesFromSortedArray.cpp
//  GeeksForGeeks
//
//  Created by Abhijeet Mishra on 22/06/20.
//  Copyright © 2020 Abhijeet Mishra. All rights reserved.
//

#include <stdio.h>
using namespace std;

int removeDuplicatesFromSortedArray(int A[], int n){
    if (n==0||n==1) {
        return n;
    }
    int res=1;
    for (int i=1; i<n; i++) {
        if (A[res-1]!=A[i]) {
            A[res]=A[i];
            res++;
        }
    }
    return res;
}

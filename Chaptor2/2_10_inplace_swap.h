/*************************************************************************
	> File Name: 2.10_inplace_swap.h
	> Author: 
	> Mail: 
	> Created Time: Fri 02 Dec 2022 02:49:49 PM CST
 ************************************************************************/

#ifndef _2_10_INPLACE_SWAP_H
#define _2_10_INPLACE_SWAP_H

void inplace_swap(int *x, int *y) {
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
    return;
}

void reverse_array(int *a, int cnt) {
    for(int first = 0, last = cnt - 1; first < last; first++, last--) {
        inplace_swap(a + first, a + last);
    }
    return;
}

#endif

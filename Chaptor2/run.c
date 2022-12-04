/*************************************************************************
	> File Name: run.c
	> Author: 
	> Mail: 
	> Created Time: Fri 02 Dec 2022 02:50:29 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include "../debug.h"



int main() {
#ifdef D213
#include "2_1_3_BytePointer.h"
    int val = 12345;
    scanf("%d", &val);
    test_show_bytes(val);
#endif 

#ifdef D210
#include "2_10_inplace_swap.h"
    int cnt = 0;
    int *p_array = NULL;
    scanf("%d", &cnt);

    p_array = getRandomval(cnt);
    output(p_array, cnt);
    reverse_array(p_array, cnt);
    output(p_array, cnt);
#endif

#ifdef D212
    int x = 0x87654321;
    printf("%x\n", x & 0xFF);
    printf("%x\n", x ^ ~x);
    printf("%x\n", x | 0xFF);
#endif
    return 0;
}


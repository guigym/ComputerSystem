/*************************************************************************
	> File Name: 2.1.3_BytePointer.h
	> Author: 
	> Mail: 
	> Created Time: Fri 02 Dec 2022 02:48:53 PM CST
 ************************************************************************/

#ifndef _2_1_3_BYTEPOINTER_H
#define _2_1_3_BYTEPOINTER_H

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
    SPLIT_LINE;
    for(int i = 0; i < len; ++i) {
        printf("0x%.2x,", start[i]);
    }
    printf("\n");
    return;
}

void show_int(int x) {
    show_bytes((byte_pointer) &x, sizeof(int)) ;
    return;
}

void show_float(float x) {
    show_bytes((byte_pointer) &x, sizeof(float)) ;
    return;
}

void show_pointer(void *x) {
    show_bytes((byte_pointer) &x, sizeof(void*)) ;
    return;
}

void test_show_bytes(int val) {
    int ival = val;
    float fval = (float) val;
    int *pval = &ival;
    show_int(ival);
    show_float(fval);
    show_pointer(pval);


    const char* s = "abcdef";
    show_bytes((byte_pointer)s, strlen(s));
    return;
}

#endif

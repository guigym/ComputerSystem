/*************************************************************************
	> File Name: debug.c
	> Author: 
	> Mail: 
	> Created Time: Fri 02 Dec 2022 02:11:16 PM CST
 ************************************************************************/

#include "debug.h"
#include<stdlib.h>
#include<time.h>
#include<string.h>

int* getRandomval(const int cnt) {
    int* p = (int*) malloc(sizeof(int) * cnt);
    memset(p, 0, sizeof(int) * cnt);
    srandom(time(0)) ;
    for(int i = 0; i < cnt; i++) {
        p[i] = random() % MAX_N;
    }
    return p;
}

void output(const int* p, const int cnt) {
    for(int i = 0; i < cnt - 1; i++) printf("==");
    printf("==\n");
    for(int i = 0; i < cnt - 1; i++) printf("%d,", p[i]);
    printf("%d\n", p[cnt - 1]);
    return;
}


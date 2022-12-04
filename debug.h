/*************************************************************************
	> File Name: debug.h
	> Author: 
	> Mail: 
	> Created Time: Fri 02 Dec 2022 02:11:49 PM CST
 ************************************************************************/

#ifndef _DEBUG_H
#define _DEBUG_H

#include<stdio.h>

#define MAX_N 100000
#define SPLIT_LINE  for(int i = 0; i < 10; i++) printf("=");\
        printf("\n")

int *getRandomval(const int cnt);
void output(const int*p, const int cnt);

#endif

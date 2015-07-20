//
//  main.c
//  screw_work
//
//  Created by qianfeng on 15-7-18.
//  Copyright (c) 2015年 gzc. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int size;
    scanf("%d",&size);
    int num[size][size];
    int count = 1;
    int j = 0;
    int k = 0;
    int i = 0;
    for (; i < size / 2 ; i++) {
        k = i;
        for ( j = i ; j < size - 1 - i; j ++) {
           num[k][j] = count ++;
        }
        for ( k = i; k < size - 1 - i; k ++) {
           num[k][j] = count ++;
        }
        for (; j > i; j--) {
            num[k][j] = count ++;
        }
        for (; k > i; k--) {
             num[k][j] = count ++;
        }
    }
    if (size % 2 == 1) {
        num[size / 2][size / 2] = size * size;
    }
    for (int i = 0; i < size; i ++) {
        for (int j = 0; j < size; j ++) {
            printf("%4d",num[i][j]);
        }
        printf("\n");
    }
    return 0;
}

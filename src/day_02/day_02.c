//
// Created by 李清栋 on 2021/10/30.
//

#include "stdio.h"

int day02(){
    int arr[5] = {0};
    arr[0] = 1;
    for (int i = 0; i < 5; ++i) {
        arr[i] = i;
    }
    printf("%d\n",*(arr+1));
    return 0;
}

int day03(){
    char *str = "helloworld";
    printf("%s",str);
}


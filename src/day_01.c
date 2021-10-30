//
// Created by 李清栋 on 2021/10/30.
//
#include <stdio.h>

void swap(int* a,int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void getEle(int *e){
    *e = 10;

}

int main() {
    int a = 4;
    int b = 8;
    swap(&a,&b);
    printf("%d\n",a);
    printf("%d\n",b);
    int c= 20;
    getEle(&c);
    printf("%d\n",c);
    int d = 15,*p;
    p = &d;
    printf("%p\n",p);//0x7ffee0be78fc  一个整数占四个内存空间
    d = *p++;
    printf("%p\n",p);//0x7ffee0be7900
    printf("%d\n",d);
    return 0;
}


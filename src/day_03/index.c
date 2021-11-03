//
// Created by 李清栋 on 2021/11/1.
//
#include "stdio.h"

void day03(){
    struct student{
        char name[20];
        int age;
    } stu1={"jack1",19},*stu2;
    stu2 = &stu1;
    printf("%s",stu2->name);
}


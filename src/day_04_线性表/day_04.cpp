//
// Created by 李清栋 on 2021/11/2.
//

#include <cstdio>
#define  MAX_SiZE 100;

typedef  int EleType;

enum Status{
    OK = 0,
    Error = 1,
    Overflow = 2,
};


typedef struct {
    EleType *eleP;
    int length;
} SqlList;

Status initList(SqlList &L){
    L.eleP = new EleType[100];
    if(!L.eleP) {
        return Error;
    }

    L.length = 0;
    return OK;
}

Status getEle(SqlList L,int index,EleType &e){
    if(index-1<0||index>L.length) return Error;
    e = L.eleP[index-1];
    return OK;
}
/*************************************************************
 * Copyright (C) 2018 Jackson <Jackson.wr@qq.com>
 * Date:   2018-02-22 15:24
 *************************************************************/
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void foo(char* p){
    memcpy(p, "0123456789abcdef", 10);
    char *tmp = new char[10];
}
int  main(){

    char* p = new char[10];
    foo(p);
    int c = getchar();
    delete []p;
    return 0;
}

/*
 *‰p”š‚Ì’·‚³‚ğ’²‚×‚é
 *
 *copyright(c) 2018-2019 todokuro.
 *-------------------------
 *kchange historyl
 *2018/2/26 todokuro CreateNew
 *-------------------------
 *kcommentl
 *This is a computer program test.
 */

#include <stdio.h>

int func(const char str[])
{
    int len = 0;
    while(str[len] != '\0'){
        len++;
    }
    return(len);
}

/* entry point */
int main(void){
    int count;
    char test_ary[128] = "AbCd";
    count = func(test_ary);
    printf("%d", count);
    return(0);
}
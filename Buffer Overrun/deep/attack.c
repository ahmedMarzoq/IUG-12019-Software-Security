#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
 char buf2[16] = "overwriteme";
    char buf1[16] = "";
    strcpy(buf2,"12345678901234564331234567890123456433");
    printf("buf1 val: %s\n",buf1);
    printf("buf2 val: %s\n",buf2);
    printf("buf1 add: %p\n",(void *)buf1);
    printf("buf2 add: %p\n",(void *)buf2);
}
#include <string.h>
#include <stdio.h>

int     main(void)
{
    char buf[1000];

    /* this is a comment */
    strcpy(buf, "hello, world!");
    printf("%s\n", buf);
    return 0;
}

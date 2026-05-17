#include <stdio.h>
#include "function.h"


int main()
{

    int words;
    Signal status;
    printf("what is status: ");
    scanf("%d", &words);
    
    status = words;
    enums_status(status);
       
    return 0;
}

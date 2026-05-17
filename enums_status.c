#include <stdio.h>
#include "function.h"

void enums_status(Signal status)
{

    switch (status){
        case SUCCESS:
            printf("successfuly connected\n");
            break;
        case FAILURE:
            printf("failed to connect\n");
            break;
        case PENDING:
            printf("connecting, please hold.......\n");
            break;
        default :
            printf("WRONG TYPE");
    }
   
}

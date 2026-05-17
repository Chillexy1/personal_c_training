#include <stdio.h>

int main() {
    
    int hour = 12;
    int mins = 30;
    char *time = (hour >= 12) ? "PM": "AM";
    
    printf("%d:%d is %s",hour,mins,time );
   
}

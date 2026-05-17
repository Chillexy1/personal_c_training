#ifndef FUNCTION_H
#define FUNCTION_H

#define bool

#include <stdbool.h>

void happybirthday(char name[], int age);
int computer_choice( void );
int user_choice(void);
void compare_choice(int user_choice, int computer_choice);
void checkbalance(float balance);
float deposit(void);
float withdraw(float balance);
typedef enum{
    SUCCESS,
    FAILURE, 
    PENDING

}Signal;

void enums_status(Signal status);

typedef struct{
    char name[50];
    int age;
    float gpa;
    bool ISFULLTIME;
}Student;

typedef struct{
    char car_model[50];
    int year;
    float car_prize;

}Cars;

#endif

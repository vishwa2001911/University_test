/*
Write a program to prompt the user to input number of workers, rate per hour, worker ID,
hours worked to compute the gross pay of a worker for a week. Pay should be the normal rate
for hours up to 48 and double for the hourly rate for all hours worked above 48 hours.
Design a function called computePay() to do the computation of pay and returns the value.
Inputs should be positive numbers, otherwise the program should display an error message.
After weekly pay is calculated, the worker ID and the amount need to be paid should be
written to a Text file.
*/
#include <stdio.h>

float computePay(int hours, float hoursRate);

int main() {
    int num;
    int hours;
    
    float hourRate;
    char id[10]="";
    
    printf("input numbers of workers :-");
    scanf("%d", &num);
    
    printf("input numbers of Hours :-");
    scanf("%d", &hours);
    
    printf("Input hour rate :-");
    scanf("%f",&hourRate);
    
    printf("Input worker ID :-");
    scanf("%s", id);
    
    if(num >=0 || hours >=0 ||  hourRate >= 0 || id != ""){
        printf(" worker ID :- %s \namount need to be paid :- %f \n",id,computePay(hours,hourRate));    
    }else{
        printf("Error !!! ");
    }

    return 0;
}


float computePay(int hours,float hoursRate) {
    float payment;
    int x;
    if( hours > 48 ){
        x = hours - 48;
        payment = (hoursRate*48)+(x*(hoursRate*2));
    }else{
        payment = hoursRate*48;
    }
    return payment;
}

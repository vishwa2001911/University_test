#include <stdio.h>

int addition(int num1,int num2);
int multiplication(int num1,int num2);
void mySwap(int *a,int *b);

void main(){
    
    int sum,product,num1,num2;
    
    num1 = 4;
    num2 = 5;
    
    sum = addition(num1,num2);
    product = multiplication(num1,num2);
    
    printf("multiplication of the number 1 and number 2 :- %d \n", product);
    printf("sum of the number 1 and number 2 :- %d \n", sum);
    
    mySwap(&sum,&product);
    
    printf("multiplication of the number 1 and number 2 :- %d \n", product);
    printf("sum of the number 1 and number 2 :- %d \n", sum);
      
}

int addition(int num1,int num2){
    int s =num1+num2;
    return s;
}

int multiplication(int num1,int num2){
    int multiplication1=  num1*num2; 
    return multiplication1;
}

void mySwap(int *a,int *b){
    int T;
    T = *a;
    *a = *b;
    *b = T;
}

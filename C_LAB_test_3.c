// not compleate

#include <stdio.h>

int addition(int num1,int num2);
int multiplication(int num1,int num2);
int mySwap(int sum,int product);


void main(){
    
    int sum,product,num1,num2;
    
    num1 = 4;
    num2 = 5;
    
    sum = addition(num1,num2);
    product = multiplication(num1,num2);
    
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

int mySwap(int sum,int product){
    int *pSum = &sum;
    int *pProduct = &product;
    
    printf("multiplication of the number 1 and number 2 :- %d \n", pSum);
    printf("sum of the number 1 and number 2 :- %d \n", pProduct);
    
    return 0;
    
}

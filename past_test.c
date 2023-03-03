#include <stdio.h>

int sqare(int a);
int thrice(int a);
int sum(int *a,int *b);
float product(int *a,int *b);
int different(int *a, int *b);

void main(){
    int num1,num2;
    int num3;
    int num4;
    
    printf("Input your 1st number :- ");
    scanf("%d",&num1);
    
    printf("Input your 2nd number :- ");
    scanf("%d",&num2);
    
    
    
    if(num1<10 || num2<10){
        printf("\nnumbers are grater than 10 \n");
    }
    
    if(num1>=num2){
        num3 = sqare(num1);
        printf("num3 value is %d \n",num3);
        
        num4 = thrice(num2);
        printf("num4 value is %d \n",num4);
        
        printf("\n\nsum is %d \n",sum(&num1,&num3));
        printf("product is %f \n",product(&num1,&num3));
        printf("different is %d \n",different(&num1,&num3));
    }
    
    
}

int sqare(int a){
    int k;
    k = a*a;
    return k;
}

int thrice(int a){
    int k;
    k = a*a*a;
    return k;
}

int sum(int *a,int *b) {
    int k,t;
    k = *a;
    *a=*b;
    t = *a+k;
    return t;
}

float product(int *a,int *b){
    int k,t;
    k = *a;
    *a=*b;
    t = *a/k;
    return t;
}

int different(int *a, int *b){
    int k,t;
    k = *a;
    *a=*b;
    t = *a-k;
    return t;
    
}

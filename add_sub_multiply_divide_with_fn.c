#include<stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b){
    return a - b;
}

int multiply(int a, int b){
    return a * b;
}

int divide(int a, int b){
    if b == 0{
        printf("sorry denominator cant be zero");
        return 0;
    }
    else{
        return int a / int b;
    }
}

int main(){
    int a = 20;
    int b = 10;
    printf("Addition: %d\n", add(a, b));
    printf("Substraction: %d\n", subtract(a, b));
    printf("Multiplication: %d\n", multiply(a, b));
    printf("Division:%d\n", divide(a, b));

    return 0;
}
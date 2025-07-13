#include<stdio.h>




struct structure {
    char c[14];
    char a[12];
    int k;
    char r;
};
int main() {
    printf("Cars Models Launch Year Grade: \n");
    struct structure s1 = {"Volvo",    "X5 model", 2005, 'A'};
    struct structure s2 = {"Mercedes", "GLA",      2012, 'B'};
    struct structure s3 = {"Swift",    "Desire",   2017, 'B'};
    struct structure s4 = {"Aston Martin", "b33",  2018, 'A'};


printf("%s %s %d %c\n\n", s1.c, s1.a, s1.k, s1.r );
printf("%s %s %d %c\n\n", s2.c, s2.a, s2.k, s2.r );
printf("%s %s %d %c\n\n", s3.c, s3.a, s3.k, s3.r );
printf("%s %s %d %c\n\n", s4.c, s4.a, s4.k, s4.r );

   return 0;
}
// int x = 0;
// int y = 1;
// int z;
// printf("%d\n", x);
// printf("%d\n", y);

// for (int new=0; new < 18; new++) {

//     z = x + y;
//     printf("%d\n", z);
//     x = y;
//     y = z;
    
// }
// return 0;













// int sum(int k);
// int main () {
//     int integer = sum(10);
//     printf("%d\n", integer);
//     return 0;
// }
// int sum(int k) {
//     if(k>0) {
//         return k + sum(k-1);
//     } else {
//         return 0;
//     }
// }


















// int function(int num[10]) {
//     for(int i=0; i<7; i++) {
//         printf("%d\n", num[i]);
        
//     }
// }
// int main() {

//     int num[10] = {10, 34, 345, 4, 43, 56, 55};
//     function(num);
    
//     return 0;
// }
#include<stdio.h>
int main() {


// int num[] = {23, 34, 35, 45};
// int len = sizeof(num)/sizeof(num[0]);
// int i;
// for(i=0; i<4; i++) {
//     printf("%d\n", num[i]);
// }




// int mat[2][3] = { {2 ,3 ,4}, {7,9,1}};
// printf("%d\n", mat[1][2]);



  


  // char message[] = "Good to see you,";
  // char fname[] = "John!";

  // printf("%s %s!", message, fname);
 

 


// insertion 
int array[10] = {1,2,4,5,7};
int n = 5;
int val = 0;


for (int i =n; i> 0; i--){
  array[i] = array[i-1];
}
array[0] = val;
  n ++;


for (int i = 0; i< n; i++){
  printf("%d\n", array[i]);
}
  return 0;
}








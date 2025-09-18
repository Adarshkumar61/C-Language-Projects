#include<stdio.h>
int main() {

int arrayy[] = {5, 3, 12, 29, 83,};
int size = sizeof(arrayy)/sizeof(arrayy[0]);
int minval = arrayy[0];

for(int i=0; i<size; i++) {
    if(arrayy[i]<minval) {
        minval = arrayy[i];
    }
}
printf("lowest value is: %d\n", minval);

return 0;
}
#include<stdio.h>


struct image {
    char car[50];
    char model[50];
    int year;
};
int main() {
    struct image s1 = {"Volvo", "Suv", 2006};
     struct image s2 = {"Mercedes", "benz", 2010};
      struct image s3 = {"Bmw", "X5", 2017};
      
      printf("%s %s %d\n", s1.car, s1.model, s1.year);
      printf("%s %s %d\n", s2.car, s2.model, s2.year);
      printf("%s %s %d\n", s3.car, s3.model, s3.year);



// struct Car {
//   char brand[50];
//   char model[50];
//   int year;
// };

// int main() {
//   struct Car car1 = {"BMW", "X5", 1999};
//   struct Car car2 = {"Ford", "Mustang", 1969};
//   struct Car car3 = {"Toyota", "Corolla", 2011};

//   printf("%s %s %d\n", car1.brand, car1.model, car1.year);
//   printf("%s %s %d\n", car2.brand, car2.model, car2.year);
//   printf("%s %s %d\n", car3.brand, car3.model, car3.year);

      return 0;
      
}
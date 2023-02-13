#include <stdio.h>
#include <stdlib.h>
   //global declaration of variables
   char arr[2][10] = {"kg/m^2","g/cm^2",}; //string multiple array declaration. sizeof(char)=1byte  (16bits)
   int unit; //integer variable named unit sizeof(int)= 4 bytes(16bits)
   double height;  //double variable sizeof(double)=8bytes (16bits)
   double weight;
   float BMI; //float variable sizeof(float)=4bytes (16bits)
//void function
void calc(){

         printf("%s\n",arr[0]); //display the first element of the array with index 0
         printf("%s\n",arr[1]); //display the second element of the array with index 1
         puts("\nchoose a unit: [Type 1 or 2] ");
         scanf("%d",&unit);//take inputs

    BMI = weight / (height*height); //Body Mass Index is calculated by divided the weight by the square of the height
   //using flow control statement (if ... else) to display the right unit.
   if (unit == 1){
       printf("BMI value is %.2f %s",BMI,arr[0]);
   }else if (unit == 2){
       printf("BMI value is %.2f %s",BMI,arr[1]);
   }
}

int main(){

   puts("########### Welcome to Intermediate BMI Calculator in C programming ############");

   printf("\nEnter  your height: "); //ask user to input the height
   scanf("%lf",&height); //read the height and store

   printf("\nEnter your weight: "); //ask the user to input the weight
   scanf("%lf", &weight); //read the weight and store

   calc(); //call the calc() function already declared at the top
   return 0;
}

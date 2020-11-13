// Program which calculates your Body Mass Index (BMI) & tells wether you are in healthy range or not.

#include<stdio.h>
#include<math.h>
int main(){
    printf("\t\tBody Mass Index(BMI) Calculator\n");
    printf("\nThe body mass index (BMI) is a measure that uses your height and weight to work out if your weight is healthy.\n");
    float mass,height,bmi;
    printf("\nEnter your Weight (in Kilograms) :\t");
    scanf("%f",&mass);
    printf("\nEnter your Height (in Metres) :\t\t");
    scanf("%f",&height);
    bmi = mass/pow(height,2) ;
    printf("\nYour BMI is %f\n",bmi);

    if(bmi<18.5){
        printf("\nYou are Underweight !!");
    }
    else if((bmi>18.5)&&(bmi<24.9)){
        printf("\nYou are in Healthy Range :-)");
    }
    else if((bmi>25)&&(bmi<29.9)){
        printf("\nYou are in Overweight Range.");
    }
    else if((bmi>30)&&(bmi<39.9)){
        printf("\nYou are Obese !!!!!!!");
    }
    else{
        printf("\nIncorrect Input . Please check your inputs.");
    }
    printf("\n/**************************************/");
    return 0;
}

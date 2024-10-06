// . Write a program to calculate the grade of a student based on their marks. Use conditions:
//  Marks >= 90: Grade A
// • 80 <= Marks < 90: Grade B
// • 70 <= Marks < 80: Grade C
// • 60 <= Marks < 70: Grade D
// • Marks < 60: Fail

#include<stdio.h>
int main(){
    int marks;
        printf("Enter your marks: ");
        scanf("%d", &marks);
    
    if(marks >= 90)
        printf("Grade A");
    
    else if(80 <= marks && marks < 90)
        printf("Grade B");
    
    else if(70 <= marks && marks < 80)
        printf("Grade C");
    
    else if(60 <= marks && marks < 70)
        printf("Grade D");
    
    else
        printf("Fail");
   
    return 0;
}
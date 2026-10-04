#include <stdio.h>
int main(){
    int students;
    int marks1,marks2,marks3;
    int average;
    int choice;
    printf("Enter number of students = ");
    scanf("%d",&students);
    for(int i=1;i<=students;i++){
    printf("\n--- Student %d ---\n", i);
    printf("Enter marks of Subject 1 =  ");
    scanf("%d",&marks1);
    printf("Enter marks of Subject 2 =  ");
    scanf("%d",&marks2);
    printf("Enter marks of Subject 3 =  ");
    scanf("%d",&marks3);
    average=(marks1+marks2+marks3)/3;
    printf("Average=%d\n",average);
    choice=average/10;
    switch(choice){
    case 10:
    case 9:
    printf("Grade=A\n");
    break;
    case 8:
    printf("Grade=B\n");
    break;
    case 7:
    printf("Grade=C\n");
    break;
    case 6:
    printf("Grade=D\n");
    break;
    default:
    printf("Grade=F\n");
        }
    printf("Result=%s\n",(average >= 60 && marks1 >= 40 && marks2 >= 40 && marks3 >= 40)? "Pass":"Fail");
    }
    return 0;
}

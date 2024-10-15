#include<stdio.h>
int main()
{   
    int marks[5];
    
    printf("WELCOME\t \n");
    printf("Please Enter marks obtained in MATHS\n");
    scanf("%d",&marks[0]);
    printf("Please Enter marks obtained in PHYSICS\n");
    scanf("%d",&marks[1]);
    printf("Please Enter marks obtained in CHEMISTRY\n");
    scanf("%d",&marks[2]);
    printf("Please Enter marks obtained in ENGLISH\n");
    scanf("%d",&marks[3]);
    printf("Please Enter marks obtained in COMPUTER SCIENCE\n");
    scanf("%d",&marks[4]);
    printf("Your marks are ( respectively):\n");
    
    int i;
     for(i=0;i<5;i++){
        printf("%10.d", marks[i]);
    }
    int c;
    for(c=0;c<5;c++){
        if(marks[c]>40){
            printf("\nYou Have Passed\n");
            float avg;
            printf("ACHIEVED TOTAL MARKS (IN PERCENTAGE):\n");
            avg=((marks[0]+marks[1]+marks[2]+marks[3]+marks[4])/5.0);
            printf("%20.2f %% \n",avg);
            if(avg<60){
                printf("ACHIEVED GRADE : C\n");
                break;
            }
            else if(avg>60 && avg<75){
                printf("ACHIEVED GRADE : B\n");
                break;
            }
            else if(avg>75){
                printf("Congratulations\n");
                printf("You have achieved : DISTINCTION\n");
                break;
            }
            break;
        }
        else{
            printf("\nYou have failed\n");
            break;
        }
    }
   
   
}
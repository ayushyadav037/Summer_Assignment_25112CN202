/*
problem:
write a program to create quiz application.
*/
#include<stdio.h>
int main()
{
    //variables to store users answer
    int answer;
    //variable tp count score
    int score=0;
    printf("     --------------------      \n");
    printf("         G.L.BAJAJ QUIZ      \n");
    printf("     --------------------       \n");
    //Question-1
    printf("\nQuestion-1 . where is G.L.Bajaj college located?\n");
    printf("1.Noida\n");
    printf("2.Greater Noida\n");
    printf("3.Mainpuri\n");
    printf("4.Delhi\n");
    printf("ENTER YOUR ANSWER : ");
    scanf("%d",&answer);

    if(answer==2)
    {
        printf("CORRECT ANSWER !\n");
        score++;
    }
    else{
        printf("WRONG ANSWER !\n");
    }
    //Question-2
    printf("\nQuestion-2.Which course is most popular at Gl bajaj?\n");
    printf("1.B.Tech\n");
    printf("2.MBBS\n");
    printf("3.B.Sc\n");
    printf("4.BA\n");
    printf("ENTER YOUR ANSWER :");
    scanf("%d",&answer);

    if(answer=1)
    {
        printf("CORRECT ANSWER!");
        score++;
    }
    else{
        printf("WRONG ANSWER!");
    }
    //Question-3
    printf("\nQuestion-3.Which proramming language is usually taught in the first year btech course?\n");
    printf("1.Photoshop\n");
    printf("2.C++\n");
    printf("3.java\n");
    printf("4.C\n");
    printf("ENTER YOUR ANSWER :");
    scanf("%d",&answer);

    if(answer==4)
    {
        printf("CORRECT ANSWER !\n");
        score++;
    }
    else{
        printf("WRONG ANSWER!");
    }
    //final result
    printf("\n=================================================\n");
    printf("YOUR FINAL SCORE = %d\3\n",score);
    if(score==3)
    {
        printf("Excellent!You know G.L.BAJAJ very well.\n");
    }
    else if(score>=2)
    {
        printf("Good Job! keep learning .\n");
    }
    else
    {
        printf("Better Luck Next Time!\n");
    }
    printf("===============================================");
    return 0;

}
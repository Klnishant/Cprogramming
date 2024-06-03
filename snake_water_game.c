#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int snakewatergun(char you, char comp) {
//return 1 if you win,-1 if you lose,0 if draw;

//for draw condition
    if(you==comp) {
        return 0;
    }
//for non draw conditions
    if(you=='s'&&comp=='g') {
        return -1;
    }
    else if(you=='g'&&comp=='s') {
        return 1;
    }
    if(you=='w'&&comp=='g') {
        return -1;
    }
    else if(you=='g'&&comp=='w') {
        return 1;
    }
    if(you=='s'&&comp=='w') {
        return -1;
    }
    else if(you=='w'&&comp=='s') {
        return 1;
    }
}
int main()
{
    char you,comp;
    srand(time(0));
    int num=rand()%100+1;

    if(num<33) {
        comp='s';
    }

    else if(num>33&&num<33) {
        comp='w';
    }

    else {
        comp='g';
    }

    printf("Enter s for snake w for water and g for gun:");
    scanf("%c",&you);

    if(you!='s'&&you!='w'&&you!='g') {
        printf("Enter the valid character please!!");
    }

    else {

        int result=snakewatergun(you,comp);

        if(result==0) {
            printf("Match draw!");
        }
        else if(result==1) {
            printf("You win the match!");
        }
        else if(result= -1) {
            printf("You lose the match!");
        }
        printf("\nYou chose %c and computer chose %c",you,comp);
    }
    return 0;
}
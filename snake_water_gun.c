#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int swg(char you,char comp){
    if (you==comp){
        return 0;
    }
    else if (comp=='s' && you=='w'){
        return -1;
    }
    else if (comp=='s' && you=='g'){
        return 1;
    }
    else if (comp=='w' && you=='g'){
        return -1;
    }
    else if (comp=='w' && you=='s'){
        return 1;
    }
    else if (comp=='g' && you=='w'){
        return 1;
    }
    else if (comp=='g' && you=='s'){
        return -1;
    }
}
int main(){
    char c;
    int num , res;
    char comp,you;
    srand(time(0));
    num=rand()%100 +1;
    if (num<=33){
        comp='s';
    }
    else if(num>33 && num<=66){
        comp='w';
    }
    else
    {
        comp='g';
    }
    printf("enter 's' for snake , 'w' for water or 'g' for gun : ");
    scanf("%c",&you);
    res=swg(you , comp);
    printf("The computer chose %c and you chose %c . \n",comp,you);
    if (res==0){
        printf("The game is draw!!");
    }
    else if(res==-1){
        printf("You lost!!, better luck next time");

    }
    else
    {
        printf("CONGRATULATIONS!! ,You win!");
    }
    scanf("%c",&c);
    return 0;
}

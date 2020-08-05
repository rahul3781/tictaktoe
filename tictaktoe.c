#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>

char initials[]={'0','1','2','3','4','5','6','7','8','9'};
int result();
void display();
void blink();

int main()
{
  int player=1, i, choice;
  char mark;

blink();
  do
  {
    display();

    player = (player%2) ? 1 : 2 ;

    printf("Player %d enter a number.\n",player);
    scanf("%d",&choice);

    mark = (player == 1)? 'X' : '0';

    if(choice == 1 && initials[1]== '1')
        initials[1] = mark;
    else if(choice == 2 && initials[2]== '2')
        initials[2] = mark;
    else if(choice == 3 && initials[3]== '3')
        initials[3] = mark;
    else if(choice == 4 && initials[4]== '4')
        initials[4] = mark;
    else if(choice == 5 && initials[5]== '5')
        initials[5] = mark;
    else if(choice == 6 && initials[6]== '6')
        initials[6] = mark;
    else if(choice == 7 && initials[7]== '7')
        initials[7] = mark;
    else if(choice == 8 && initials[8]== '8')
        initials[8] = mark;
    else if(choice == 9 && initials[9]== '9')
        initials[9] = mark;
    else
    {
        printf("Invalid Move!! \n");
        player--;
        getch();
    }
    i = result();
    player++;
  }
  while(i == -1);

  display();

  if(i == 1)
  {
      printf("---Player %d wins---\n",--player);
      printf("\a");
      getch();
  }
  else
  {
    printf("---Game Draw---");
    printf("\a");
    getch();
  }
      return 0;
}

void blink()
{
    int i;

   for(i=0; i<4; i++)
    {
      printf("\t\tWelcome!!This game is created by Rahul Rathi!!\n");

     Sleep(500);
      system("cls");
      Sleep(500);
    }
    //getch();
}

void display()
{
    system("cls");
    printf("\n\n\t Tic Tac Toe\n\n");
    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", initials[1], initials[2], initials[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", initials[4], initials[5], initials[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", initials[7], initials[8], initials[9]);

    printf("     |     |     \n\n");
}

int result()
{
    if(initials[1] == initials[2] && initials[2] == initials[3])
        return 1;//horizontal
    else if(initials[4] == initials[5] && initials[5] == initials[6])
        return 1;//horizontal
    else if(initials[7] == initials[8] && initials[8] == initials[9])
        return 1;//horizontal

    else if(initials[1] == initials[5] && initials[5] == initials[9])
        return 1;//diagonal
    else if(initials[3] == initials[5] && initials[5] == initials[7])
        return 1;//diagonal

    else if(initials[1] == initials[4] && initials[4] == initials[7])
        return 1;//vertical
    else if(initials[2] == initials[5] && initials[5] == initials[8])
        return 1;//vertical
    else if(initials[3] == initials[6] && initials[6] == initials[9])
        return 1;//vertical
    else if(initials[1] != '1' && initials[2] != '2' && initials[3] != '3' &&
        initials[4] != '4' && initials[5] != '5' && initials[6] != '6' && initials[7]
        != '7' && initials[8] != '8' && initials[9] != '9')
        return 0;
    else
        return -1;
}





// // print board
//   o | 1 | 2
//  ---+---+---
//   3 | x | 5
//  ---+---+---
//   6 | 7 | 8

// input for move
// place move
// change sign
// find winner

#include <stdio.h>
#include<windows.h>

void printboard(char arr[9])
{
    printf("\n %c | %c | %c ", arr[0], arr[1], arr[2]);
    printf("\n---+---+---");
    printf("\n %c | %c | %c ", arr[3], arr[4], arr[5]);
    printf("\n---+---+---");
    printf("\n %c | %c | %c ", arr[6], arr[7], arr[8]);
}

int check_winner(char sign, char arr[9]) {
    int result = 0;

    if(arr[0]==sign && arr[1]==sign && arr[2]==sign){
        result = 1;
    }
    else if(arr[3]==sign && arr[4]==sign && arr[5]==sign){
        result = 1;
    }
    else if(arr[6]==sign && arr[7]==sign && arr[8]==sign){
        result = 1;
    }
    else if(arr[0]==sign && arr[3]==sign && arr[6]==sign){
        result = 1;
    }
    else if(arr[1]==sign && arr[4]==sign && arr[7]==sign){
        result = 1;
    }
    else if(arr[2]==sign && arr[5]==sign && arr[8]==sign){
        result = 1;
    }
    else if(arr[0]==sign && arr[4]==sign && arr[8]==sign){
        result = 1;
    }
    else if(arr[2]==sign && arr[4]==sign && arr[6]==sign){
        result = 1;
    }

    return result;
}


void main()
{
    int n;
    char sign = 'x';
    char board[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

    while (1)
    {
        system("cls");
        printboard(board);

        printf("\n%c move : ",sign);
        scanf("%d", &n);

        if (board[n] == ' ')
        {
            board[n] = sign;
            if (sign == 'x')
            {
                sign = 'o';
            }
            else if (sign == 'o')
            {
                sign = 'x';
            }

            if(check_winner('x',board) == 1){
                printboard(board);
                printf("\nx is winner");

                break;
            }

            else if(check_winner('o',board) == 1)
            {
                printboard(board);
                printf("\no is winner");

                break;
            }

            else if(board[0]!=' ' && board[1]!=' ' && board[2]!=' ' && board[3]!=' ' && board[4]!=' ' && board[5]!=' '&& board[6]!=' '&& board[7]!=' ' && board[8]!=' ')
            {
                printboard(board);
                printf("\nit is draw");
                break;
            }
          
        }
    }

    // printboard(board);

    // sign='o';
    // printf("\nenter your mover(0-8) : ");
    // scanf("%d",&n);

    // board[n] = sign;
    // printboard(board);

    // sign='x';
    // printf("\nenter your mover(0-8) : ");
    // scanf("%d",&n);

    // board[n] = sign;
    // printboard(board);
}
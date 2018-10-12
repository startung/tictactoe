/*
 * file:    tictactoe.c
 * author:  Darren Rawlings (d.rawlings@student.rug.nl)
 * date:    Fri 12 Oct 2018
 * version: 2.0
 *
 * Description:
 * Displays whether either player in a game of tic-tac-toe has a winning move
 * v1: uses logic to solve this
 * v2: uses a hand coded neural network to solve this
 *
 * input: 9 O, X, or _ for each square in the grid eg:OXOXOX___ for
 * O|X|O
 * -|-|-
 * X|O|X
 * -|-|-
 *  | |
 * output: YES if the is a winning next move NO otherwise
 */

#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main(int argc, char *argv[]) {
	_Bool winning_move = FALSE;
	char grid[10];
	scanf("%s", grid);

out:
	(winning_move) ? printf("YES\n") : printf("NO\n");
	return 0;
}

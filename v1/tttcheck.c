/*
 * file:    tttcheck.c
 * author:  Darren Rawlings (d.rawlings@student.rug.nl)
 * date:    Fri 12 Oct 2018
 * version: 1.0
 *
 * Description:
 * Displays whether either player in a game of tic-tac-toe has a winning move
 * v1: uses logic to solve this
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
	int winO = 'O' + 'O' + '_';
	int winX = 'X' + 'X' + '_';
	char grid[10];
	scanf("%s", grid);

	for (int i = 0; i < 3; i += 3) { 
		// horizontal
		if ((grid[3 * i] + grid[3 * i + 1] + grid[3 * i + 2] ==  winO) ||
		    (grid[3 * i] + grid[3 * i + 1] + grid[3 * i + 2] ==  winX)) {
			winning_move = TRUE;
			goto out;
		}
		// vertical
		if ((grid[i] + grid[i + 3] + grid[i + 6] ==  winO) ||
		    (grid[i] + grid[i + 3] + grid[i + 6] ==  winX)) {
			winning_move = TRUE;
			goto out;
		}
	}
	// diagonal
	if ((grid[0] + grid[4] + grid[8] == winO) || // diagonal downward
	    (grid[0] + grid[4] + grid[8] == winX) || // diagonal downward
	    (grid[2] + grid[4] + grid[6] == winO) || // diagonal upward
	    (grid[2] + grid[4] + grid[6] == winX)) {  // diagonal upward
		winning_move = TRUE;
	}
out:
	(winning_move) ? printf("YES\n") : printf("NO\n");
	return 0;
}

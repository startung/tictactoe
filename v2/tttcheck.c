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

#define NUMBER_INPUT 9
#define NUMBER_HIDDEN 8

void create_input_nodes(int nodes[]);
int abs(int x);
int activation(int weights[], int inputs[]);
_Bool result(int nodes[8][9], int inputs[]);

int main(int argc, char *argv[]) {
	int input_nodes[NUMBER_INPUT] = {0};

	// add tic-tac-toe specific weights
	int hidden_nodes[8][9] = {{1,1,1,0,0,0,0,0,0},
				  {0,0,0,1,1,1,0,0,0},
				  {0,0,0,0,0,0,1,1,1},
				  {1,0,0,1,0,0,1,0,0},
				  {0,1,0,0,1,0,0,1,0},
				  {0,0,1,0,0,1,0,0,1},
				  {1,0,0,0,1,0,0,0,1},
				  {0,0,1,0,1,0,1,0,0}};
	
	create_input_nodes(input_nodes); // from input

	// calculate result
	(result(hidden_nodes, input_nodes)) ? printf("YES\n") : printf("NO\n");
	return 0;
}

void create_input_nodes(int nodes[]) { // create input nodes
	char ch;
	for (int i = 0; i < NUMBER_INPUT; i++) {
		ch = getchar();
		switch (ch) {
			case 'X':
				nodes[i] = 1;
				break;
			case 'O':
				nodes[i] = -1;
				break;
		}
	}
}

int abs(int x){
	return (x < 0 ? -1*x : x);
}

int activation(int weights[], int inputs[]){
	int activation = 0;
	for(int i = 0; i < NUMBER_INPUT; i++) {
		activation += weights[i] * inputs[i];
	}
	return (abs(activation));
}

_Bool result(int nodes[8][9], int inputs[]){
	_Bool result = FALSE;
	for(int i = 0; i < NUMBER_HIDDEN; i++) {
		if(activation(nodes[i], inputs) > 1) {
			result = TRUE;
			break;
		}
	}
	return result;
}

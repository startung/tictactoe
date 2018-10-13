# tictactoe
A tic-tac-toe game that I will use as a tool to learn programming and AI.
This will be in c as that is the language of my university course, but I may do a python port at some point. I also plan to start without ML specific libraries initially so I have a better idea of what is going on under the hood.

This project will include a number of smaller programs
* tttcheck - checks whether there is a potential winning move
* tttgen - generates all potential boards and the result, this is so I have test data
* tttbackprop - a tool that runs tttcheck and updates the weights
* ttt - the actual game, including number of players zero just incase I need to avert Global Thermonuclear War

My current plan is:

tttcheck
* v1 - a logical test to see if either player has two in-a-row with the other square blank
* v2 - the logical test replaced by a and weighted neural network
* v3 - imports weights from a file and takes input from commandline
* v4 - convert to floats
* v5 - add a verbose mode

tttgen
* v1 - this should be a final version with the results redirected to a file

* tttbackprop
* v1 - a single input update
* v2 - take a training file and loop through all

ttt
* TBD

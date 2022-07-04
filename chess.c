<<<<<<< HEAD
#include <stdbool.h>

int main () {
	printf("Welcome to Terminal Chess!\n");
	printf("Initializing Board...\n")	;
	int board [8][8] = { {5, 4, 3, 2, 1, 3, 4, 5}
				             , {6, 6, 6, 6, 6, 6, 6, 6}
				 	           , {0, 0, 0, 0, 0, 0, 0, 0}
					           , {0, 0, 0, 0, 0, 0, 0, 0}
				             , {0, 0, 0, 0, 0, 0, 0, 0} 
				             , {0, 0, 0, 0, 0, 0, 0, 0}
				             , {6, 6, 6, 6, 6, 6, 6, 6}
				             , {5, 4, 3, 2, 1, 3, 4, 5}
				             } ;
  char buf[100];
  bool whitesMove = true;
	printf("Board Initialized!\n") ;
	
// 	showBoard(board);

  printf("Enter `q` to quit at any time.\n");
  printf("Moves are entered as co-ordinate pairs, such as \"13-33\" \n");
  do {
    if (whitesMove) {
      printf("White to move.\n");
    } else {
      printf("Black to move.\n");
    }
    printf("♔ >> ");
    scanf("%s", buf);
  } while (buf[0] != 'q' && buf[0] != 'Q') ;
    
	printf("Terminating...\n") ;
=======
#include <stdio.h>
#include <stdbool.h>

// ♔ ♕ ♖ ♗ ♘ ♙

/* ┌ └ ┐ ┘

├ ┤ ┬ ┴
 
─ │ ┼
 
*/
void showBoard (int board[8][8]) {
	printf("\n\n┌─┬─┬─┬─┬─┬─┬─┬─┐\n");
	for (int i = 0; i < 8; i++) {
//		printf("│"); 
		bool flag = true;
		for (int j = 0; j < 8; j++) {
			if (!flag) {
				printf("│"); 
			}
			flag = false;
//			printf(""); 
			switch (board[i][j]) {
				case 0: 
					printf(" ");
					break;
				case 1:
					printf("♔");
					break;
				case 2: 
					printf("♕");
					break;
				case 3: 
					printf("♗");
					break;
				case 4: 
					printf("♘");
					break;
				case 5: 
					printf("♙");
			}
		}
		printf("│\n") ;
		if (i < 7) {
			printf("├─┼─┼─┼─┼─┼─┼─┼─┤\n") ;
		}
	}
	printf("└─┴─┴─┴─┴─┴─┴─┴─┘\n");
}

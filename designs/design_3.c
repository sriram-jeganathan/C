#include <stdio.h>
#include <stdlib.h>

int** design( int x ){
	int row = 2 * x - 1;
	int col = 2 * x - 1;
	int dim = row-1;
	int start = 0;

	int i=0,j=0,k=0,l=0;
	// Assigning the matrix
	int** matrix = malloc(row * sizeof(int *));

	for ( int a = 0; a < row; a++ ){
		matrix[a] = malloc(col * sizeof(int));
	}

	int count = x;
	//Inputing the values in a square pattern instead of a line/row/column pattern
	for ( int y = 1; y <= count; y++, start++, dim--, x--) { 
		if ( x == 0 ){
			break;
		}
		//Iteration 1;
		//x = 5,start = 0, dim = 8
		//Iteration 2;
		//x=4,start = 1, dim = 7
		//Iteration 3;
		//x = 3, start = 2, dim = 6
		//Iteration 4;
		//x = 2, start = 3, dim = 5
		//Iteration 5;
		//x = 1, start = 4, dim = 4
		//For the top
		for ( int i = start; i <= dim; i++ ){
			matrix[start][i] = x;
		}
		
		//For the bottom
		for ( int j = start; j <= dim; j++ ){
			matrix[dim][j] = x;
		}
		
		//For the left
		for ( int k = start; k < dim; k++ ){
			matrix[k][start] = x;
		}
		
		//For the right
		for ( int l = start; l < dim; l++ ){
			matrix[l][dim] = x;
		}
	}
	
	return matrix;
}

int main() {
	int x;
	scanf("%d",&x);
	int dim = 2 * x - 1;
	int** matrix = design ( x );

	printf("\n");
	//Printing out the matrix
    	for (int i = 0; i < dim; i++) {
        	for (int j = 0; j < dim; j++)
            	printf("%d ", matrix[i][j]);
        printf("\n");
    	}
	return 0;
}

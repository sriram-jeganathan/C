#include <stdio.h>

int main() {
    	int numbers[100], n = 0, temp;
    	char line[100];
	char ch;

    	FILE *input = fopen("numbers.txt", "r");
    	FILE *output = fopen("sorted.txt", "w");

    	// Read numbers from file
	while (fscanf(input, "%d", &numbers[n]) == 1) {
        	n++;
    	}
    	// Sorting
    	for (int i = 0; i < n - 1; i++) { // to check every single number with all
        	for (int j = 0; j < n - i - 1; j++) { // to check one number with all
            	if (numbers[j] > numbers[j + 1]) { // sorts
                	temp = numbers[j];
                	numbers[j] = numbers[j + 1];
                	numbers[j + 1] = temp;
            		}
        	}
    	} 


    	// Write sorted numbers to new file
    	for (int i = 0; i < n; i++) {
        	fprintf(output, "%d\n", numbers[i]);
    	}

    	fclose(input);
    	fclose(output);
    	return 0;
}


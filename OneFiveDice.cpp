#include <stdio.h>
#include <time.h>

int main() {
		int i;
		int j = 1;
		double k = 1;
		
		clock_t start, end; // variables to start and end the clock
		double time_taken;  // double is the data type for clock_t
		
		start = clock(); // gets the start time
		
		for (i = 0; i < 10000000; i++) {
			// simple forloop that stops after i is more than 1000000
		}
		
		end = clock(); // after for loop finish it 
		
		time_taken = ((double)(end - start)) / CLOCKS_PER_SEC; // difference divided by CLOCKS_PER_SEC
		
		printf("The loop took %f seconds to execute.\n", time_taken);
		// ⤷ prints the time
		
		while (time_taken < k) { // while loop that sets up conversion from float to int by getting the sig fig
			j *= 10;
			time_taken *= j;
		}
		
		int int_time = int(time_taken); // conversion into int
		
		switch (int_time) {
			case 0:
			case 1:
				printf("You rolled a 1!\n");
				break;
			case 2:
			case 3:
				printf("You rolled a 2!\n");
				break;
			case 4:
			case 5:
				printf("You rolled a 3!\n");
				break;
			case 6:
			case 7:
				printf("You rolled a 4!\n");
				break;
			case 8:
			case 9:
				printf("You rolled a 5!\n");
				break;
			
		}
		
		
		return 0;
}
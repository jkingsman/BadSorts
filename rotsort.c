#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv) {
	// allocate storage
	int numberCount = argc - 1;
	long numbers[numberCount];
	int i;

	// insert params into storage
	for(i = 1; i < argc; ++i) {
		numbers[i - 1] = strtol(argv[i], NULL, 10);
	}


	// wait for the memory to degrade
	WAIT: sleep(31557600);

	// check if sorted
    for(i = 0; i < numberCount - 1; ++i){
		if(numbers[i] < numbers[i + 1]){
			continue;
		} else {
			break;
		}
	}

	if(i == numberCount - 1){
		for(i = 0; i < numberCount; ++i) {
			// we're sorted; print
			printf("%ld ", numbers[i]);
		}

		return 0;
	} else {
		goto WAIT;
	}
}

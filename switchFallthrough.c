#include <stdio.h>

int main() {
	printf("ok!\n");

	for (int x=0; x<3; x++) {
	
	switch(x) {
	case 0:
		printf("0!\n");
		break;
	case 1: 
		printf("1!\n");
		break;
	case 2:
		printf("2!\n");
		// oops no break
		  		__attribute__((fallthrough));
		
	default:
		printf("default!\n");
	}
	}
}


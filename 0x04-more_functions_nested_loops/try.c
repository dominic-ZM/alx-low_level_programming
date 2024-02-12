#include "main.h"

/**
 * main - entry point
 * @void: no erguments taken
 *
 * Return: 0 success, 1 failure
 */

int main(void) {
	    int num;
	        printf("Enter a number: ");
		    scanf("%d", &num);
		        
		        if (_isComposite(num)) {
				        printf("%d is a composite number.\n", num);
					    } else {
						            printf("%d is not a composite number.\n", num);
							        }
			    
			    return 0;
}

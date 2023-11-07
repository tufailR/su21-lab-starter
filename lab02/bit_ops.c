#include <stdio.h>
#include "bit_ops.h"

/* Returns the Nth bit of X. Assumes 0 <= N <= 31. */
unsigned get_bit(unsigned x, unsigned n) {
	if (n<0 || n>31){
	return 0;
	}
    /* YOUR CODE HERE */
    return (x>>n)&1; /* UPDATE WITH THE CORRECT RETURN VALUE*/
}

/* Set the nth bit of the value of x to v. Assumes 0 <= N <= 31, and V is 0 or 1 */
void set_bit(unsigned *x, unsigned n, unsigned v) {
	if (n<0 || n>31 || (v !=0 && v !=1)){
	return;
	}
        if (v==1){
	*x |=(1u << n);	
	
	}else{
	*x &= ~(1u << n);
	}
    /* YOUR CODE HERE */
}

/* Flips the Nth bit in X. Assumes 0 <= N <= 31.*/
void flip_bit(unsigned *x, unsigned n) {
	if (n<0 || n>31){
	return;
	}
	*x ^= (1u << n);
    /* YOUR CODE HERE */
}


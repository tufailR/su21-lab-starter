#include <string.h>
#include "ex1.h"

/* Returns the number of times LETTER appears in STR.
There are two different ways to iterate through a string.
1st way hint: strlen() may be useful
2nd way hint: all strings end in a null terminator */
int num_occurrences(char *str, char letter) {
	int count = 0;
	for (int i = 0; str[i] !='\0'; i++){
	if (str[i] == letter){ 
		count++;
	  }
	}
		
                                             /* TODO: implement num_occurances */
    return count;
}

/* Populates DNA_SEQ with the number of times each nucleotide appears.
Each sequence will end with a NULL terminator and will have up to 20 nucleotides.
All letters will be upper case. */
void compute_nucleotide_occurrences(DNA_sequence *dna_seq) {
    /* TODO: implement compute_nucleotide_occurances */
	(*dna_seq).A_count = 0,
	(*dna_seq).C_count = 0,
	(*dna_seq).G_count = 0,
	(*dna_seq).T_count = 0;

        for(int i=0; i < strlen((*dna_seq).sequence); i++){

	if((*dna_seq).sequence[i] == 'A') 
	        (*dna_seq).A_count++; 

	else if((*dna_seq).sequence[i] == 'C')
		(*dna_seq).C_count++;

	else if((*dna_seq).sequence[i] == 'G')
		(*dna_seq).G_count++;
	else
		(*dna_seq).T_count++;
	}
	
    return;
}

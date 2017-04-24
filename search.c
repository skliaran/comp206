#include <stdio.h>
#include "search.h"
#include <string.h> 
int inLine (const char * word, const char * line[]) {
	int response = -1;
	for (int i=0; i < LINE_LENGTH && line[i] !=NULL; i++){	
		printf("Iteration %d\n",i);
		if (strcmp(word, line[i])==0){				
			response++;
			printf("has a match %s \n", word);
		   	break;	
		}
	}
	return response;
}	
int howManyMatches(const char * phrase[], const char * line[]){
	int counter = 0;
	for (int i=0; i < LINE_LENGTH && phrase[i] !=NULL; i++ ){
		printf("Comparing %s\n", phrase[i]);
		if (inLine(phrase[i],line)==0){
			counter++;
		}
	}
	return counter;
}

int main(int argc, const char * argv[]) {
	const char * test = "anatoli";
	const char * testphrase[] = {"anatoli","skliar",NULL};
	for (int i=0; i<argc; i++){
		printf("Argument %d : %s\n", i, argv[i]);
	}
	printf("Test inline function : %d \n", inLine(test, argv));	
	printf("Test howmanyMatches function : %d", howManyMatches(testphrase,argv));
	return 0;
}


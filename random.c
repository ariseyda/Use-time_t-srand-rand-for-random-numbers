#include<stdio.h>
#include<time.h>
#include<stdlib.h>

//A computer program generates 10 random numbers and stores them in an array. 
//The values are displayed after generation. 
//Use time_t time(time_t* timer) function from time.h library, void srand(unsigned int seed) and int rand(void) functions from stdlib.h library for random number generation. 

int main(){
	
	time_t t;//Calculates the current calender time and encodes it into time_t format.
	int i;
	
	srand((unsigned) time(&t));//Intializes random number generatorIntializes random number generator.
	for(i=0;i<10;i++){
		printf("%d ",rand());//If we wrote printf("%d ",rand() % 60) , it'd print 10 random numbers from 0 to 60.
	}
	
	return 0;
}


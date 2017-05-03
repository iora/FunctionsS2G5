#include <stdio.h>

/*	
*	Please define your functions after main().
*	You can import standard C / C++ libraries.
*	Recommended: add description of your code.
*/

int getSum(int myArray[]);
int getSumOfSquares(int myArray[]);
void printAsChars(int myArray[]);
double getAverage(int myArray[]);
int subtractAllValues(int myArray[]);
float invertAllValues(int myArray[] );
void printGroupMemberNames();

int main(void) {
	printGroupMemberNames();

	int row[500];
	for (int i = 0; i < 500; i++)
		row[i] = i;

	return 1;
}
/*Calculate the sum of values in an array*/
/*returns the sum of values in an array. */
/*Chesda Keo*/
int getSum(int myArray[]){
    int i;
    int sum = 0;
        for( int i = 0; i < 500; i++)
            sum += myArray[i];
    return sum;
    
}
/*Initialize squares*/
/*Calculate and print squares*/
/*returns the sum of values*/
/*Chesda Keo*/
int getSumOfSquares(int myArray[]){
    int square;
    int i;
    int sum = 0;
    int myArray[] = new int [500];
    for( int i = 0; i < 500; i++){
        square = myArray[i]*myArray[i];
        sum += square;
    }
    return sum;
}

void printGroupMemberNames() {
	printf("Panharith Leang\n ");
	printf("Chesda Keo\n ");
	printf("AJ\n ");
	printf("That's it!\n");
}


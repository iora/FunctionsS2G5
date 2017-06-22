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
    for( int i = 0; i < 500; i++){
        square = myArray[i]*myArray[i];
        sum += square;
    }
    return sum;
}
/*
print each element of myArray as charactor
*/
void printAsChars(int myArray[]) {
    int iCharLen = 500; //length
    int i;
    for (i = 0; i<iCharLen; i++)
    {
        printf("%c", myArray[i]);
    }
}
/*
Compute the average of muArray
*/
double getAverage(int myArray[]){
    int total = 0;
    double answer;
    for(int i = 0; i < 500; i++){
        total += myArray[i];
    }
    answer = total/n;
    return answer;
}
/*
Subtract 10000 with all the value in myArray
*/
int subtractAllValues(int myArray[]){
    int values = 10000;
    for(int i = 0; i < 500; i++){
        values -= myArray[i];
    }
    return values;
}

/* return the sum of the inverted element of myArray */
float invertAllValues(int myArray[]) 
{
    int myBrray[500];
    int i;
    float s = 0;
    for (i = 0; i<500; ++i)
        myBrray[i] = myArray[499 - i];
    for (i = 0; i<500; ++i)
        myArray[i] = myBrray[i];
    return 0;
}
void printGroupMemberNames() {
	printf("Panharith Leang\n ");
	printf("Chesda Keo\n ");
	printf("Bunheng Lek\n ");
	printf("Thanith rinhieng\n");
}



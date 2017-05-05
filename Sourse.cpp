#include <stdio.h>
#define n 30

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

	int row[n];
	for (int i = 0; i < n; i++)
		row[i] = i;
	return 1;
}
/*Calculate the sum of values in an array*/
/*returns the sum of values in an array. */
/*Chesda Keo*/
int getSum(int myArray[]){
    int i;
    int sum = 0;
        for( int i = 0; i < n; i++)
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
    for( int i = 0; i < n; i++){
        square = myArray[i]*myArray[i];
        sum += square;
    }
    return sum;
}
/*
print each element of myArray as charactor
*/
void printAsChars(int myArray[]){
    for(int i = 0; i < n; i++){
        switch (myArray[i]){
            case 1:
                printf("one \t");
                break;
            case 2:
                printf("two \t");
                break;
            case 3:
                printf("three \t");
                break;
            case 4:
                printf("four \t");
                break;
            case 5:
                printf("five \t");
                break;
            case 6:
                printf("six \t");
                break;
            case 7:
                printf("seven \t");
                break;
            case 8:
                printf("eight\t");
                break;
            case 9:
                printf("nine \t");
                break;
            case 0:
                printf("zero \t");
                break;
        }
    }
    return;
}
/*
Compute the average of muArray
*/
double getAverage(int myArray[]){
    int total = 0;
    double answer;
    for(int i = 0; i < n; i++){
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
    for(int i = 0; i < n; i++){
        values -= myArray[i];
    }
    return values;
}

/* return the sum of the inverted element of myArray */
float invertAllValues(int myArray[]){
    float total = 0;
    for (int i = 0; i < n; ++i)
    {
        total += 1/myArray[i];
    }
    return total;
}
void printGroupMemberNames() {
	printf("Panharith Leang\n ");
	printf("Chesda Keo\n ");
	printf("Bunheng Lek\n ");
	printf("Thanith rinhieng\n");
}



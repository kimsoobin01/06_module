#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo( int a, int b)
{
	int output;
	output = a+b;
	return output; //output; ok
}

int square (int n)
{
	return (n*n);
}

int get_max(int a, int b)
{
	if (a>b) return a;
		
	else return b;
}


int main(){
	
	int x, y;
	int output;
	
	x=2;
	y=5;
	
	output = sumTwo(x, y);
	printf("sumTwo : %i\n", output);
	printf("square : %i\n", square(x));
	
	return 0;
}

#include <stdio.h> 
#include <iostream>
using namespace std;
#include <cstdio>

int main(){
	int i = 4;
	int *ptr = &i;

    printf("Value at ptr = %p \n",ptr); 
    printf("Value at *ptr = %d \n",*ptr); 
    printf("Value at &ptr = %p \n", &ptr);
    printf("Value at i = %d \n",i); 
    printf("Value at &i = %p \n",&i); 

	


	return 0;
}
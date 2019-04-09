//3A713221 
#include<stdio.h>
#include<stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	for(int number1=1;number1<10;number1++)
		for(int number2=1;number2<10;number2++){
			
			printf("%2d*%1d=%2d",number2,number1,number2*number1);
			printf("   ");
			if(number2==9){
			printf("\n");}}
	
	system("pause");
	return 0;
}

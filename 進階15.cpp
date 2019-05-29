#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	
	printf("3a713204\n");
	char input_arr[]="Taiwan, Touch, Your, Heart";
	char *p_input;
	
	int i;
	int length;
	
	length=strlen(input_arr);
	p_input=input_arr;
	
	for(i=0;i<length;i++){
		
		if(*(p_input+i)>64 && *(p_input+i)<90){
			printf("%c", *(p_input+i));
		}
	else if(*(p_input+i)==32){
			printf("%c", *(p_input+i));
		}
	else if(*(p_input+i)>96 && *(p_input+i)<123){
			printf("%c", *(p_input+i));
		}
	}
	system("pause");
	return 0;
}

/*
 ============================================================================
 Name        : ex14_2016.c
 Author      : Kosuke Shiromoto b5122025
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "langage.h"

int main(void) {
	int day;
	int month;
	char lang[32];

	/*input*/
	puts("Please Type your language:");
	scanf("%s",lang);
	puts("Please Type Number of Day:");
	scanf("%d",&day);

	if(strcmp(lang,"English")==0){
		output_Eng(&month,&day);
	}
	else if(strcmp(lang,"Japanese")==0){
		output_Jap(&month,&day);
	}
	else {
		puts("Invalid language!");
	}
	return 0;
}

int whatday(int *_month,int **_day){
	int i;
	if(**_day<=0||**_day>365){
		return WHAT_DAY_NG;
	}
	for(i=0;**_day-Month_Days[i]>0;i++){
		**_day-= Month_Days[i];
	}
	*_month=i;
	return WHAT_DAY_OK;
}

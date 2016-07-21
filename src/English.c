/*
 * English.c
 *
 *  Created on: 2016/07/21
 *      Author: b5122025
 */
#include <stdio.h>
#include <stdlib.h>
#include "langage.h"

static const char Month_Eng[][15]={"January","February","March","April","May","June","July","August","September","October","November","December"};
static const char Day_Ordinal[][3]={"st","nd","rd","th"};

void output_Eng(int *_month,int *_day){
	int select_ordinal;
	day_calc_e(_month,_day);
	switch(*_day){
	case 1:
		select_ordinal=1;
		break;
	case 2:
			select_ordinal=2;
			break;
	case 3:
			select_ordinal=3;
			break;
	default:
		select_ordinal=4;
		break;
	}
	select_ordinal-=1;
	printf("%s,%d%s",Month_Eng[*_month],*_day,Day_Ordinal[select_ordinal]);
}

void day_calc_e(int *_month,int *_day){
	int isCorrectday;
	isCorrectday=whatday(_month,&_day);
	if(isCorrectday==-1){
		puts("Invalid Number!");
		exit(0);
	}
}

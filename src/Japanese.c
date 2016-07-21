/*
 * Japanese.c
 *
 *  Created on: 2016/07/21
 *      Author: b5122025
 */
#include <stdio.h>
#include <stdlib.h>
#include "langage.h"

static const char Month_Jap[][15]={"睦月","如月","弥生","卯月","皐月","水無月","文月","葉月","長月","神無月","霜月","師走"};

void output_Jap(int *_month,int *_day){
	day_calc_j(_month,_day);
	printf("%s%d日",Month_Jap[*_month],*_day);
}

void day_calc_j(int *_month,int *_day){
	int isCorrectday;
	isCorrectday=whatday(_month,&_day);
	if(isCorrectday==-1){
		puts("入力された値が無効です。");
		exit(0);
	}
}

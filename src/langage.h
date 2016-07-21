/*
 * langage.h
 *
 *  Created on: 2016/07/21
 *      Author: b5122025
 */

#ifndef LANGAGE_H_
#define LANGAGE_H_

#define WHAT_DAY_OK 1
#define WHAT_DAY_NG -1

static const int Month_Days[12]={31,28,31,30,31,30,31,31,30,31,30,31};

extern int whatday(int *_month,int **_day);
extern void day_calc_e(int *_month,int *_day);
extern void output_Eng(int *_month,int *_day);

extern void day_calc_j(int *_month,int *_day);
extern void output_Jap(int *_month,int *_day);


#endif /* LANGAGE_H_ */



#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "temp_api.h"
#define SIZE 100


struct sensor {
 uint8_t day;
 uint8_t month;
 uint16_t year;
 uint16_t hour;
 uint16_t minute;
 int8_t temperature;
 
};



int main(int argc, char **argv)
{
	struct sensor Temper[SIZE]={0};
	
	monthly_mean_temp (Temper);

	min_temper_in_currentM(Temper);

	max_temper_in_currentM(Temper);

	min_annualT(Temper);

	average_annualT(Temper);


	max_annualT(Temper);
	
	
	return 0;
}


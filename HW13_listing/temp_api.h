
#ifndef MY_HEADER
#define MY_HEADER

//~ #include "temp_api.h"

#include <stdint.h>
#define SIZE 30000000

struct sensor {
 uint8_t day;
 uint8_t month;
 uint16_t year;
 uint16_t hour;
 uint16_t minute;
 int8_t temperature;
};
typedef struct sensor sensor_t;

typedef struct stack
{
    sensor_t *item;
    int size;
    int sp;
} stack;


void init_stack(stack *st);


void push(stack *st, uint16_t year, uint8_t month,
 uint8_t day, uint16_t hour, uint16_t m, int8_t t);

void AddRecord( sensor_t Info[], int N,  uint16_t year, uint8_t month,
 uint8_t day, uint16_t hour, uint16_t m, int8_t t);
 
int AddInfo(sensor_t Info[]);

void print(sensor_t* Info,int N);

void change(sensor_t Info[], int i, int j);

void SortByT(sensor_t Info[],int N);

uint64_t DateToInt(sensor_t* Info);

int Compare(const void* ta,const void* tb);

void SortByDate(sensor_t* Info,int N);

void monthly_mean_temp (const sensor_t* Info, int N);

void min_temper_in_currentM(const sensor_t* Info, int current_month, int N);

void max_temper_in_currentM(const sensor_t* Info, int current_month, int N);

void min_annualT(const sensor_t* Info, int N);

void average_annualT(const sensor_t* Info, int N);


void max_annualT(const sensor_t* Info, int N);


#endif


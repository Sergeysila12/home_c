
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <inttypes.h>



#include "temp_api.h"


//~ struct sensor {uint8_t day;uint8_t month;uint16_t year; uint16_t hour;uint16_t minute; int8_t temperature;};

//~ typedef struct sensor sensor_t;

void AddRecord( sensor_t Info[], int N,  uint16_t year, uint8_t month,
 uint8_t day, uint16_t hour, uint16_t m, int8_t t)
 {
	Info[N].year = year;
    Info[N].month = month;
    Info[N].day = day;
    Info[N].hour = hour;
    Info[N].minute = m;
    Info[N].temperature = t;
 }

void print(sensor_t* Info,int N){
    printf("===================================\n");
    for(int i=0;i<N;i++)
        printf("%04d-%02d-%02d %02d:%02d t=%3d\n",
        Info[i].year,
        Info[i].month,
        Info[i].day,
        Info[i].hour,
        Info[i].minute,
        Info[i].temperature );
}



void change(sensor_t Info[], int i, int j)
{
	sensor_t temp;
    temp=Info[i];
    Info[i]=Info[j];
    Info[j]=temp;
}


void SortByT(sensor_t Info[],int N)
{
    for(int i=0; i<N; ++i)
    {
        for(int j=i; j<N; ++j)
        {
            if(Info[i].temperature>=Info[j].temperature)
            {
                change(Info,i,j);
			}
		}
	}
}


uint64_t DateToInt(sensor_t* Info)
{
    return (uint64_t)Info->year << 32 | (uint64_t)Info->month <<
     24 | (uint64_t)Info->day<<16|(uint64_t)Info->hour<<8|(uint64_t)Info->minute;
 
}


int Compare(const void* ta,const void* tb)
{
    sensor_t* a = (sensor_t*)ta;
    sensor_t*  b = (sensor_t* )tb;
    if(a->year != b->year)
        return a->year - b->year;
    else if (a->month != b->month)
        return a->month - b->month;
    else if (a->month != b->month)
        return a->day - b->day;
    else if (a->hour != b->hour)
        return a->hour - b->hour;
    else if (a->minute != b->minute)
        return a->minute - b->minute;
    else if (a->temperature != b->temperature)
        return a->temperature - b->temperature;
        
 return 0;
}

void SortByDate(sensor_t* Info,int N)
{
    for(int i=0; i<N; ++i)
        for(int j=i; j<N; ++j)
         //   if(DateToInt(&Info[i])>DateToInt(&Info[j]))
          if(Compare(Info+i,Info+j)>0)
                change(Info,i,j);
}




void monthly_mean_temp (const sensor_t* Info, int N) // среднемесечная температура
{
	int count1=0; int count2=0;  int count3=0;  int count4=0;  int count5=0; 
	int count6=0;  int count7=0;  int count8=0;  int count9=0;  int count10=0; 
	int count11=0;  int count12=0; 
	float temperature1=0;float temperature2=0;float temperature3=0;
	float temperature4=0;float temperature5=0;float temperature6=0;
	float temperature7=0;float temperature8=0;float temperature9=0;
	float temperature10=0;float temperature11=0;float temperature12=0;
	
	for (int i = 0; i < N; i++)
	{
		switch (Info[i].month)
		{
			case 1:
				temperature1+=Info[i].temperature; 
				count1++;
				break;
			case 2:
				temperature2+=Info[i].temperature; 
				count2++;
				break;
			case 3:
				temperature3+=Info[i].temperature;
				count3++; 
				break;
			case 4:
				temperature4+=Info[i].temperature;
				count4++; 
				break;
			case 5:
				temperature5+=Info[i].temperature; 
				count5++; 
				break;
			case 6:
				temperature6+=Info[i].temperature;
				count6++;  
				break;
			case 7:
				temperature7+=Info[i].temperature;
				count7++;  
				break;
			case 8:
				temperature8+=Info[i].temperature;
				count8++;  
				break;
			case 9:
				temperature9+=Info[i].temperature; 
				count9++; 
				break;
			case 10:
				temperature10+=Info[i].temperature; 
				count10++; 
				break;
			case 11:
				temperature11+=Info[i].temperature; 
				count11++; 
				break;
			case 12:
				temperature12+=Info[i].temperature; 
				count12++; 
				break;
				
			default:
				break;
		}
	}
	
	printf("\n===============Monthly average Temperature====================\n");
	
	printf("January   %.1f\t C\n",  temperature1/(float)count1 );
	printf("February  %.1f\t C\n",  temperature2/(float)count2 );
	printf("March     %.1f\t C\n",  temperature3/(float)count3 );
	printf("April     %.1f\t C\n",  temperature4/(float)count4 );
	printf("May       %.1f\t C\n",  temperature5/(float)count5 );
	printf("June      %.1f\t C\n",  temperature6/(float)count6 );
	printf("July      %.1f\t C\n",  temperature7/(float)count7 );
	printf("August    %.1f\t C\n",  temperature8/(float)count8 );
	printf("September %.1f\t C\n",  temperature9/(float)count9 );
	printf("October   %.1f\t C\n",  temperature10/(float)count10 );
	printf("November  %.1f\t C\n",  temperature11/(float)count11 );
	printf("December  %.1f\t C\n",  temperature12/(float)count12 );
	
}


void min_temper_in_currentM(const sensor_t* Info,int current_month, int N)
{
	
	int temperature_min=100;
	int day;  int year;
	
	for (int i = 0; i < N; i++)
	{
		if (Info[i].month==current_month&&Info[i].temperature<temperature_min )
		{
			temperature_min=Info[i].temperature;
			day=Info[i].day;
			year=Info[i].year;
		}
	}
	printf("===================================\n");
	printf("current %d.%d.%d min temperature - %d C\n",day, current_month, year,temperature_min );
}

void max_temper_in_currentM(const sensor_t* Info, int current_month, int N)
{
	int temperature_max=-100;
	int day;  int year;
	
	for (int i = 0; i < N; i++)
	{
		if (Info[i].month==current_month&&Info[i].temperature>temperature_max )
		{
			temperature_max=Info[i].temperature;
			day=Info[i].day;
			year=Info[i].year;
		}
	}
	printf("===================================\n");
	printf("current %d.%d.%d max temperature - %d C\n", day, current_month, year, temperature_max );
}


void min_annualT(const sensor_t* Info, int N)
{
	int temperature_min=100;
	int day;  int year; int month;
	
	for (int i = 0; i < N; i++)
	{
		if (Info[i].temperature<temperature_min )
		{
			temperature_min=Info[i].temperature;
			day=Info[i].day;
			year=Info[i].year;
			month=Info[i].month;
		}
	}
	printf("===================================\n");
	printf("in %d.%d.%d min annual temperature - %d C\n",day, month, year,temperature_min );
	
	return ;
}

void average_annualT(const sensor_t* Info, int N)
{
	int temperature=0;
	int count=0;
	
	for (int i = 0; i < N; i++)
	{
		temperature+=Info[i].temperature;
		count++;
	}
	printf("===================================\n");
	printf("Average temperature - %.f C\n", (float)temperature/(float)count );
	
}


void max_annualT(const sensor_t* Info, int N)
{
		int temperature_max=-100;
	int day;  int year; int month;
	
	for (int i = 0; i < N; i++)
	{
		if (Info[i].temperature>temperature_max )
		{
			temperature_max=Info[i].temperature;
			day=Info[i].day;
			year=Info[i].year;
			month=Info[i].month;
		}
	}
	printf("===================================\n");
	printf("in %d.%d.%d max annual temperature - %d C\n",day, month, year,temperature_max );
	
	return ;
}



void push(stack *st, uint16_t year, uint8_t month,
 uint8_t day, uint16_t hour, uint16_t m, int8_t t)
 {
	 if (st->sp == st->size - 1)
    {
        st->size = st->size * 2;
        st->item = realloc(st->item,
                           st->size * sizeof(sensor_t));
    }
    st->item[st->sp].year=year;
    st->item[st->sp].month=month;
    st->item[st->sp].day=day;
    st->item[st->sp].hour=hour;
    st->item[st->sp].minute=m;
    st->item[st->sp++].temperature=t;
    
 }
 

void init_stack(stack *st)
{
    st->size = 4;
    st->sp = 0;
    st->item = malloc(st->size * sizeof(sensor_t));
}


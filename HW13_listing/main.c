
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#include "temp_api.h"






int main(int argc, char **argv)
{
	FILE *f;
	char* filename=NULL;
	//sensor_t* Info=(sensor_t*)malloc(SIZE*sizeof(sensor_t));
	int rez=0;
    opterr=0;
    int size=0;
    while ( (rez = getopt(argc,argv,"hf:m:")) != -1)
    {
		
        switch (rez)
        {
            case 'h': 
            printf("-h for help.\n");
            printf("-f file_name for load this file.\n");
            printf("-m xx statistic for xx month.\n");
           // printf("-u enable interactive mode.\n");
            return 0;
            case 'f': 
            printf("found argument \"f = %s\".\n",optarg);
			filename=optarg;
            break;
            case 'm': 
            size=atoi(optarg);
            printf("found argument \"m = %s\".\n",optarg); 
            break;
            case '?': 
             printf("Unknown argument: %s Try -h for help\n", argv[optind-1]);
             return 1;
        }
     
    }
	//printf("name %s\n",buf); 
	
	if (filename==NULL)
	{
		return -1;
	}
	
	f=fopen(filename, "r");
	if(f==NULL) {
		printf("Invalid file name \n");
	return 1;
	}
	
stack st;
init_stack(&st);

	int Y,M,D,hh,mm, temp ;
	int r;
	int counter=0;
	int LINE;
	while ((r=fscanf(f, "%d; %d; %d; %d; %d; %d", &Y, &M, &D, &hh, &mm, &temp))>0 )
	{
		if (r==6)
		{
			//AddRecord(Info, counter++,  Y, M, D, hh, mm, temp );
			
			 push(&st, Y, M, D, hh, mm, temp );
		     counter++;
		}
		else
		{
			 printf("Error!!!\n");
			 LINE=++counter;
			 //printf("%d = %d;%d;%d;%d;%d;%d\n", r,Y,M,D, hh, mm,temp  );
		  printf("Line: %d\n", LINE);
			 break;
		}
		
	}
	
	int N=counter;
	sensor_t* Info;
	Info=st.item;

    
    
    
   int current_month=size;
    fclose(f);
	//sensor_t Info[SIZE];
	
	
	if(Info==NULL) return -1;
	
	
	
	//~ print(Info,N);
	
	//~ SortByT(Info,N);
	
	//~ print(Info,N);
	
	//SortByDate(Info,N);
	
	//~ print(Info,N);
	
	
	

	
	
	
    monthly_mean_temp(Info, N); // среднемесечная температура
	
	

if(current_month>0&&current_month<13)
{
	min_temper_in_currentM(Info,current_month, N); // миним в текущем месяце 

	max_temper_in_currentM(Info,current_month, N); // макс в текущем месяце 
}
	min_annualT(Info, N); // миним. темпер годовая

	average_annualT(Info, N);// среднегодовая 


	max_annualT(Info, N); //макс. годовая
	
	free(Info);
	
	
	return 0;
}



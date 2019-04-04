#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int hf,mf,ap;
int sf=0,alarm[4];
char a[100];

void makeValues()
{
	hf = alarm[0];
	mf = alarm[1];
	ap = alarm[2];
	if(ap==1)
		hf += 12;
	if((hf==24)||(hf==12))
		hf -= 12;
	if(alarm[3]==1)
		exit(1);
	printf("Alarm in %d ->hour and %d ->minutes!",hf,mf);
}

int main()
{
	FILE *fp;
	time_t rawTime;
	struct tm currentTime;
	int h,m,s,i=0;
	
	fp = fopen("alarm.txt", "r"); 
 
	if (fp == NULL)
	{
		printf("Error while opening the file.\n");
		exit(1);
	}
 
	do
	{
		fscanf(fp , "%d" , &sf);
		alarm[i]=sf;
		i++;
	}while(i<4);

	fclose(fp);
	
	makeValues();
	
	while(1)
	{
		rawTime = time(NULL);
		currentTime = *localtime(&rawTime);
		
		strftime(a , 100 , "%H" , &currentTime);
		sscanf(a , "%d" , &h);
		
		strftime(a , 100 , "%M" , &currentTime);
		sscanf(a , "%d" , &m);

		if((h==hf)&&(m==mf))
		{
			int result = system("C:\\Users\\Manoj\\Desktop\\code\\extracode\\Code\\Alarm\\Alarm.exe");
			//printf(result);
			break;
		}
	}
return 0;
}

/*
Alarm.exe is executable file of Alarm.cpp
ExecuteAlarm.exe is executable file of executing.cpp
trying.exe is executable file of calling.cpp
*/

/*
fscanf (file, "%d", &i);    
while (!feof (file))
  {  
    printf ("%d ", i);
    fscanf (file, "%d", &i);      
  }
*/




#include <stdio.h>
int main()
{
	int zat,titikbeku;
	titikbeku=0;
	printf("Masukan suhu zat dalam celcius : ");
	scanf("%d",&zat);
	if(zat<=titikbeku)
	{
		printf("Zat tersebut adalah zat yang beku karna bersuhu pada titik beku atau dibawahnya");
	}else{
		printf("Zat tersebut bukanlah zat yang beku, karena suhu tidak memenuhi \ntitik beku suatu zat");
	}
}

#include<stdio.h>
int main(){
float rainfall[3][4];
float total=0.0, avg=0.0;
for (int i=0;i<3;i++){
for(int j=0;j<4;j++){
printf("Enter value for city %d month %d:",i+1,j+1);
scanf("%f",&rainfall[i][j]);
}
}
printf("\t\t\t\t\tRainfall Tracking B24CE1081\n");
printf("SR_NO\tCITY\tMONTH 1\t\tMONTH 2\t\tMONTH 3\t\tMONTH 4\t\tAVG");
printf("\n------------------------------------------------------------------------------------------\n");
for (int i=0;i<3;i++){
printf("%d\t",i+1);
printf("CITY %d\t",i+1);
for(int j=0;j<4;j++){
printf("%f\t",rainfall[i][j]);
total+=rainfall[i][j];
}
avg=total/4;
printf("%f",avg);file:///home/mmcoe/Pictures/Screenshots/Screenshot%20from%202025-07-21%2010-10-46.png

printf("\n------------------------------------------------------------------------------------------\n");

total=0.0;
}

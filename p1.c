#include<stdio.h>

float calculateRectagle(int length,int breadth,int area){
 area = (length*breadth);
 return area;
 }
 
 int main(){
 float length,breadth,area;

 int i;
 int a[10]={15,30,45,63,72,80,86,97,56,25};
 int b;
 for(i=0;i<10;i++){
  area = calculateRectangle(a[i],b);

 printf("output:%f",area);

 }

 printf("Enter the value of length:");
 scanf("%f",&length);

 printf("Enter the value of breadth: ");
 scanf("%f",&breadth);

return 0;


 }



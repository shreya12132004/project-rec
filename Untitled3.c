#include <stdio.h>

float calc_area(int l, int w){
  return (l * w);
}

int main()
{
  int i;
  int b;
  int a[10] = {15, 30, 45, 63, 72, 80, 86, 97, 56, 25};
  int areaList[10] = {0};
  int length, breadth ;
  float area;
  for (i = 0; i <= 10; i++)
  {
    length = a[i];
    printf("Rectangle Name R%d ", (i+1));
    printf("Value of length: %d ", length);

    printf("Enter the value of breadth: ");
    scanf("%d", &breadth);
    area = calc_area(length, breadth)
    areaList[i] =area;
    printf("Area is : %f ", area);
  }
 
  return 0;
}




// // definition of function
// sin(angle){
//   if (angle==45) return (1/1.421)
//   if (angle==60) return (1/2)
// }

// chaha(int goad){
//   //
//   return 20;
// }


// //
// int x = 45
// int y = 60

// sin(x);
// sin(angle);


// int material = "sakhar"
// chaha(goad)
// chaha(goad)

#include<stdio.h>
#include<math.h>
main()
{
int x1, y1, x2, y2, x3, y3;
float area;
printf("Enter the Coordinate \n");
printf("Enter 1st coordinate : \n");
scanf("%d,%d",&x1,&y1);
printf("Enter 2nd coordinate : \n");
scanf("%d,%d",&x2,&y2);
printf("Enter 3rd coordinate : \n");
scanf("%d,%d",&x3,&y3);
printf("The 1st coordinate : %d, %d\n",x1,y1);
printf("The 2nd coordinate : %d, %d\n",x2,y2);
printf("The 3rd coordinate : %d, %d\n",x3,y3);
area = 0.5 * fabs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 -y2));
printf("area = %lf \n",area);
if(area == 0)
{
printf("The points are Collinear \n");
}
else
{
printf("The points are not Collinear \n");
}
return 0;

}

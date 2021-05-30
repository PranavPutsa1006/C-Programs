#include <stdio.h>
int main()
{
  int x,y,t;
  printf("Enter two integers:");
  scanf("%d%d",&x,&y);
  printf("Before swapping: x=%d,y=%d\n",x,y);
  t=x;
  x=y;
  y=t;
  printf("After swapping: x=%d,y=%d\n", x, y);
}

#include <stdio.h>
#include <cs50.h>
int main(void)
{
    int n;
    do
    {
         n = get_int("Enter number between 1 and 8 \n");
    } while(n>7 || n<2);
 
  for(int i = 0;i<n;i++)
  {
      for(int x =n-i;x>0;x--)
    {
      printf(" ");
    }
    for(int x = 0;x<=i;x++)
    {
      printf("#");
    }
    printf("\n");
  }
}

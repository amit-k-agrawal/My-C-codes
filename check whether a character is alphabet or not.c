#include<stdio.h>
int main()
{
  char n;
  scanf("%c",&n);
  if((n>64&&n<91)||(n>96&&n<123))
    printf("Alphabet");
  else
    printf("No");
  return 0;
}

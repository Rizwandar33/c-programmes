#include <stdio.h>
#include <conio.h>
int main()
{
  int i, first, last, middle, n=10, search, arr[10];

  printf("Enter Array Elements\n");
  for ( i= 0; i < n; i++)
    scanf("%d", &arr[i]);

  printf("Enter value to find\n");
  scanf("%d", &search);

  first = 0;
  last = n - 1;
  middle = (first+last)/2;

  while (first <= last) 
  {
    if (arr[middle] < search)
      first = middle + 1;
    else if (arr[middle] == search) {
      printf("%d found at location %d.\n", search, middle+1);
      break;
    }
    else
      last = middle - 1;

    middle = (first + last)/2;
  }
  if (first > last)
    printf("Not found! %d isn't present in the list.\n", search);

  return 0;
}
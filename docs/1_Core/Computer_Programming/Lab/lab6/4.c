#include <stdio.h>

int
main ()
{
  int s;
  printf ("Number of month: ");
  scanf ("%d", &s);

  switch (s)
    {

    case 1:
      printf ("31 in January");
      break;
    case 2:
      printf ("28/29 in February");
      break;
    case 3:
      printf ("31 in March");
      break;
    case 4:
      printf ("30 in April");
      break;
    case 5:
      printf ("31 in May");
      break;
    case 6:
      printf ("30 in June");
      break;
    case 7:
      printf ("31 in July");
      break;
    case 8:
      printf ("31 in August");
      break;
    case 9:
      printf ("30 in September");
      break;
    case 10:
      printf ("31 in October");
      break;
    case 11:
      printf ("30 in November");
      break;
    case 12:
      printf ("31 in December");
      break;

    default:
      printf ("%d is an invalid number", s);

    }
  return 0;

}

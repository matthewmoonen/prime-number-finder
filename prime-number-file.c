#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Finds all prime numbers between two given values

int main(void)
{

//Get starting and finishing numbers
//print all numbers between start and finish
    int sn = get_int ("Starting number: ");
    int fn = get_int ("Finishing number: ");
    string c1 = get_string ("First containing sequence: ");
    string c2 = get_string ("Second containing sequence: ");
    string c3 = get_string ("Third containing sequence: ");

//Return error if sn<fn and fn<2
   if (fn < sn & fn < 2){
        printf("Errors: What are you doing? Your starting number is greater than your finishing number, also your finishing number is smaller than the lowest prime number, which is 2");
   }

//Return error if fn<sn
    else if (fn<sn){
        printf("Error: your starting number is greater than your finishing number");
    }

//Return error if fn<2
    else if (fn < 2) {
        printf("Your finishing number is smaller than the lowest prime number, which is 2");
    }


else
        printf("Primes between: %i and %i containing %s, %s and %s\n", sn, fn, c1, c2, c3);

//Exclude numbers <2
int integers, primes, i;
char strng[2];

while (sn < fn) {
      primes = 0;
     if (sn <= 1) {
         ++sn;
         continue;
      }

 for (i = 2; i <= sn / 2; ++i) {
         if (sn % i == 0) {
            primes = 1;
            break;
         }
      }

      if (primes == 0)
      {

            sprintf(strng, "%d", sn);
            string match = strstr(strng, c1);
            if (match)
            {
                string flame = strstr(strng, c2);
                if (flame)
                {
                    string smoke = strstr(strng, c3);
                    if (smoke)
                    {
                        printf("%s ", strng);
                    }
                }
            }
        }

    ++sn;
}

printf("\n");

}

#include <stdio.h>
/* a fahrenheight  and  calcius table*/
main ()
{
    int fahr,celcius,count;
    int lower, upper,step,gh;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    count = 0;
    gh = 1;
    printf("fahrenheight to Celcius table");

    while ( fahr <= upper){
        while (count <= gh)
        {

            celcius=5 * (fahr - 32) / 9;
        
            printf ("\n%d\t%d\n",fahr,celcius);
            fahr = fahr +step;
            count = count + 1; /* code */
        }
        
        
        
    }
       
}


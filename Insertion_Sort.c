/*Sorting Elements of an array in ascending order using insertion sort algorithm*/
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int A[32000000],n;
int main()
{
	//int n;
	int key,i,j;
    time_t t;
    clock_t start_t, end_t;
    float total_t;

	printf("How many random numbers?): ");
	scanf("%d",&n);

     /* Intializes random number generator */
    srand((unsigned) time(&t));
	/* Print n random numbers from 0 to 49 */
    for( j=1; j <= n ; j++ )
       A[j] = rand() % 50;
  /* printf("The random numbers are: ");
   for( j=1; j <= n ; j++ )
       printf("%d\t", A[j]); */


   start_t = clock();
   	// Insertion Sort Algorithm starts
	for(j=2;j<=n;j++) // Step 1
	{
		key = A[j];   // Step 2
		i=j-1;        // Step 4
		while(i>0 && A[i]> key) // Step 5
		{
			A[i+1] = A[i]; // Step 6
			i=i-1; // Step 7
		} // end while
		A[i+1]=key; // Step 8
	} // end for

	// Algorithm ends
   end_t = clock();



	// For displaying the output
	printf("\n In ascending order:\n");
	for(j=1; j<=n; j++)
		//printf("%d\t",A[j]);

   //total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC * 1000;
   total_t = (double)(end_t - start_t);
   /* The C library function clock_t clock(void)returns the number
   of clock ticks elapsed since the program was launched. To get the
   number of seconds used by the CPU, you will need to divide by CLOCKS_PER_SEC.*/
   printf("Starting of the program, start_t = %ld\n", start_t);
   printf("End of the big loop, end_t = %ld\n", end_t);
   printf("Total time taken by CPU: %f\n", total_t  );

    return 0;
}



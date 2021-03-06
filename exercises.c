/* SYSC 2006 Fall 2017 Lab 3. 

 * Incomplete implementations of the functions that will be coded during the lab.
 */

#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#include "exercises.h"

/* Exercise 1. */

/* Return the average magnitude of the n doubles in x[]. 
 * This function assumes that parameter n is >= 1.
 */
double avg_magnitude(double x[], double n)
{
	double avgMag = 0;

	for(int i=0;i<=n-1;i++){
		avgMag = avgMag+(fabs(x[i]));
	}
	avgMag = avgMag/n;

    return avgMag;
}

/* Exercise 2. */

/* Return the average power of the n doubles in x[].
 * This function assumes that parameter n is >= 1.
 */
double avg_power(double x[], double n)
{
	double avgPower = 0;
	for(int i=0;i<=n-1;i++){
		avgPower+=pow(x[i],2.0);
	}

	avgPower=avgPower/n;

    return avgPower;
}

/* Exercise 3. */

/* Return the largest of the n doubles in arr[]. 
 * This function assumes that parameter n is >= 1.
 */
double max(double arr[], int n)
{
	double max = 0;
	double temp;

	for(int i=0;i<=n-1;i++){
		if(i==0){
			max=arr[i];
		}
		temp=arr[i];
		if(temp>max){//a
			max=temp;
		}
	}
    return max;
}

/* Exercise 4. */

/* Return the smallest of the n doubles in arr[]. 
 * This function assumes that parameter n is >= 1.
 */
double min(double arr[], int n)
{
	double min;
	double temp;
	for(int i=0;i<=n-1;i++){
		if(i==0){
			min=arr[i];
		}
		temp=arr[i];
		if(temp<min){
			min=temp;
		}
	}

    return min;
}

/* Exercise 5. */

/* Normalize the n doubles in x[]. 
 * This function assumes that parameter n is >= 2, and that at least
 * two of the values in x[] are different.
 */
void normalize(double x[], int n)
{
	double bigV = max(x,n);
	double lilV = min(x,n);
	for(int i=0;i<=n;i++){
		x[i]=(x[i]- lilV)/(bigV - lilV);
	}

}

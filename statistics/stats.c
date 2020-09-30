#include<stdlib.h>
#include<stdio.h>

#include "stats.h"

//TODO: fix the error in this function
void readInArray(int *arr, int size)
{
  int i;
  printf("Enter your list of numbers: ");
  for (i = 0; i < size; i++)
  {
    scanf("%d", *arr[i]);
  }
  return;
}

int * generateRandomArray(int size)
{
  int * randomArr = malloc(sizeof(int) * size);
  for(int i=0; i<size; i++)
  {
    randomArr[i] = rand();
  }
  return randomArr;
}

void printArray(const int *arr, int size)
{
  printf("[");
  for(int i=0; i<size-1; i++)
  {
    printf("%d, ", arr[i]);
  }
  printf("%d]\n ", arr[size-1]);
}

double getMean(int *arrayMean, int lengthMean)
{
  int mean;
  int sum
  int i;

  readInArray(*arrayMean, lengthMean)

  for (i = 0; i < (lengthMean - 1); i++)
  {
    sum = arrayMean[i] + arrayMean[i + 1];
  }
  mean = sum / lengthMean;

  printf("%d\n", mean);
  return (mean);
}

int getMin(int *arrayMin, int lengthMin)
{
  int min;
  int i;

  for (i = 0; i < lengthMin - 1; i++)
  {
    if (*arrayMin[i] < *arrayMin[i + 1])
    {
      min = arrayMin[i];
    }
    else
    {
      min = *arrayMin[i + 1];
    }
  }

  printf("%d\n", min);
  return (min);
}

int getMax(int *arrayMin, int lengthMax)
{
  int max;
  int i;

  for (i = 0; i < lengthMax - 1; i++)
  {
    if (*arrayMax[i] > *arrayMax[i + 1])
    {
      max = arrayMax[i];
    }
    else
    {
      max = *arrayMax[i + 1];
    }
  }

  printf("%d\n", max);
  return (max);
}

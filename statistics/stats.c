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

double getMean(int *arr, int length)
{
  double mean;
  int sum = arr[0];
  int i;

  for (i = 0; i < length; i++)
  {
    sum = arrayMean[i] + sum;
  }
  mean = sum / length;

  return (mean);
}

int getMin(int *arr, int length)
{
  int min = arr[0];
  int i;

  for (i = 0; i < length; i++)
  {
    if (arr[i] < min)
    {
      min = arr[i];
    }
  }

  printf("%d\n", min);
  return (min);
}

int getMax(int *arr, int length)
{
  int max = arr[0];
  int i;

  for (i = 0; i < length; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }


  return (max);
}

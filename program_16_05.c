/*
 Enter the number of elements : 5
 Enter Elements :
1254
1203
111
11
21
Sum of digits of 1254 = 12
Sum of digits of 1203 = 6
Sum of digits of 111 = 3
Sum of digits of 11 = 2
Sum of digits of 21 = 3
*/



#include <stdio.h>

void Display(int arr[], int ilength) {
    int icnt, idigit, sum;

    for (icnt = 0; icnt < ilength; icnt++) { // Start from index 0
        sum = 0; // Reset sum for each number

        int temp = arr[icnt]; // Store a copy to process

        while (temp > 0) {  // Extract digits
            idigit = temp % 10;
            sum += idigit;
            temp /= 10;
        }

        printf("Sum of digits of %d = %d\n", arr[icnt], sum);
    }
}

/*int main() {
    int arr[] = {123, 456, 789, 101};
    int size = sizeof(arr) / sizeof(arr[0]);

    Display(arr, size);

    return 0;
}*/



int main()
{ 
  int iSize = 0 ;
  int icnt = 0 ;
  int *p = NULL ;
  
  printf("\n Enter the number of elements : ");
  scanf("%d" , &iSize);
  
  p = (int *)malloc(iSize * sizeof(int));

  printf("\n Enter Elements : \n");
  for(icnt=0 ; icnt<iSize ; icnt++)
  {
    scanf("%d" , &p[icnt]);
  }

 Display(p,iSize);
  free (p);

  return 0 ;
}

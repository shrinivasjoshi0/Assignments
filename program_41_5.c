

// FILE MANIPULATION :  Accept file name and accept one string and write that string at end of file

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
   char filename[30];
   char Arr[100] = {'\0'};
   int fd = 0 ; int iRet = 0 ;

   printf("Enter the FIle name :\t");
   scanf("%s" , filename);

   fd= open(filename , O_RDWR | O_APPEND);
   if(fd == -1)
   {
    printf("Unable to open the file...\n\n");
   }
   else
   {
     printf("File opened Successfully with fd %d and name %s\n" ,fd , filename);
     printf("\nEnter the data you want to write : \t");
      scanf(" %[^'\n']s",Arr);

     iRet = write(fd, Arr ,strlen(Arr));

    printf("\n%d bytes gets  written into the file\n\n",iRet);
    close(fd);

   }
   

   return 0 ;
}

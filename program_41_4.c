

// FILE MANIPULATION :  Accept file name and display the size of file

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
   char filename[30];
   char Arr[100] = {'\0'};
   int fd = 0 ; int iSize=0 ; int iRet = 0 ;

  printf("Enter the File name which you want to open :\t");
  scanf("%s" , filename);

   fd = open(filename , O_RDWR);

   if(fd == -1)
   {
    printf("Unable to open file..%s" , filename);
   }
   else
   {
    printf("\n%s File opened with fd %d\n" , filename , fd);
    while((iRet = read(fd,Arr ,sizeof(Arr)))!= 0) 
    {
        iSize = iSize + iRet ;
    }
    printf("Size of File is %d bytes" , iSize);
    close(fd);
   }
   

   return 0 ;
}

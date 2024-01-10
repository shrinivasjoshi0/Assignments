

// FILE MANIPULATION :  Accept file name and read mode file


# include<stdio.h>
# include<stdlib.h>
# include<unistd.h>
# include<fcntl.h>


int main()
{
 int fd = 0 ;
 fd = open("Hare Krishna.txt",O_RDONLY);

 if(fd == -1)
 {
    printf("Unable to open the file..");
 }
 else
 {
    printf("File is Successfully opened with fd : %d\n\n" , fd);
 }
    return 0 ;
}
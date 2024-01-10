

// FILE MANIPULATION :  Accept file name and create that file


# include<stdio.h>
# include<stdlib.h>
# include<unistd.h>
# include<fcntl.h>


int main()
{
 int fd = 0 ;
 fd = creat("Demo.txt",0777);

 if(fd == -1)
 {
    printf("Unable to create the file..");
 }
 else
 {
    printf("File is Successfully created with fd : %d\n\n" , fd);
 }
    return 0 ;
}
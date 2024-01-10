import java.util.*;
// Accept two number and display position of common ON bits
class program_40_2
{

    public static void Count_SetBit(int iNo1 , int iNo2)
    {
        int iCnt1 = 0;
        int iCnt2 = 0;
        
        while((iNo1  != 0) && (iNo2 != 0))
        {
            iNo1 = iNo1 & (iNo1-1);
            iCnt1++ ;
            iNo2 = iNo2 & (iNo2-1);
            
                iCnt2++;
            
        }
        int iCnt = iCnt1+iCnt2;
        System.out.println("The Common ON bits are :" + iCnt);
    }


    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo1 = 0 ;
        int iNo2 = 0 ;
        

        System.out.println("\nEnter 1st Number : ");
        iNo1 = sobj.nextInt();

        System.out.println("\nEnter 2nd Number : ");
        iNo2 = sobj.nextInt();

          Count_SetBit(iNo1 , iNo2);

     
        
        
    }
    
}
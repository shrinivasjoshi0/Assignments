
import java.util.*;
// Toggle all bits from that range...
class program_40_5
{

    public static int ChkBit(int iNo , int iStart , int iEnd)
    {
     int iCpy = iNo ; 
    
     for(int i= iStart ; i<=iEnd ; i++)
     {
        if((iNo & (1<<(i-1))) != 0)
        {
        iCpy = iCpy ^ (1<<(i-1));
        }
        else
       {
        iCpy = iCpy | (1<<(i-1));
       }
     }
     
     return iCpy;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0 ; int iRet = 0 ;
    int iStart = 0 ; int iEnd = 0 ;        
        

        System.out.println("\nEnter 1st Number : ");
        iNo = sobj.nextInt();

        System.out.println("\nEnter Range from : ");
        iStart = sobj.nextInt();

        System.out.println("\nTo : ");
        iEnd= sobj.nextInt();



        
        iRet = ChkBit(iNo,iStart,iEnd);

            System.out.println("Updated Number is : " + iRet );
        
    }
    
}
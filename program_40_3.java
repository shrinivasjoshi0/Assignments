import java.util.*;
// check 9th or 12th ON or OFF...
class program_40_3
{

    public static boolean ChkBit(int iNo)
    {
     int iMask1 = 0X00000900 ;
     //int iMask2 =    0;
        int iResult = 0 ;
       iResult = iNo & iMask1 ;
        if(iResult == iMask1)
        {
            return true ;
        }
        else
        {
            return false ;
        }

    }


    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0 ; boolean iRet = false ;
        
        

        System.out.println("\nEnter 1st Number : ");
        iNo = sobj.nextInt();

        
        iRet = ChkBit(iNo);

        if(iRet == true)
        {
            System.out.println("9th or 12th Bit is ON..");
        }
        else
        {
            System.out.println("9th or 12th Bit is OFF..");
        }
     
    }
    
}
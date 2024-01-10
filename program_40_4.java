import java.util.*;
// check 9th or 12th ON or OFF...
class program_40_4
{

    public static boolean ChkBit(int iNo , int iPos1 , int iPos2)
    {
     int iMask1 = 0X0000001 ; int iMask2 = 0X0000001 ;
     int iResult1 = 0 ; int iResult2 = 0 ;

     iMask1 = iNo <<(iPos1-1);
     iResult1 = iNo & iMask1 ;
     iMask2 = iNo <<(iPos1-1);
     iResult2 = iNo & iMask2 ;
    
       if( (iResult1 == iMask1) || (iResult2 == iMask2) )
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
    int iPos1 = 0 ; int iPos2 = 0 ;        
        

        System.out.println("\nEnter 1st Number : ");
        iNo = sobj.nextInt();

        System.out.println("\nEnter 1st Position : ");
        iPos1 = sobj.nextInt();

        System.out.println("\nEnter 2nd Position : ");
        iPos2 = sobj.nextInt();



        
        iRet = ChkBit(iNo,iPos1,iPos2);

        if(iRet == true)
        {
            System.out.println("Bit is ON.." );
        }
        else
        {
            System.out.println("Bit is OFF..");
        }
     
    }
    
}
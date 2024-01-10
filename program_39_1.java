import java.util.*;

class program_39_1
{

    public static boolean CheckBit(int iNo , int iPos)
    {
        int iMask = 0x00000001;
        int iResult = 0;
        iMask = iMask << (iPos -1);

        iResult = iNo & iMask;
        if(iResult == iMask)
        {
            return true;
        }
        else
        {
            return false;
        }
    }


    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0 ; int iPos = 0 ;
        boolean bRet = false ;

        System.out.println("Enter a Number : ");
        iNo = sobj.nextInt();

        System.out.println("Enter Position : ");
        iPos = sobj.nextInt();
         bRet = CheckBit(iNo , iPos);

        if(bRet==true)
        {
            System.out.println("its TRUE..Bit is ON..!");
        }
        else
        {
            System.out.println("its FALSE..Bit is OFF..!");
        }
        
        
    }
    
}
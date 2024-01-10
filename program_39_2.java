import java.util.*;

class program_39_2
{

    public static void CheckBit(int iNo , int iPos)
    {
        int iMask = 0x00000001;
        int iResult = 0;
        iMask = iMask << (iPos-1);

        iResult = iNo ^ iMask;
        if(iResult == iMask)
        {
            System.out.println("Bit is OFF "+ iResult);
            
        }
        else
        {
            System.out.println(iResult);
            
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
          CheckBit(iNo , iPos);

        
        
    }
    
}
import java.util.*;

class program_38_1
{
    public static int OffBit(int iNo)
    {
        int iMask = 0x00000040;
        int iResult = 0;
        iResult = iNo & iMask;

        if(iResult == iMask)    // 7th bit is ON
        {
            return (iNo ^ iMask);
        }
        else                    // 7th bit is OFF
        {
            return iNo;
        }
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iRet = 0;

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        iRet = OffBit(iNo);
    
        System.out.println("Updated number is : "+iRet);
    }
}
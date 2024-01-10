import java.util.*;
// accept position also and toggle that bit
class program_39_4
{

    public static void CheckBit(int iNo , int iPos)
    {
        int iMask = 0x00000001;
        int iResult = 0;
        iMask = iMask << (iPos-1);

        iResult = iNo ^ iMask;
        
            System.out.println("Updated Number is:\t"+ iResult);
            
      
    }


    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0 ; int iPos = 0 ;
      

        System.out.println("Enter a Number : ");
        iNo = sobj.nextInt();

        System.out.println("Enter Position : ");
        iPos = sobj.nextInt();
          CheckBit(iNo , iPos);

        
        
    }
    
}
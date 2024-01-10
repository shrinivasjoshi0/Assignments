import java.util.*;

class program_37_4
{

    public static boolean ChkBit(int iNo)
    {
      int iMask = 0x000001C0;
      int iResult = 0 ;
      iResult = iNo & iMask ;
      if(iResult == iMask)
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
    int iNo = 0 ; boolean bRet = false ;
    System.out.println("Enter a Number : ");
    iNo = sobj.nextInt();


    bRet = ChkBit(iNo);
    if(bRet == true)
    {
        System.out.println("7th,8th,9th Bits Are ON..!");
    }
    else
    {
        System.out.println("7th,8th,9th Bits Are OFF..!");
    }


}
}
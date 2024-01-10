import java.util.*;

class program_37_5
{

    public static boolean ChkBit(long iNo)
    {
      long iMask = 0x80000001;
      long iResult = 0 ;
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
    long iNo = 0 ; boolean bRet = false ;
    System.out.println("Enter a Number : ");
    iNo = sobj.nextInt();


    bRet = ChkBit(iNo);
    if(bRet == true)
    {
        System.out.println("1st and 32nd Bits Are ON..!");
    }
    else
    {
        System.out.println("1st and 32nd Bits Are OFF..!");
    }

    

}
}
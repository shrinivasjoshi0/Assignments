import java.util.*;

class program_37_1
{
    public static boolean Chk15thBit(int iNo)
    {
        int iMask = 0X00010000;
        int iResult = 0 ;
        iResult = iNo & iMask ;

        if(iResult == iMask)
        {
            return true ;
        }
        else
        {
            return false;
        }

    }
    public static void main(String arg[])
    {
      Scanner obj = new Scanner(System.in);
      int iNo =0; boolean bRet = false ;
      System.out.println("Enter a Number :\t");
      iNo =  obj.nextInt();

      bRet = Chk15thBit(iNo);
      if(bRet == true)
      {
        System.out.println("!th Bit is ON..! ");

      }
      else if(bRet == false)
      {
        System.out.println("15th Bit is OFF..!");
      }
      else
      System.out.println("Invalid input...");

    }
}
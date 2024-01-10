import java.util.*;
// Count number of ON bits in it without using %
class program_40_1
{

    public static void Count_SetBit(int iNo)
    {
        int iCnt = 0;
        
        while(iNo != 0)
        {
            iNo = iNo & (iNo-1);
            
                iCnt++;
             
            
        }
        System.out.println("The ON bits are :" + iCnt);
    }


    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0 ;
        

        System.out.println("\nEnter a Number : ");
        iNo = sobj.nextInt();

          Count_SetBit(iNo);

     
        
        
    }
    
}
import java.util.Scanner;
class Evenorodd
{
  public static void find(int a)
  {
    if(a%2==0)
    {
      System.out.print("The integer "+a+" is a even number");
    }
    else
    {
      System.out.print("The integer "+a+" is a odd number");
    }
  }
  public static void main(String[] args)
  {
    int a;
    System.out.print("Enter the integer of a : ");
    Scanner input=new Scanner(System.in);
    a=input.nextInt();
    input.close();
    find(a);
  }
}
        

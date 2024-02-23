import java.util.Scanner;

class Student54
{
  public
    String fullName;
    int rollNum;
    double semPercentage;
    String collegeName;
    int collegeCode;
    Student54()
    {
      System.out.println("Student class is created!!\nIam a student\n");
    }
    protected void finalize() throws Throwable
    {
      System.out.println("The class is finalized\n");
    }
}

public class Student
{
  public static void main(String[] args)
  {
    Student54 vanitha=new Student54();;
    Scanner input=new Scanner(System.in);
    System.out.print("Enter your sweet name : ");
    vanitha.fullName=input.nextLine();
    System.out.print("Enter your rollNumber : ");
    vanitha.rollNum=input.nextInt();
    System.out.print("Enter your semPercentage : ");
    vanitha.semPercentage=input.nextDouble();
    input.nextLine();
    System.out.print("Enter your collegeName : ");
    vanitha.collegeName=input.nextLine();
    System.out.print("Enter your collegeCode : ");
    vanitha.collegeCode=input.nextInt();
    System.out.print("Name : "+vanitha.fullName+"\n");
    System.out.print("RollNumber : "+vanitha.rollNum+"\n");
    System.out.print("SemPercentage : "+vanitha.semPercentage+"\n");
    System.out.print("CollegeName : "+vanitha.collegeName+"\n");
    System.out.print("CollegeCode : "+vanitha.collegeCode+"\n");
    input.close();
  }
}

class Student
{
  public
    Student()
    {
      System.out.print("Student class is created!!\nIam a student\n");
    }
    Student(String fullName,double semPercentage)
    {
      System.out.print("FullName : "+fullName+"\n"+"SemPercentage : "+semPercentage);
    }
}

public class Constructor
{
  public static void main(String[] args)
  {
    @SuppressWarnings("unused")
    Student vanitha=new Student();
    @SuppressWarnings("unused")
    Student vanitha01=new Student("G.Vanitha",98);
  }
}

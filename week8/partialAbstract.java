abstract class Teacher{
    abstract void writeNotes(String StudentName);
    void correctNotes(String StudentName){
        System.out.println("The notes of the Student "+StudentName+" has been corrected");
    }
}

class Student extends Teacher{
    public void writeNotes(String StudentName){
        System.out.println("The Student "+StudentName+" has written the notes");
    }
}
public class Main{
    public static void main(String[] args){
        Student obj=new Student();
        obj.writeNotes("Vanitha");
        obj.correctNotes("Vanitha");
    }
}

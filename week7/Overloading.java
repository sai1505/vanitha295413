class Carrom
{
    void play(String name1,String name2)
    {
        System.out.println("The Carroms played by 2 members");
        System.out.println("1. "+name1+"\n"+"2. "+name2);
    }
    void play(String name1,String name2,String name3,String name4)
    {
        System.out.println("The Carroms played by 4 members");
        System.out.println("1. "+name1+"\n"+"2. "+name2+"\n3. "+name3+"\n"+"4. "+name4);
    }
}

public class Main 
{
    public static void main(String[] args) 
    {
        Carrom obj=new Carrom();
        obj.play("Vanitha","Renu");
        obj.play("Vanitha","lavanya","Moni","Vyshnavi");
    }
}

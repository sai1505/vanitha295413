class M2Tickets
{
    void buy(String name1,String name2)
    {
        System.out.println("The Movie tickets that are brought by the 2 viewers");
        System.out.println("1. "+name1+"\n"+"2. "+name2);
    }
}

class M3Tickets extends M2Tickets
{
    void buy(String name1,String name2,String name3)
    {
        System.out.println("The Movie tickets that are brought by the 3 viewers");
        System.out.println("1. "+name1+"\n"+"2. "+name2+"\n"+"3. "+name3);
    }
}

public class Main 
{
    public static void main(String[] args) 
    {
        M3Tickets obj=new M3Tickets();
        obj.buy("Vanitha","Renu");
        obj.buy("Vanitha","Renu","Moni");
    }
}

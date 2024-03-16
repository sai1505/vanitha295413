
class Bus
{
    void type()
    {
        System.out.println("Iam a Bus");
    }
    void type(){}
}

class Ship extends Bus
{
    void type()
    {
        System.out.println("Iam a Ship");
    }
}

public class Main
{
    public static void main(String[] args)
    {
        Ship obj=new Ship();
        obj.type();
    }
}

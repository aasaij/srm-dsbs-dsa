public class Main1
{
    int a; // instance variable
    static int x; //static variable or class variable
    
    static{
        System.out.println("This is static block");
        x = 10;
    }
    public static void main(int a){
        System.out.println("Three");
    }
    public static void main(String test){
        System.out.println("One");
    }
	public static void main(String[] args) {
	    int xy; // local variable
	    System.out.println("Two");
	    main("Testing");
	    main(10);
	}
}

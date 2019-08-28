import java.util.Scanner;

public class javaFirstfactorial
{
	public static void main(String args[])
	{
		// get a string from the user
		System.out.println("Enter an integer below");
			
		// Create a Scanner object
		Scanner usrObj = new Scanner(System.in);
		
		// get the integer
		int usrNum = usrObj.nextInt();
		usrObj.close();
		
		int product = 1;
		for (int i = 1; i <= usrNum; i++)
			product *= i;
		
		System.out.println("Product is: " + product);
	}
}

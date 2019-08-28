// Citations
// https://www.w3schools.com/java/java_user_input.asp


package javaFirstreverse;
import java.util.Scanner;

public class javaFirstreverse {
	public static void main(String args[]) 
    { 
        // get a string from the user
		System.out.println("main test");
		
		// Create a Scanner object
		Scanner usrStr = new Scanner(System.in);  
	    System.out.println("Enter String below:");

	    // Read user input	
	    String someString = usrStr.nextLine();
	    StringBuilder newString = new StringBuilder();
	    newString.append(someString);
	    newString = newString.reverse();
	    System.out.println(newString);
		
    } 
}

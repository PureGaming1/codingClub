import java.util.Scanner;

public class test {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter a String: ");

        String str = input.nextLine();
        String reverse = "";
        for (int i = str.length(); i > 0; i--) {
            reverse += str.charAt(i - 1);
        }
        System.out.println(reverse);
    }
}
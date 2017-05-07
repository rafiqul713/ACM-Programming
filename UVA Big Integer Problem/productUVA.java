package Big;
import java.util.Scanner;
import java.math.BigInteger;
public class productUVA {
public static void main(String[] args){
    String str1,str2;
    Scanner input= new Scanner(System.in);
    BigInteger multiply= new BigInteger("1");
    while(true){
        str1= input.nextLine();
        str2= input.nextLine();
        BigInteger b1= new BigInteger(str1);
        BigInteger b2= new BigInteger(str2);
        multiply = b1.multiply(b2);
        System.out.println(multiply);
        multiply= new BigInteger("1");
    }
}    
}

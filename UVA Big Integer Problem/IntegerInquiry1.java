package Big;
import java.math.BigInteger;
import java.util.Scanner;
public class IntegerInquiry1 {
public static void main(String[] args){
    String str="";
    BigInteger sum=BigInteger.ZERO;
    Scanner input= new Scanner(System.in);
    while(true){
        str= input.nextLine();
        BigInteger b= new BigInteger(str);
       if(b.compareTo(BigInteger.valueOf(0))==0){
           break;
       }
        sum= sum.add(b);
        System.out.println(sum);
    }
   
}    
}


package Big;
import java.math.BigInteger;
import java.util.*;

public class IntegerInquiryUVA {
public static void main(String[] args){
    
    //BigInteger b= new BigInteger();
    BigInteger sum = BigInteger.ZERO;
    String str="";
    Scanner input= new Scanner(System.in);
    while(true){
       
        str= input.next();
        if(str.equals("0")){
            break;
        }
        BigInteger s= new BigInteger(str);
        sum = sum.add(s);
        System.out.println(sum);
    }
    
}    
}

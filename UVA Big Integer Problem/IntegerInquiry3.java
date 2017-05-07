
package Big;
import java.util.Scanner;
import java.math.BigInteger;
public class IntegerInquiry3 {
    public static void main(String[] args){
        BigInteger b1,b2,sum;
        sum = BigInteger.ZERO;
        Scanner input= new Scanner(System.in);
        while(true){
            b1= input.nextBigInteger();
            if(b1.equals(BigInteger.ZERO)){
                break;
            }
            sum = sum.add(b1);
            System.out.println(sum);
        }
    }
}

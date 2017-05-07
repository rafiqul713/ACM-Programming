package Big;
import java.util.Scanner;
import java.math.BigInteger;
public class IntegerInquiry2 {
    public static void main(String[] args){
        String str;
        try{
        BigInteger sum= new BigInteger("0");
        Scanner input= new Scanner(System.in);
       
        while(!str.equals("0")){
            str= input.next();
            
            BigInteger big= new BigInteger(str);
            sum= sum.add(big);
            System.out.println(sum);
        }
        
        }
        catch(Exception e){
            
        }
    }
}

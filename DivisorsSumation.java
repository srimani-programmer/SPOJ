import java.util.Scanner;

/**
 * DivisorsSumation
 */
public class DivisorsSumation {
     int n,sum = 0;
     int a[];
     int b[];
    public void divisor(){
        Scanner in = new Scanner(System.in);
        n = in.nextInt();
        a = new int[n];
        b = new int[n];

        for(int i=0;i<n;i++){
            a[i] = in.nextInt();
        }

        for(int i=0;i<a.length;i++){
            for(int j=1;j<a[i];j++){
                if(a[i]%j == 0){
                    sum = sum + j;
                }
            }

            b[i] = sum;
            sum = 0;
        }

        for(int i=0;i<b.length;i++){
            System.out.println(b[i]);
        }
    }

    public static void main(String[] args) {
        DivisorsSumation d = new DivisorsSumation();
        d.divisor();
    }
}
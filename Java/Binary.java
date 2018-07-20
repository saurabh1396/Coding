import java.io.*;
import java.util.*;
class Binary{
  public static long BinaryToDecimal(long binaryNumber){

    long decimal = 0;
    long p = 0;
    while(true){
      if(binaryNumber == 0){
        break;
      } else {
          long temp = binaryNumber%10;
          decimal += temp*Math.pow(2, p);
          binaryNumber = binaryNumber/10;
          p++;
       }
    }
    return decimal;
  }
  public static void main(String []args){
    long n,m,max=0,max1=0, g=0,sum=0;
    //int arr[][]=new int[1000][1000];
    long nrr[]= new long[1000];
    Scanner in = new Scanner(System.in);
    n=in.nextInt();
    m=in.nextInt();
    for(int i=0;i<n;i++){
           nrr[i]=in.nextLong();
           long k=nrr[i];
           max= BinaryToDecimal(k);
            if(max>max1){
              max1=max;
              g=i;
            }
    }
    System.out.println(g+1);
  }
}

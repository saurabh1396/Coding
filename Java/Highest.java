import java.io.*;
import java.util.*;
class Highest{
  int check(int k,int arr[],int n){
   int p=0,s=1;
   for(int j=0;j<n-1;j++){
   for(int i=j;i<n;i++){
      p=p+arr[i];
   int a = p/s;
   if(a>=k){
      return s-1;
   }
   if(a<k && i==(n-1)){
     return s;
   }

   s=s+1;
 }}
   return 0;
  }
  public static void main(String []args){
    int n,q;
    int arr[] = new int[500000];
    int qrr[]=new int[500000];
    Highest ht=new Highest();
    Scanner in=new Scanner(System.in);
    n=in.nextInt();
    for(int i=0;i<n;i++){
      arr[i]=in.nextInt();
    }
  //Arrays.sort(arr);
    q=in.nextInt();
    for(int i=0;i<q;i++){
        qrr[i]=in.nextInt();
        int k=ht.check(qrr[i],arr,n);
        System.out.println(k);
    }


  }
}

import java.io.*;
import java.util.*;
class Largest{

   int replace(String str,int n){
   int c=(int)str.charAt(0),k=0;
   if(n>str.length()){
     n=str.length();
   }
  for(int i =1;i<n;i++)
{
  if(c>(int)str.charAt(i)){
   c=(int)str.charAt(i);
   k=i;
  }
}
    return k;
  }
  String remove(String str, int k){
String ktr="";
     int l= str.length();
     for(int i=0;i<l;i++){
       if(i!=k){
         ktr= ktr+str.charAt(i);
       }
     }

    return ktr;
  }
  public static void main(String []args){
    String str,kr="";int n;
    Scanner in =new Scanner(System.in);
    Largest lr=new Largest();
    str= in.nextLine();
    n=in.nextInt();
    int l=str.length();
    for(int i=0;i<l;i++){
      int k=lr.replace(str,n);
      kr=kr+str.charAt(k);
      str= lr.remove(str,k);
      //l=l-1;
    }
    System.out.println(kr);
  }
}

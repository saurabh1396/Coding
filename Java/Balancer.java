import java.io.*;
import java.util.*;
class Balancer{
  static String answer="1";
  static int z=1;
  static int count =0;
  static int del =0;
  String ExtractFirst(String str){
    String ftr="";
    for(int i=0;i<str.length();i++){
      if(str.charAt(i)!=' '){
        ftr= ftr+str.charAt(i);
      }
      else{
        i=1000;
        break;
      }
    }
    return ftr;
  }
  String ExtractSecond(String str){
    //String sstr="";char c;
    String sstr= str.replaceAll("[^0-9]", "");
    return sstr;
  }
   String  ExtractThird(String str){
    String ttr="";char c;
    for(int i=str.length()-1;i>=0;i--){
       c= str.charAt(i);
      if(c!=' '){
        ttr= c+ttr;
      }
      else{
        i=1000;
        break;
      }
    }
    return ttr;
  }
  String[] deleteArray(String arr[], String k){

     List<String> list = new ArrayList<String>(Arrays.asList(arr));
      list.remove(k);
      arr = list.toArray(new String[0]);
      return arr;
  }
  String calculate(String frr[], String srr[],String trr[], int l){
  String atr="";int k=0;
    for(int i=0;i<l;i++){
      k=0;
      for(int j=0;j<l;j++){
         if(frr[i].equals(trr[j])){
           k=1;
         }
      }
      if(k==0){
        k=i;
        break;
      }
    }
    z=z* Integer.parseInt(srr[k]);
     atr= atr+frr[k]+" = "+z;
      //z=z* Integer.parseInt(srr[k]);
      del=k;
  return atr;
  }
  public static void main(String[]args){
    Balancer bl = new Balancer();
    int s=0;//String answer;
    String frr[]= new String[100];
    String srr[]= new String[100];
    String trr[]= new String[100];
    Scanner in=new Scanner(System.in);
    String first= in.nextLine();
    for(int i=0;i<first.length();i++){
       if(first.charAt(i)==','){
         s=s+1;
       }
    }
    for(int i=0;i<s;i++){
       String rtr= in.nextLine();
       frr[i]= bl.ExtractFirst(rtr);
       srr[i]= bl.ExtractSecond(rtr);
       trr[i]= bl.ExtractThird(rtr);
       }
       count = s;
      for(int i=0;i<count;i++){

        answer=answer+bl.calculate(frr,srr,trr,s);
        s--;
      frr =  bl.deleteArray(frr, frr[del]);
      srr =bl.deleteArray(srr, srr[del]);
      if(i!=count-1)
       trr=bl.deleteArray(trr, trr[del]);

      }
      answer=answer+trr[0];
      System.out.println(answer);
  }

}

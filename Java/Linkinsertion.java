class Linkinsertion{
  Node head;
  class Node{
    int data;
    Node next;
    Node(int d){
     data=d;
     next=null;
    }
  }
  public void push(int new_data){
    Node new_node= new Node(new_data);
    new_node.next=head;
    head= new_node;
  }
  public void insertAfter(Node prev_node,int new_data){
    if(prev_node==null){
      System.out.println("previous node cannot be null");

    }
    Node new_node=new Node(new_data);
    new_node.next=prev_node.next;
    prev_node.next=new_node;
  }
  public void append(int new_data){
    Node new_node = new Node(new_data);
    if(head==null){
      head=new Node(new_data);
      return;
    }
    new_node.next=null;
    Node last= head;
    while(last.next!=null){
      last=last.next;
    }
    last.next=new_node;
  }
public void printList(){

Node tnode= head;
while(tnode!=null){
  System.out.println(tnode.data+" ");
  tnode=tnode.next;
}


}
public static void main(String[]args){

  Linkinsertion llist = new Linkinsertion();
llist.append(6);
llist.push(7);
llist.push(1);
llist.append(4);
llist.insertAfter(llist.head.next,8);
System.out.println("The list is");
llist.printList();
}




}

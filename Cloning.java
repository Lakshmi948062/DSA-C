import java.util.HashMap;

class Node 
{
    int val;
    Node next;
    Node random;

    Node(int val) 
    {
        this.val = val;
        this.next = null;
        this.random = null;
    }
}

class Solution 
{
    public Node copyRandomList(Node head) 
    {
        if(head == null)
            return null;
        HashMap<Node, Node> map = new HashMap<>();
        Node temp = head;
        while(temp != null)
        {
            map.put(temp, new Node(temp.val));
            temp = temp.next;
        }
        temp = head;
        while(temp != null)
        {
            map.get(temp).next = map.get(temp.next);
            map.get(temp).random = map.get(temp.random);
            temp = temp.next;
        }
        return map.get(head);
    }
    public void printList(Node head)
    {
        Node temp = head;
        while(temp != null)
        {
            int randomVal = (temp.random != null) ? temp.random.val : -1;
            System.out.println("Node: " + temp.val + " Random: " + randomVal);
            temp = temp.next;
        }
    }
    public static void main(String[] args) 
    {
        Solution s = new Solution();
        Node n1 = new Node(1);
        Node n2 = new Node(2);
        Node n3 = new Node(3);
        n1.next = n2;
        n2.next = n3;
        n1.random = n3;
        n2.random = n1;
        n3.random = n2;
        System.out.println("Original List:");
        s.printList(n1);
        Node copiedHead = s.copyRandomList(n1);
        System.out.println("\nCopied List:");
        s.printList(copiedHead);
    }
}
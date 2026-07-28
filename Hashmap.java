import java.util.HashMap;
class Main
{
    public static void main(String[] args) {
        HashMap<Integer, String> map = new HashMap<>();
        map.put(1, "Apple");
        map.put(2, "Mango");
        map.put(3, "Banana");
        System.out.println(map);
        System.out.println(map.get(2));
        map.remove(1);
        System.out.println(map);
        System.out.println(map.containsKey(3));
        System.out.println(map.size());
    }
}
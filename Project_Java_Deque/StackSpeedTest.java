import java.util.*;

public class StackSpeedTest {
    public void Main(int max) {
        long start = System.currentTimeMillis();

        Deque<Integer> stack = new LinkedList<>();

        for (int i = 0; i < max; i++) {
            stack.addFirst(i);
        }

        System.out.println(String.format("stack.addFirst(%d) done.", max));
        System.out.println(String.format("stack.contains(0) ... %s", Boolean.toString(stack.contains(0))));

        while (stack.isEmpty() == false) {
            /*
            int size = stack.size();
            int peekFirst = stack.peekFirst();
            int removeFirst = stack.removeFirst();
            System.out.println(formatter.format("size = %d, peekFirst = %d, removeFirst = %d\n", size, peekFirst, removeFirst));
            */
            stack.removeFirst();
        }

        System.out.println(String.format("stack.removeFirst(%d) done.", 0));
        System.out.println(String.format("stack.isEmpty()   ... %s", Boolean.toString(stack.isEmpty())));

        long end = System.currentTimeMillis();

        System.out.println("Execute time : " + (end - start)  + " [ms]\n");
    }
}

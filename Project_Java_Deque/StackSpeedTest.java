import java.util.*;

public class StackSpeedTest {
    public void Main(int max) {
        long start = System.currentTimeMillis();

        Deque<Integer> stack = new LinkedList<>();

        for (int i = 1; i <= max; i++) {
            stack.addFirst(i);
        }

        System.out.println(String.format("stack.addFirst(%d) done.", max));
        System.out.println(String.format("stack.contains(1) ... %s", Boolean.toString(stack.contains(1))));

        while (stack.isEmpty() == false) {
            /*
            int size = stack.size();
            int peekFirst = stack.peekFirst();
            int removeFirst = stack.removeFirst();
            System.out.println(formatter.format("size = %d, peekFirst = %d, removeFirst = %d\n", size, peekFirst, removeFirst));
            */
            stack.removeFirst();
        }

        System.out.println(String.format("stack.removeFirst() done."));
        System.out.println(String.format("stack.isEmpty()   ... %s", Boolean.toString(stack.isEmpty())));

        long end = System.currentTimeMillis();

        System.out.println("Execute time : " + (end - start)  + " [ms]\n");
    }
}

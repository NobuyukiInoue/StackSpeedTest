import java.util.*;

public class StackSpeedTest {
    public void Main(int max) {
        long start = System.currentTimeMillis();

        ArrayDeque<Integer> stack = new ArrayDeque<>();

        for (int i = 1; i <= max; i++) {
            stack.push(i);
        }

        System.out.println(String.format("stack.push(%d) done.", max));
        System.out.println(String.format("stack.contains(1) ... %s", Boolean.toString(stack.contains(1))));

        while (stack.isEmpty() == false) {
            /*
            int size = stack.size();
            int peek = stack.peek();
            int pop = stack.pop();
            System.out.println(formatter.format("size = %d, peek = %d, pop = %d\n", size, peek, pop));
            */
            stack.pop();
        }

        System.out.println(String.format("stack.pop() done."));
        System.out.println(String.format("stack.isEmpty()   ... %s", Boolean.toString(stack.isEmpty())));

        long end = System.currentTimeMillis();

        System.out.println("Execute time : " + (end - start)  + " [ms]\n");
    }
}

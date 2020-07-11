import java.util.*;

public class StackSpeedTest {
    public void Main(int max) {
        long start = System.currentTimeMillis();

        Stack<Integer> stack = new Stack<>();

        for (int i = 1; i <= max; i++) {
            stack.push(i);
        }

        System.out.println(String.format("stack.push(%d) done.", max));
        System.out.println(String.format("stack.Search(1) ... %d", stack.search(1)));

        while (stack.empty() == false) {
            /*
            int size = stack.size();
            int peek = stack.peek();
            int pop = stack.pop();
            System.out.println(formatter.format("size = %d, peek = %d, pop = %d\n", size, peek, pop));
            */
            stack.pop();
        }

        System.out.println(String.format("stack.pop() done."));
        System.out.println(String.format("stack.empty()   ... %s", Boolean.toString(stack.empty())));

        long end = System.currentTimeMillis();

        System.out.println("Execute time : " + (end - start)  + " [ms]\n");
    }
}

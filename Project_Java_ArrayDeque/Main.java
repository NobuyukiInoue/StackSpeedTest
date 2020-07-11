public class Main {
    public static void main(String[] args) {
        if (args.length < 1) {
            final String className = new Object(){}.getClass().getEnclosingClass().getName();
            System.out.println("Usage:" + className + " <max>");
            System.exit(1);
        }

        int max = 0;
        try {
            max = Integer.parseInt(args[0]);
        } catch (Exception e) {
            System.out.println(e);
            System.exit(1);
        }

        StackSpeedTest sst = new StackSpeedTest();
        sst.Main(max);
    }
}

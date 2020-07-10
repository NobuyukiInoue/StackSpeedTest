using System;

namespace Project_CS
{
    class Program
    {
        static void Main(string[] args)
        {
            if (args.Length < 1)
            {
                prlong_msg_and_exit();
            }

            int max;
            if (int.TryParse(args[0], out max) == false)
            {
                Console.WriteLine(args[0] + " in not numeric.");
                return;
            }

            max = int.Parse(args[0]);

            StackSpeedTest sst = new StackSpeedTest();
            sst.Main(max);
        }

        private static void prlong_msg_and_exit()
        {
            Console.WriteLine("\nUsage: dotnet run <max>");
            Environment.Exit(-1);
        }
    }
}

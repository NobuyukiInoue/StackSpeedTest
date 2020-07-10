using System;
using System.Collections.Generic;

namespace Project_CS
{
    public class StackSpeedTest
    {
        public void Main(int max)
        {
            System.Diagnostics.Stopwatch sw = new System.Diagnostics.Stopwatch();
            sw.Start();

            Stack<int> stack = new Stack<int>();
            
            for (int i = 0; i < max; i++)
            {
                stack.Push(i);
            }

            Console.WriteLine("stack.Push({0}) done.", max);
            Console.WriteLine("stack.Contains({0}) ... {1}", 0, stack.Contains(0));

            while (stack.Count > 0)
            {
            /*
                int size = stack.Count;
                int peek = stack.Peek();
                int pop = stack.Pop();
                Console.WriteLine("size = {0}, peek = {1}, pop = {2}", size, peek, pop);
            */
                stack.Pop();
            }

            Console.WriteLine("stack.Pop({0}) done.", 0);
            Console.WriteLine("stack.Count ... {0}", stack.Count);

            sw.Stop();

            Console.WriteLine("Execute time : " + (sw.ElapsedMilliseconds).ToString() + " [ms]\n");
        }
    }
}

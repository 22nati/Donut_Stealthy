// A Hello World! program in C#.
using System;
namespace HelloWorld
{
    class Hello 
    {
        static void Main() 
        {
            Console.WriteLine("I'm going to sleep");
            System.Threading.Thread.Sleep(5 * 60 * 1000); // Sleep for 5 minutes
            Console.WriteLine("Woke up, exiting now.");
        }
    }
}

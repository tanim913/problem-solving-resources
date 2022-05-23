using System;


class Program
{
    public static void Main(string[] args)
    {
        for(int i = 1; i<=30; i++)
        {
        Console.WriteLine(i+" : "+fib(i));
        }

    }

  static int fib(int n)
  {
    if (n<=2)
    {
      return 1;
    }
    else
    {
      return fib(n-1)+ fib(n-2);
    }
  }

}

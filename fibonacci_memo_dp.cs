using System;



class Program
{

  static int [] result = new int [100];
  static int fib(int n)
  {
    if (n<=2)
    {
      return 1;
    }
    else if (result[n] != -1)
    {
      return result[n];
    }
    else
    {
      result[n] = fib(n-1) + fib(n-2);
      return result[n];
    }
  }
  public static void Main(string[] args)
    {

        Array.Fill(result,-1);
        Console.WriteLine(fib(40));

    }


}

using System;

class Program
{
    public static void Main(string[] args)
    {
      int size =15;
      int[] ar = new int [size];
      Random  r = new Random();

      for ( int i = 0; i<size; i++)
      {
        ar[i] = r.Next(size)+7;
        Console.Write(ar[i]+" ");
      }
      Console.WriteLine("");

      for (int i = 1; i < size; i++)
      {
        int item = ar[i];
        int j = i-1;
        for (;j>=0 && ar[j]>item;)
        {
          ar[j+1] = ar[j];
          j --;
        }

        ar[j+1] = item;
        
      }
      foreach(int i in ar)
      {
        Console.Write(i+" ");
      }

      
    }

  

  

  
  }
   


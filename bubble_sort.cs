using System;

class Program
{
    public static void Main(string[] args)
    {
      int size =15,temp;
      int[] ar = new int [size];
      Random  r = new Random();

      for ( int i = 0; i<size; i++)
      {
        ar[i] = r.Next(size)+7;
        Console.Write(ar[i]+" ");
      }
      Console.WriteLine("");

      for (int i = 0; i<size; i++)
      {
        for (int j =0; j<size-i-1;j++)
        {
          if(ar[j]>ar[j+1])
          {
            temp = ar[j];
            ar[j]= ar[j+1];
            ar[j+1] = temp;
          }
        }
      }
      foreach(int i in ar)
      {
        Console.Write(i+" ");
      }

      
    }

  

  

  
  }
   


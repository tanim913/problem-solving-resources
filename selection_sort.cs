using System;

class Program
{
    public static void Main(string[] args)
    {
      int size =10,index_min, temp;
      int[] ar = new int [size];
      Random  r = new Random();

      for ( int i = 0; i<size; i++)
      {
        ar[i] = r.Next(size)+77;
        Console.Write(ar[i]+" ");
      }
      Console.WriteLine("");

      for (int i = 0; i< size-1; i++)
      {
        index_min = 0;
        for (int j = i+1; j<size; j++)
        {
          if(ar[j] < ar[index_min])
          {
            index_min = j;
          }
        }
        if(index_min != i)
        {
          temp = ar[i];
          ar[i]= ar[index_min];
          ar[index_min] = temp;
        }
      }

      for ( int i = 0; i<size; i++)
      {
        Console.Write(ar[i]+" ");
      }
      
    }

  

  
  }
   


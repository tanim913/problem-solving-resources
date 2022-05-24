using System;


class Program
{
    public static void Main(string[] args)
    {
        int size = 265;
        int[] aplh = new int [size];

        string x = Console.ReadLine();
        for(int i = 0; i<x.Length;i++)
        {
          aplh[x[i]]++;
        }

      int maxnum = int.MinValue;
      int maxidx = int.MinValue;
      int max2num = int.MinValue;
      int max2i = int.MinValue;

      for(int i=0; i<size; i++)
      {
        if(aplh[i] > maxnum){
          maxnum = aplh[i];
          maxidx = i;
        }
        if(aplh[i] > max2num && maxnum > max2num && i!= maxidx)
        {
          max2num = aplh[i];
          max2i = i;
        }


      }

      Console.WriteLine((char)maxidx + " : "+ maxnum);
      Console.WriteLine((char)max2i + " : "+ max2num);
    }

}

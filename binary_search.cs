using System;

class Program
{
    public static void Main(string[] args)
    {

      int[] ar= new int[10];
      Random r = new Random();

      for (int i = 0; i <10; i++)
      {
        ar[i] = r.Next(10)+50;
        Console.WriteLine(ar[i]);
      }
      Array.Sort(ar);
      int found = BinarySearch(ar,10, 55);
      Console.Write("Found : " +found);
    }

  static int BinarySearch(int[] ar, int n, int x)
   {
     int left, mid, right;
     left = 0;
     right = n-1;
     

     while(left < right)
     {
       mid = (left + right)/2;
       if(ar[mid] == x)
       {
         return mid;
       }
      if( ar[mid] < x)
       {
         left = mid+1;
       }
       if(ar[mid] > x){
         right = mid -1;
       }
     }
     return -1;
   }
   

}

/***
1 2 3 4 5 6 7 8 9 10 11

x=7
mid value is less than x
left = mid+1

x=4
mid value is greater than x 
right = mid-1

***/
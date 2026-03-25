using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace test2
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            int[] arr = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);

            int num = int.Parse(Console.ReadLine());
            int count = 0;

            for(int i = 0; i < arr.Length; i++)
            {
                if (arr[i] == num)
                    count++;
            }

            Console.WriteLine(count);
        }
    }
}
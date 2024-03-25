using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
int n = int.Parse(Console.ReadLine());

            StringBuilder allNum = new StringBuilder();
            for ( int i = 1; i <= n; i++)
            {
                allNum.AppendLine(i.ToString());
            }
            Console.WriteLine(allNum);
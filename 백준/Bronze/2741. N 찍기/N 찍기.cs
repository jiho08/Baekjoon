using System.Text;
int n = int.Parse(Console.ReadLine());

            StringBuilder allNum = new StringBuilder();
            for ( int i = 1; i <= n; i++)
            {
                allNum.AppendLine(i.ToString());
            }
            Console.WriteLine(allNum);
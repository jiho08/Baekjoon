using System.Text;

int n = int.Parse(Console.ReadLine());
            StringBuilder b = new StringBuilder(Console.ReadLine());
            b.Remove(0, n - 5);
            Console.Write(b);
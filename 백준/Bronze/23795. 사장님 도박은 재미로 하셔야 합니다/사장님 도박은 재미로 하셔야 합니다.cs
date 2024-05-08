int t = 0;
        while (true)
        {
            int n = int.Parse(Console.ReadLine());
            if (n == -1)
            {
                break;
            }
            t += n;

        }
        Console.WriteLine(t);
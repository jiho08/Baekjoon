while (true)
        {
            int[] n = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            if (n[0] == n[1] && n[0] == 0)
            {
                break;
            }
            Console.WriteLine(n[0] + n[1]);
        }
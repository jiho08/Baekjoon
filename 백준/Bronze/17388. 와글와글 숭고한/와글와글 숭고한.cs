int[] r = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
        int[] r2 = new int[3] { r[0], r[1], r[2] };
        string[] s = new string[3] { "Soongsil", "Korea", "Hanyang" };
        int c = -1;

        if (r[0] + r[1] + r[2] < 100)
        {
            Array.Sort(r);
            foreach (int item in r2)
            {
                c++;
                if (item == r[0])
                {
                    Console.Write(s[c]);
                }
            }
        }
        else
            Console.Write("OK");
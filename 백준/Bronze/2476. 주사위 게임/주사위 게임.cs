int n = int.Parse(Console.ReadLine());
        int[] v = new int[n];

        for (int i = 0; i < n; i++)
        {
            int[] r = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            Array.Sort(r);

            if (r[0] == r[1] && r[1] == r[2])
                v[i] = 10000 + r[0] * 1000;
            else if (r[0] == r[1] || r[1] == r[2])
                v[i] = 1000 + r[1] * 100;
            else
                v[i] = r[2] * 100;
        }
        int t = v.Max();
        Console.Write(t);
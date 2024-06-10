int[] r = new int[4];
        int[] r2 = new int[2];

        for (int i = 0; i < 4; i++)
        {
            r[i] = int.Parse(Console.ReadLine());
        }

        for (int i = 0; i < 2; i++)
        {
            r2[i] = int.Parse(Console.ReadLine());
        }

        Array.Sort(r);
        Array.Sort(r2);

        Console.Write(r[1] + r[2] + r[3] + r2[1]);
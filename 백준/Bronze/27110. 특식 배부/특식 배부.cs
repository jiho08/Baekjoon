int n = int.Parse(Console.ReadLine()), s = 0;
            int[] c = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);

            for (int i = 0; i < 3; ++i)
                s += c[i] > n ? n : c[i];

            Console.Write(s);
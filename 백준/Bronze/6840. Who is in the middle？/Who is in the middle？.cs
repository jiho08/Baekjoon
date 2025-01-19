var r = new int[3];

            for (var i = 0; i < 3; ++i)
                r[i] = int.Parse(Console.ReadLine());

            Array.Sort(r);

            Console.Write(r[1]);
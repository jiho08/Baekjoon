byte[] a = Array.ConvertAll(Console.ReadLine().Split('/'), byte.Parse);

            if (a[0] + a[2] < a[1] || a[1] == 0)
                Console.Write("hasu");
            else
                Console.Write("gosu");
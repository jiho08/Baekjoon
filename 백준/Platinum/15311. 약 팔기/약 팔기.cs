StreamWriter w = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));

            Console.ReadLine();

            Console.WriteLine(2000);

            for (int i = 0; i < 1000; ++i)
                w.Write("1 ");
            for (int i = 0; i < 1000; ++i)
                w.Write("1000 ");

            w.Close();
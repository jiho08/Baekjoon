StreamReader r = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
            StreamWriter w = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));

            int n = int.Parse(r.ReadLine());

            for (int i = 1; i <= n; ++i)
                w.WriteLine(i);

            r.Close();
            w.Close();
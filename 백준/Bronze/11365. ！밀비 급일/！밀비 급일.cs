StreamWriter w = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));
            StreamReader r = new StreamReader(new BufferedStream(Console.OpenStandardInput()));

            char[] s = r.ReadLine().ToArray();

            while (s[0] != 'E' && s[1] != 'N' && s[2] != 'D')
            {
                Array.Reverse(s);
                Console.WriteLine(s);
                s = r.ReadLine().ToArray();
            }
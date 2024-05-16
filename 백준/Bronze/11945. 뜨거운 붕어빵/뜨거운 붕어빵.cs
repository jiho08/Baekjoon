StreamReader sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
            StreamWriter sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));

            int[] nm = Array.ConvertAll(sr.ReadLine().Split(), int.Parse);
            int n = nm[0];
            
            for (int i = 0; i < n; i++)
            {
                var str = sr.ReadLine();
                sw.WriteLine(new string(str.Reverse().ToArray()));
            }

            sr.Close();
            sw.Close();
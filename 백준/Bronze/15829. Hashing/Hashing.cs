using System.Text;
using System.IO;

StreamReader r = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
            StreamWriter w = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));

            int n = int.Parse(r.ReadLine());
            StringBuilder b = new StringBuilder(r.ReadLine());

            long s = 0;

            for (int i = 0; i < n; ++i)
            {
                long l = b[i] - 96;
                long g = 1;

                for (int j = 0; j < i; ++j)
                {
                    g *= 31;
                    g %= 1234567891;
                }

                s += l * g;
                s %= 1234567891;
            }

            w.Write(s);

            r.Close();
            w.Close();
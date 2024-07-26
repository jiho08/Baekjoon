using System.Linq;
using System.IO;

StreamReader r = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
            StreamWriter w = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));

            string s = r.ReadLine();

            while (s != "0")
            {
                string p = new string(s.Reverse().ToArray());

                w.WriteLine(s == p ? "yes" : "no");

                s = r.ReadLine();
            }

            r.Close();
            w.Close();
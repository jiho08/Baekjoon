using System.IO;

StreamReader sr = new StreamReader(Console.OpenStandardInput());
            StreamWriter sw = new StreamWriter(Console.OpenStandardOutput());

            string strInput = sr.ReadLine();
            int nNum = int.Parse(strInput);

            for (int i = nNum; i >= 1; i--)
            {
                sw.WriteLine(i);
            }
            sw.Flush();
            sr.Close();
            sw.Close();
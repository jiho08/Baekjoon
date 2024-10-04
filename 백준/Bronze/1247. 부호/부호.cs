using System.Numerics;
StreamReader r = new StreamReader(new BufferedStream(Console.OpenStandardInput()));

            BigInteger b = new BigInteger();

            for (int i = 0; i < 3; ++i)
            {
                int n = int.Parse(r.ReadLine());
                b = 0;

                for (int j = 0; j < n; ++j)
                    b += BigInteger.Parse(r.ReadLine());

                Console.WriteLine(b > 0 ? '+' : b < 0 ? '-' : '0');
            }
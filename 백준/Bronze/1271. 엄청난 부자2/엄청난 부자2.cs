using System.Numerics;

BigInteger[] b = Array.ConvertAll(Console.ReadLine().Split(), BigInteger.Parse);
            Console.WriteLine(b[0] / b[1]);
Console.Write(b[0] % b[1]);
string[] str = Console.ReadLine().Split(' ');
            int[] istr = Array.ConvertAll(str, int.Parse);
            if (istr [0] > istr[1])
            {
                Console.WriteLine('>');
            }
            else if (istr [0] < istr[1])
            {
                Console.WriteLine('<');
            }
            else
            {
                Console.WriteLine("==");
            }
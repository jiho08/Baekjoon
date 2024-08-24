char[] c = Console.ReadLine().ToCharArray();

            Array.Sort(c);
            Array.Reverse(c);

            foreach (char i in c)
                Console.Write(i);
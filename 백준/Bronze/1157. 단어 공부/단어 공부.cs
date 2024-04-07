string s = Console.ReadLine().ToUpper();
            int[] a = new int[91];

            for (int i = 0; i < s.Length; i++)
            {
                a[s[i]]++;
            }
            int max = 0;
            char c = '?';
            for (int i = 'A'; i <= 'Z'; i++)
            {
                if (a[i] > max)
                {
                    max = a[i];
                    c = (char)i;
                }
                else if (a[i] == max)
                    c = '?';
            }
            Console.WriteLine(c);
string a = Console.ReadLine();
            string b = Console.ReadLine();
            string c = Console.ReadLine();

            string[] r = new string[] { a, b, c };

            int n = 0, m = 3;

            for (int i = 0; i < 3; ++i)
            {
                bool q = int.TryParse(r[i], out n);

                if (!q)
                    --m;
                else
                    break;
            }

            if ((n + m) % 3 == 0 && (n + m) % 5 == 0)
                Console.WriteLine("FizzBuzz");
            else if ((n + m) % 3 == 0)
                Console.WriteLine("Fizz");
            else if ((n + m) % 5 == 0)
                Console.WriteLine("Buzz");
            else
                Console.WriteLine(n + m);
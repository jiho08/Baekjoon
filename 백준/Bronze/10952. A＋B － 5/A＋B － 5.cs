while (true)
            {
                string [] s = Console.ReadLine().Split();
                int a = int.Parse(s[0]);
                int b = int.Parse(s[1]);
                if (a+b==0)
                {
                    break;
                }
                Console.WriteLine(a + b);       
            }
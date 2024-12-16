int n = int.Parse(Console.ReadLine()), count = 0;

            for (int i = n; i > 0; --i)
            {
                char[] arr = i.ToString().ToCharArray();
                int sum = 0;

                foreach (var item in arr)
                    sum += item - '0';

                if (i % sum == 0)
                    ++count;
            }

            Console.Write(count);
int n = int.Parse(Console.ReadLine());
            float a = n - n * 0.22f;
            float b = n - (n * 0.2f * 0.22f);
            Console.WriteLine($"{a} {b}");
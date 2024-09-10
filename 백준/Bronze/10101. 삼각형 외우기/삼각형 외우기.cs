byte a = byte.Parse(Console.ReadLine());
            byte b = byte.Parse(Console.ReadLine());
            byte c = byte.Parse(Console.ReadLine());

            if (a == 60 && a == b && a == c)
                Console.WriteLine("Equilateral");
            else if (a + b + c == 180 && (a == b || a == c || b == c))
                Console.WriteLine("Isosceles");
            else if (a + b + c == 180)
                Console.WriteLine("Scalene");
            else
                Console.WriteLine("Error");
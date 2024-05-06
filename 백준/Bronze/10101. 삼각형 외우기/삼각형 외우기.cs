int a = int.Parse(Console.ReadLine());
        int b = int.Parse(Console.ReadLine());
        int c = int.Parse(Console.ReadLine());
        if (a == 60 && a == b && b == c)
        {
            Console.WriteLine("Equilateral");
        }
        else if (a + b + c == 180 && a == b || a == c || b == c)
        {
            Console.WriteLine("Isosceles");
        }
        else if (a + b + c == 180)
        {
            Console.WriteLine("Scalene");
        }
        else
        {
            Console.WriteLine("Error");
        }
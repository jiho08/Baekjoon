int a = int.Parse(Console.ReadLine());
        int b = int.Parse(Console.ReadLine());

        if (a > 2)
        {
            Console.Write("After");
        }
        else if (a < 2)
        {
            Console.Write("Before");
        }
        else
        {
            if (b > 18)
            {
                Console.Write("After");
            }
            else if (b < 18)
            {
                Console.Write("Before");
            }
            else
            {
                Console.Write("Special");
            }
        }
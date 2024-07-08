int n = int.Parse(Console.ReadLine());

            if (n >= 380 && n < 425)
                Console.Write("Violet");
            else if (n >= 425 && n < 450)
                Console.Write("Indigo");
            else if (n >= 450 && n < 495)
                Console.Write("Blue");
            else if (n >= 495 && n < 570)
                Console.Write("Green");
            else if (n >= 570 && n < 590)
                Console.Write("Yellow");
            else if (n >= 590 && n < 620)
                Console.WriteLine("Orange");
            else
                Console.WriteLine("Red");
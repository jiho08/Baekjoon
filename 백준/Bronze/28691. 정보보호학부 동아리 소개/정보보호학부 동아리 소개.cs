char c = char.Parse(Console.ReadLine());

            switch (c)
            {
                case 'M':
                    Console.Write("MatKor");
                    break;
                case 'W':
                    Console.Write("WiCys");
                    break;
                case 'C':
                    Console.Write("CyKor");
                    break;
                case 'A':
                    Console.Write("AlKor");
                    break;
                case '$':
                    Console.Write("$clear");
                    break;
            }
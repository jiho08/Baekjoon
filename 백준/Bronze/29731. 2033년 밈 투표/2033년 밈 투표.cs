int n = int.Parse(Console.ReadLine());
            bool b = false;

            for (int i = 0; i < n; ++i)
            {
                string s = Console.ReadLine();

                switch (s)
                {
                    case "Never gonna give you up":
                    case "Never gonna let you down":
                    case "Never gonna run around and desert you":
                    case "Never gonna make you cry":
                    case "Never gonna say goodbye":
                    case "Never gonna tell a lie and hurt you":
                    case "Never gonna stop":
                        break;

                    default:
                        b = true;
                        break;
                }
            }

            if (b)
                Console.Write("Yes");
            else
                Console.Write("No");
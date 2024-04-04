string[] n = Console.ReadLine().Split();
            string t = "";
            for (int i = 0; i < n.Length; i++)
            {
                t += n[i];
            }
            switch (t)
            {
                case "12345678":
                    Console.WriteLine("ascending");
                    break;
                case "87654321":
                    Console.WriteLine("descending");
                    break;
                default:
                    Console.WriteLine("mixed");
                    break;
            }
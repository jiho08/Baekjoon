string[] s = Console.ReadLine().Split();
            float p = 3.1415927f;
            int c = 0;

            while (s[1] != "0")
            {
                float d = float.Parse(s[0]);
                int r = int.Parse(s[1]);
                float t = float.Parse(s[2]);

                string x = $"{d * r * p / 12 / 5280:f2}";
                string y = $"{d * r * p / t / 63360 * 3600:f2}";

                Console.WriteLine($"Trip #{++c}: {x} {y}");
                s = Console.ReadLine().Split();
            }
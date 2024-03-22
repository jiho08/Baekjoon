string[] threeD = Console.ReadLine().Split();
            int[] dice = Array.ConvertAll(threeD, int.Parse);
            Array.Sort(dice);

            if ((dice[0] == dice[1]) && (dice[1] == dice[2]) && (dice[0] == dice[2]))
            {
                Console.WriteLine(10000 + dice[0] * 1000);
            }
            else if ((dice[0] == dice[1]) || (dice[1] == dice[2]) || (dice[0] == dice[2]))
            {
                Console.WriteLine(1000 + dice[1] * 100);
            }
            else
            {
                Console.WriteLine(dice[2] * 100);
            }
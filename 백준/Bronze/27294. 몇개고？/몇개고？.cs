int[] n = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);

        if (n[0] <= 11)
            Console.Write(280);
        else if (n[0] <= 16)
            if (n[1] == 0)
                Console.Write(320);
            else
                Console.Write(280);
        else
            Console.Write(280);
int[] a = Array.ConvertAll(Console.ReadLine().Split(),int.Parse);
        int[] b = Array.ConvertAll(Console.ReadLine().Split(),int.Parse);

        int s = a[0] + a[1] + a[2] + a[3];
        int t = b[0] + b[1] + b[2] + b[3];

        Console.Write(s > t ? s : t);
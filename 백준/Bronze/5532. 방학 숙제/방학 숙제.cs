int l = int.Parse(Console.ReadLine());
        int a = int.Parse(Console.ReadLine());
        int b = int.Parse(Console.ReadLine());
        int c = int.Parse(Console.ReadLine());
        int d = int.Parse(Console.ReadLine());

        int n = 0;
        int m = 0;

        for (int i = c; i < a;)
        {
            i += c;
            n++;
        }
        for (int i = d; i < b;)
        {
            i += d;
            m++;
        }
        if (n >= m)
            Console.Write(l - ++n);
        else
            Console.Write(l - ++m);
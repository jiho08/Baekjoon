int n=int.Parse(Console.ReadLine());
        int c=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<n-1;j++)
                c++;
        Console.Write(c);
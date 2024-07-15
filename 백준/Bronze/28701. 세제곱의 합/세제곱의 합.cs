var n = int.Parse(Console.ReadLine()!);
      var sum = n * (n + 1) / 2;
      var sumSqrd = sum * sum;

      int sumOfCubed = 0;
      for (int i = 1; i <= n; i++)
        sumOfCubed += (int)Math.Pow(i, 3);

      Console.WriteLine(sum);
      Console.WriteLine(sumSqrd);
      Console.WriteLine(sumOfCubed);
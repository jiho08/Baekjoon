var input = Console.ReadLine()!.Split(' ');
      var n = int.Parse(input[0]);
      var m = int.Parse(input[1]);

      var money = new int[n + m + 1];

      input = Console.ReadLine()!.Split(' ');
      for (int i = 1; i <= n; i++)
        money[i] = int.Parse(input[i - 1]);

      for (int i = 1; i <= n; i++) {
        input = Console.ReadLine()!.Split(' ');
        for (int j = 1; j <= n + m; j++) {
          var tmp = int.Parse(input[j - 1]);
          money[i] -= tmp;
          money[j] += tmp;
        }
      }

      for (int i = 1; i <= n + m; i++)
        Console.Write(money[i] + " ");
      Console.WriteLine();
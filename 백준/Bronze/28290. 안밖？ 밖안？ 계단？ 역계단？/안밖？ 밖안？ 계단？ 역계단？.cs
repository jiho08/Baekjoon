string s = Console.ReadLine();

            switch (s)
            {
                case "fdsajkl;":
                case "jkl;fdsa":
                    Console.Write("in-out");
                    break;
                case "asdf;lkj":
                case ";lkjasdf":
                    Console.Write("out-in");
                    break;
                case "asdfjkl;":
                    Console.Write("stairs");
                    break;
                case ";lkjfdsa":
                    Console.Write("reverse");
                    break;
                default:
                    Console.Write("molu");
                    break;
            }
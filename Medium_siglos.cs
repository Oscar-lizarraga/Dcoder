using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MediumDcoder
{
    class Program
    {

        static void Main(string[] args)
        {
            int? n;
            int t = 0;
            do
            {
                n = null;
                n = Convert.ToInt32(Console.ReadLine());
            } while (n < 1 || n > 3000);

            int siglo = Convert.ToInt32((n-1) / 100);
            t = siglo % 10;

            switch (t)
            {
                case 0:
                    Console.Write((siglo + 1).ToString() + "st");
                    break;
                case 1:
                    Console.Write((siglo + 1).ToString() + "nd");
                    break;
                case 2:
                    Console.Write((siglo + 1).ToString() + "rd");
                    break;
                default:
                    Console.Write((siglo + 1).ToString() + "th");
                    break;
            }
            Console.ReadKey();
        }
    }
}

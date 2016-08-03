using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Security.Cryptography;
using System.Text;
using System.Threading.Tasks;

namespace Hasher
{
    class Program
    {
        public static string filePath = Directory.GetCurrentDirectory() + @"\@DayzAwaken\";
        public static string checksumFilePath = Directory.GetCurrentDirectory() + @"\hashes";

        public static string RelativePath(string absPath, string relTo)
        {
            string[] absDirs = absPath.Split('\\');
            string[] relDirs = relTo.Split('\\');
            // Get the shortest of the two paths 
            int len = absDirs.Length < relDirs.Length ? absDirs.Length : relDirs.Length;
            // Use to determine where in the loop we exited 
            int lastCommonRoot = -1; int index;
            // Find common root 
            for (index = 0; index < len; index++)
            {
                if (absDirs[index] == relDirs[index])
                    lastCommonRoot = index;
                else break;
            }
            // If we didn't find a common prefix then throw 
            if (lastCommonRoot == -1)
            {
                throw new ArgumentException("Paths do not have a common base");
            }
            // Build up the relative path 
            StringBuilder relativePath = new StringBuilder();
            // Add on the .. 
            for (index = lastCommonRoot + 1; index < absDirs.Length; index++)
            {
                if (absDirs[index].Length > 0) relativePath.Append("..\\");
            }
            // Add on the folders 
            for (index = lastCommonRoot + 1; index < relDirs.Length - 1; index++)
            {
                relativePath.Append(relDirs[index] + "\\");
            }
            relativePath.Append(relDirs[relDirs.Length - 1]);
            return relativePath.ToString();
        }
        static void Main(string[] args)
        {
            System.IO.StreamWriter output = new StreamWriter(checksumFilePath);
            using (var md5 = MD5.Create())
            {
                Console.WriteLine(filePath);
                foreach (var file in Directory.GetFiles(filePath, "*", SearchOption.AllDirectories))
                {
                    var stream = File.OpenRead(file);
                    var entry = string.Format("{0}:{1}", RelativePath(filePath, file), BitConverter.ToString(md5.ComputeHash(stream)).Replace("-", string.Empty));
                    Console.WriteLine(file);
                    Console.WriteLine(entry);
                    output.WriteLine(entry);
                }
            }

            output.Close();
        }
    }
}

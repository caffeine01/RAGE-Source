using System;
using System.Diagnostics;
using System.IO;
using System.Net;
using System.Threading;

namespace RAGE_Bootstrapper
{
    class Program
    {
        static void Main(string[] args)
        {
            Directory.SetCurrentDirectory(AppDomain.CurrentDomain.BaseDirectory);
            Console.Title = "RAGE Bootstrapper";
            Console.WriteLine(" -- Welcome to the RAGE Bootstrapper! --");
            Thread.Sleep(2000);

            if (Process.GetProcessesByName("RAGE").Length > 0)
            {
                Console.WriteLine(" - Please terminate any running instances of RAGE before running the bootstrapper!");
                Thread.Sleep(5000);
                Environment.Exit(0);
            }

            if (!File.Exists("RAGE.exe")) //checks if RAGE.exe does NOT exist
            {
                WebClient WebClient = new WebClient(); //creates a webclient
                string d = " - Done!";
                Console.WriteLine(" -- Downloading RAGE.exe... Please wait! --");
                Thread.Sleep(1000);
                Console.WriteLine(" - RAGE.exe...");
                WebClient.DownloadFile("https://github.com/Juicyexe/RAGE/raw/main/RAGE.exe", "RAGE.exe"); //downloads exe as "Rage.exe"
                Thread.Sleep(1000);
                Console.WriteLine(d);
                WebClient.Dispose(); //disposes of the webclient
                Thread.Sleep(1000);
            }
            else if (File.Exists("RAGE.exe")) //checks if RAGE.exe DOES exist
            {
                FileVersionInfo rexe = FileVersionInfo.GetVersionInfo(AppDomain.CurrentDomain.BaseDirectory + "RAGE.exe");
                string thisversion = rexe.FileVersion;
                string d = " - Done!";
                WebClient WebClient1 = new WebClient(); //creates a webclient
                Thread.Sleep(1000);
                Console.WriteLine(" - Checking RAGE.exe version...");
                WebClient1.DownloadFile("https://github.com/Juicyexe/RAGE/raw/main/RAGE.exe", "RAGE.tmp");
                FileVersionInfo rtmp = FileVersionInfo.GetVersionInfo(AppDomain.CurrentDomain.BaseDirectory + "RAGE.tmp");
                string readversion = rtmp.FileVersion;
                WebClient1.Dispose(); //disposes of the webclient
                Thread.Sleep(1000);
                Console.WriteLine(d);

                try
                {
                    if (readversion == thisversion)
                    {
                        Thread.Sleep(1000);
                        Console.WriteLine(" - RAGE.exe is up to date, version " + readversion);
                        Thread.Sleep(1000);
                        File.Delete("RAGE.tmp");
                        Thread.Sleep(1000);
                    }
                    else
                    {
                    }
                }
                catch (System.ComponentModel.Win32Exception)
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine(" -- OOPSIE! RAGE.exe is either corrupt OR your AV deleted it! --");
                    Thread.Sleep(1000);
                    Console.WriteLine(" - Remember to disable your AV! ");
                    Console.ForegroundColor = ConsoleColor.White;
                    Console.WriteLine("Press any key to re-download RAGE.exe...");
                    Console.ReadKey();
                    WebClient WebClient = new WebClient();
                    Console.WriteLine(" -- Downloading RAGE.exe... Please wait! --");
                    Thread.Sleep(1000);
                    Console.WriteLine(" - RAGE.exe...");
                    WebClient.DownloadFile("https://github.com/Juicyexe/RAGE/raw/main/RAGE.exe", "RAGE.exe"); //downloads exe as "Rage.exe"
                    Thread.Sleep(1000);
                    Console.WriteLine(d);
                    WebClient.Dispose(); //disposes of the webclient
                }

                if (readversion != thisversion) //checks if readversion is NOT EQUAL to thisversion
                {
                    WebClient WebClient = new WebClient(); //creates a webclient
                    Console.WriteLine(" - You are on RAGE.exe version " + thisversion);
                    Thread.Sleep(1000);
                    Console.WriteLine(" - Latest version is " + readversion);
                    Thread.Sleep(1000);
                    Console.WriteLine(" -- Updating RAGE.exe... Please wait! --");
                    Thread.Sleep(1000);
                    Console.WriteLine(" - RAGE.exe...");
                    WebClient.DownloadFile("https://github.com/Juicyexe/RAGE/raw/main/RAGE.exe", "RAGE.exe"); //downloads exe as "Rage.exe"
                    Thread.Sleep(1000);
                    Console.WriteLine(d);
                    WebClient.Dispose(); //disposes of the webclient
                }

            }

            if (!File.Exists("RAGE.dll")) //checks if RAGE.dll does NOT exist
            {
                WebClient WebClient = new WebClient(); //creates a webclient
                string d = " - Done!";
                Console.WriteLine(" -- Downloading RAGE.dll... Please wait! --");
                Thread.Sleep(1000);
                Console.WriteLine(" - RAGE.dll...");
                WebClient.DownloadFile("https://github.com/Juicyexe/RAGE/raw/main/RAGE.dll", "RAGE.dll"); //downloads exe as "Rage.exe"
                Thread.Sleep(1000);
                Console.WriteLine(d);
                WebClient.Dispose(); //disposes of the webclient
                Thread.Sleep(1000);
                Console.WriteLine(" -- Welcome to RAGE! --");
                Process.Start("RAGE.exe");
                Thread.Sleep(5000);
                Environment.Exit(0);
            }
            else if (File.Exists("RAGE.dll")) //checks if RAGE.dll DOES exist
            {
                FileVersionInfo rexe = FileVersionInfo.GetVersionInfo(AppDomain.CurrentDomain.BaseDirectory + "RAGE.dll");
                string thisversion = rexe.FileVersion;
                string d = " - Done!";
                WebClient WebClient1 = new WebClient(); //creates a webclient
                Thread.Sleep(1000);
                Console.WriteLine(" - Checking RAGE.dll version...");
                WebClient1.DownloadFile("https://github.com/Juicyexe/RAGE/raw/main/RAGE.dll", "RAGE.tmp");
                FileVersionInfo rtmp = FileVersionInfo.GetVersionInfo(AppDomain.CurrentDomain.BaseDirectory + "RAGE.tmp");
                string readversion = rtmp.FileVersion;
                WebClient1.Dispose(); //disposes of the webclient
                Thread.Sleep(1000);
                Console.WriteLine(d);
                try
                {
                    if (readversion == thisversion)
                    {
                        Thread.Sleep(1000);
                        Console.WriteLine(" - RAGE.dll is up to date, version " + readversion);
                        Thread.Sleep(1000);
                        File.Delete("RAGE.tmp");
                        Console.WriteLine(" -- Welcome to RAGE! --");
                        Thread.Sleep(1000);
                        Process.Start("RAGE.exe"); //starts Rage.exe
                        Thread.Sleep(5000);
                        Environment.Exit(0);
                    }
                    else
                    {
                    }
                }
                catch (System.ComponentModel.Win32Exception)
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    Console.WriteLine(" -- OOPSIE! RAGE.dll is either corrupt OR your AV deleted it! --");
                    Thread.Sleep(1000);
                    Console.WriteLine(" - Remember to disable your AV! ");
                    Console.ForegroundColor = ConsoleColor.White;
                    Console.WriteLine("Press any key to re-download RAGE.dll...");
                    Console.ReadKey();
                    WebClient WebClient = new WebClient();
                    Console.WriteLine(" -- Downloading RAGE.dll... Please wait! --");
                    Thread.Sleep(1000);
                    Console.WriteLine(" - RAGE.dll...");
                    WebClient.DownloadFile("https://github.com/Juicyexe/RAGE/raw/main/RAGE.dll", "RAGE.dll"); //downloads dll as "Rage.dll"
                    Thread.Sleep(1000);
                    Console.WriteLine(d);
                    WebClient.Dispose(); //disposes of the webclient
                }

                if (readversion != thisversion) //checks if readversion is NOT EQUAL to thisversion
                {
                    WebClient WebClient = new WebClient(); //creates a webclient
                    Console.WriteLine(" - You are on RAGE.dll version " + thisversion);
                    Thread.Sleep(1000);
                    Console.WriteLine(" - Latest version is " + readversion);
                    Thread.Sleep(1000);
                    Console.WriteLine(" -- Updating RAGE.dll... Please wait! --");
                    Thread.Sleep(1000);
                    Console.WriteLine(" - RAGE.dll...");
                    WebClient.DownloadFile("https://github.com/Juicyexe/RAGE/raw/main/RAGE.dll", "RAGE.dll"); //downloads dll as "Rage.dll"
                    Thread.Sleep(1000);
                    Console.WriteLine(d);
                    WebClient.Dispose(); //disposes of the webclient
                    Thread.Sleep(1000);
                    Console.WriteLine(" -- Welcome to RAGE! --");
                    Process.Start("RAGE.exe");
                    Thread.Sleep(5000);
                    Environment.Exit(0);
                }

            }
        }
    }
}




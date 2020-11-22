using System;
using System.Windows.Forms;
using System.Net;
using System.Diagnostics;
using System.IO;

namespace Rage_Bootstrapper
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            Shown += Form1_Shown;
        }


        private void Form1_Load(object sender, EventArgs e) // black jesus
        {

        }

        private void Form1_Shown(object sender, EventArgs e)
        {
            if (Process.GetProcessesByName("RAGE").Length > 0)
            {
                string message = "Please terminate any running instances of RAGE before running the bootstrapper!";
                MessageBox.Show(message);
                Environment.Exit(0);
            }

            if (!File.Exists("RAGE.dll")) //checks if rage.dll does NOT exist
            {
                WebClient WebClient = new WebClient(); //creates a webclient
                WebClient.DownloadFile("https://github.com/Juicyexe/RAGE/raw/main/RAGE.dll", "RAGE.dll"); //downloads rage dll
                WebClient.Dispose(); //disposes of the webclient
            }

            if (!File.Exists("FastColoredTextBox.dll")) //checks if FCTB.dll does NOT exist
            {
                WebClient WebClient = new WebClient(); //creates a webclient
                WebClient.DownloadFile("https://github.com/Juicyexe/RAGE/raw/main/FastColoredTextBox.dll", "FastColoredTextBox.dll"); //downloads FCTB dll
                WebClient.Dispose(); //disposes of the webclient
            }       

            if (!File.Exists("ver.txt")) //checks if ver.txt does NOT exist
            {
                WebClient WebClient = new WebClient(); //creates a webclient
                WebClient.DownloadFile("https://github.com/Juicyexe/RAGE/raw/main/RAGE.exe", "RAGE.exe"); //downloads exe as "Rage.exe"
                WebClient.DownloadFile("https://raw.githubusercontent.com/Juicyexe/RAGE/main/ver.txt", "ver.txt"); //downloads version as ver.txt
                WebClient.DownloadFile("https://github.com/Juicyexe/RAGE/raw/main/RAGE.dll", "RAGE.dll"); //downloads rage dll
                WebClient.DownloadFile("https://github.com/Juicyexe/RAGE/raw/main/FastColoredTextBox.dll", "FastColoredTextBox.dll"); //downloads FCTB dll
                WebClient.Dispose(); //disposes of the webclient
                Process.Start("RAGE.exe"); //starts Rage.exe
            }
            else if (File.Exists("ver.txt")) //checks if ver.txt DOES exist
            {
                string thisversion = File.ReadAllText("ver.txt");
                WebClient WebClient1 = new WebClient(); //creates a webclient
                string readversion = WebClient1.DownloadString("https://raw.githubusercontent.com/Juicyexe/RAGE/main/ver.txt"); //reads the version from the txt on the github
                WebClient1.Dispose(); //disposes of the webclient

               if (readversion == thisversion)
                {
                    Process.Start("RAGE.exe");
                }

                if (readversion != thisversion) //checks if readversion is NOT EQUAL to thisversion
                {
                    WebClient WebClient = new WebClient(); //creates a webclient
                    WebClient.DownloadFile("https://github.com/Juicyexe/RAGE/raw/main/RAGE.exe", "RAGE.exe"); //downloads exe as "Rage.exe"
                    WebClient.DownloadFile("https://raw.githubusercontent.com/Juicyexe/RAGE/main/ver.txt", "ver.txt"); //downloads version as ver.txt
                    WebClient.DownloadFile("https://github.com/Juicyexe/RAGE/raw/main/RAGE.dll", "RAGE.dll"); //downloads rage dll
                    WebClient.Dispose(); //disposes of the webclient
                    Process.Start("RAGE.exe"); //starts Rage.exe
                }

            }
            else // if all else fails!
            {
                if (File.Exists("RAGE.exe")) //checks if Rage.exe exists
                {
                    Process.Start("RAGE.exe"); //starts Rage.exe
                }
                else //if Rage.exe doesn't exist
                {
                    WebClient WebClient = new WebClient(); //creates a webclient
                    WebClient.DownloadFile("https://github.com/Juicyexe/RAGE/raw/main/RAGE.exe", "RAGE.exe"); //downloads exe as "Rage.exe"
                    WebClient.DownloadFile("https://raw.githubusercontent.com/Juicyexe/RAGE/main/ver.txt", "ver.txt"); //downloads version as ver.txt
                    WebClient.DownloadFile("https://github.com/Juicyexe/RAGE/raw/main/RAGE.dll", "RAGE.dll"); //downloads rage dll
                    WebClient.DownloadFile("https://github.com/Juicyexe/RAGE/raw/main/FastColoredTextBox.dll", "FastColoredTextBox.dll"); //downloads FCTB dll
                    WebClient.Dispose(); //disposes of the webclient
                    Process.Start("RAGE.exe"); //starts Rage.exe
                }
              
            }
            Environment.Exit(0);
        }   
    }

}

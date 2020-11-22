using System;
using System.Windows.Forms;
using System.Net;
using System.Diagnostics;
using System.IO;

namespace RAGE
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            Shown += Form1_Shown;
        }

        private void Form1_Load(object sender, EventArgs e)
        {
 
        }

        private void Form1_Shown(object sender, EventArgs e)
        {
            if (!File.Exists("ver.txt")) //checks if ver.txt does NOT exist
            {
                string message = "Unable to find version info. Launch RAGE using the bootstrapper next time to avoid this error!";
                MessageBox.Show(message);
                Environment.Exit(0);
            }

            if (File.Exists("ver.txt")) //checks if ver.txt DOES exist
            {
                string thisversion = File.ReadAllText("ver.txt");
                WebClient WebClient1 = new WebClient(); //creates a webclient
                string readversion = WebClient1.DownloadString("https://raw.githubusercontent.com/Juicyexe/RAGE/main/ver.txt"); //reads the version from the txt on the github
                WebClient1.Dispose(); //disposes of the webclient

                if (readversion != thisversion) //checks if readversion is NOT EQUAL to thisversion
                {
                    string message = "It appears that your version of RAGE is out of date. Launch RAGE using the bootstrapper next time to avoid this error!";
                    MessageBox.Show(message);
                    Environment.Exit(0);
                }
            }

            if (!File.Exists("RAGE.dll")) //checks if rage.dll does NOT exist
            {
                string message = "Unable to find RAGE.dll. Launch RAGE using the bootstrapper next time to avoid this error!";
                MessageBox.Show(message);
                Environment.Exit(0);
            }

            if (!File.Exists("FastColoredTextBox.dll")) //checks if FCTB.dll does NOT exist
            {
                string message = "Unable to find FastColoredTextBox.dll. Launch RAGE using the bootstrapper next time to avoid this error!";
                MessageBox.Show(message);
                Environment.Exit(0);
            }
        }

                       public const int WM_NCLBUTTONDOWN = 0xA1;
        public const int HT_CAPTION = 0x2;

        [System.Runtime.InteropServices.DllImportAttribute("user32.dll")]
        public static extern int SendMessage(IntPtr hWnd,
                         int Msg, int wParam, int lParam);
        [System.Runtime.InteropServices.DllImportAttribute("user32.dll")]
        public static extern bool ReleaseCapture();

        private void TitleDraggable_MouseDown(object sender, MouseEventArgs e)
        {
            if (e.Button == MouseButtons.Left)
            {
                ReleaseCapture();
                SendMessage(Handle, WM_NCLBUTTONDOWN, HT_CAPTION, 0);
            }
        }

        private void CloseButton_Click(object sender, EventArgs e) => Environment.Exit(0);

        private void MinimizeButton_Click(object sender, EventArgs e) => WindowState = FormWindowState.Minimized;

        private void Inject_Click(object sender, EventArgs e) => Functions.Inject();

        private void ExecuteButton_Click(object sender, EventArgs e)
        {
            if (NamedPipes.NamedPipeExist(NamedPipes.luapipename))//check if the pipe exist
            {
                NamedPipes.LuaPipe(fastColoredTextBox1.Text);//lua pipe function to send the script
            }
            else
            {
                MessageBox.Show($"Inject {Functions.exploitdllname} before Using this!", "Error", MessageBoxButtons.OK, MessageBoxIcon.Exclamation);//if the pipe can't be found a messagebox will appear
                return;
            }
        }

        private void ClearButton_Click(object sender, EventArgs e) => fastColoredTextBox1.Clear();//Clear the MonacoEditor

        private void OpenButton_Click(object sender, EventArgs e)
        {
            if (Functions.openfiledialog.ShowDialog() == DialogResult.OK)//check if the user clicked Ok/open
            {
                try
                {
                    fastColoredTextBox1.OpenFile(File.ReadAllText(Functions.openfiledialog.FileName));
                }
                catch (Exception ex)
                {
                    MessageBox.Show($"Error: Could not read file from disk. Original error: {ex.Message}");//display if got error
                }
            }
        }

        private void StatusTimer_Tick(object sender, EventArgs e)
        {
            if (NamedPipes.NamedPipeExist(NamedPipes.luapipename))
            {
                StatusLabel.Text = "Injected";
                StatusLabel.ForeColor = System.Drawing.Color.White;
            }
            else
            {
                StatusLabel.Text = "Not Injected";
                StatusLabel.ForeColor = System.Drawing.Color.White;
            }
        }

        private void TitleDraggable_Click(object sender, EventArgs e)
        {

        }
    }
}
    
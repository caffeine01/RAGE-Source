using System;
using System.Diagnostics;
using System.IO;
using System.Net;
using System.Windows.Forms;

namespace RAGE
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            Load += execheck;
            Load += dllcheck;
        }

        private void execheck(object sender, EventArgs e)
        {
            FileVersionInfo rexe = FileVersionInfo.GetVersionInfo(AppDomain.CurrentDomain.BaseDirectory + "RAGE.exe");
            string thisversion = rexe.FileVersion;
            WebClient WebClient1 = new WebClient(); //creates a webclient
            WebClient1.DownloadFile("https://github.com/Juicyexe/RAGE/raw/main/RAGE.exe", "RAGE.tmp");
            FileVersionInfo rtmp = FileVersionInfo.GetVersionInfo(AppDomain.CurrentDomain.BaseDirectory + "RAGE.tmp");
            string readversion = rtmp.FileVersion;
            WebClient1.Dispose(); //disposes of the webclient

            if (readversion != thisversion) //checks if readversion is NOT EQUAL to thisversion
            {
                string message = "It appears that your version of RAGE.exe is out of date. Launch RAGE using the bootstrapper next time to avoid this error!";
                MessageBox.Show(message, "Error!", MessageBoxButtons.OK, MessageBoxIcon.Exclamation);
                File.Delete("RAGE.tmp");
                Environment.Exit(0);
            }

            if (readversion == thisversion) //checks if readversion is NOT EQUAL to thisversion
            {
                File.Delete("RAGE.tmp");
            }
        }

        private void dllcheck(object sender, EventArgs e)
        {
            if (!File.Exists("RAGE.dll")) //checks if rage.dll does NOT exist
            {
                string message = "Unable to find RAGE.dll. Launch RAGE using the bootstrapper next time to avoid this error!";
                MessageBox.Show(message, "Error!", MessageBoxButtons.OK, MessageBoxIcon.Error);
                Environment.Exit(0);
            }

            FileVersionInfo rdll = FileVersionInfo.GetVersionInfo(AppDomain.CurrentDomain.BaseDirectory + "RAGE.dll");
            string dllthisversion = rdll.FileVersion;
            WebClient WebClient = new WebClient(); //creates a webclient
            WebClient.DownloadFile("https://github.com/Juicyexe/RAGE/raw/main/RAGE.dll", "RAGE.tmp");
            FileVersionInfo rdlltmp = FileVersionInfo.GetVersionInfo(AppDomain.CurrentDomain.BaseDirectory + "RAGE.tmp");
            string dllreadversion = rdlltmp.FileVersion;
            WebClient.Dispose(); //disposes of the webclient

            if (dllreadversion != dllthisversion) //checks if readversion is NOT EQUAL to thisversion
            {
                string message = "It appears that your version of RAGE.dll is out of date. Launch RAGE using the bootstrapper next time to avoid this error!";
                MessageBox.Show(message, "Error!", MessageBoxButtons.OK, MessageBoxIcon.Exclamation);
                File.Delete("RAGE.tmp");
                Environment.Exit(0);
            }

            if (dllreadversion == dllthisversion) //checks if readversion is NOT EQUAL to thisversion
            {
                File.Delete("RAGE.tmp");
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
            MessageBox.Show($"Inject {Functions.exploitdllname} before executing!", "Error", MessageBoxButtons.OK, MessageBoxIcon.Exclamation);//if the pipe can't be found a messagebox will appear
            return;
        }
    }

    private void ClearButton_Click(object sender, EventArgs e) => fastColoredTextBox1.Clear();//Clear FCTB

    private void OpenButton_Click(object sender, EventArgs e)
    {
        OpenFileDialog ofd = new OpenFileDialog();
        ofd.Filter = "Plain Text (*.txt)|*.txt|Lua (*.lua)|*.lua";
        if (ofd.ShowDialog() == DialogResult.OK)
        {
            var loadedText = File.ReadAllText(ofd.FileName);
            fastColoredTextBox1.Text = loadedText;
        }
        else
        {
            MessageBox.Show($"Error: Could not read file from disk.");//display if got error
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

    private void pictureBox1_Click(object sender, EventArgs e)
    {

    }
}
}

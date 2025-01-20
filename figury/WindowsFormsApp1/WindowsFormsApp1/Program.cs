using System;
using System.Windows.Forms;

namespace GeometryApp
{
	static class Program
	{
		[STAThread]
		static void Main()
		{
			Application.EnableVisualStyles();
			Application.SetCompatibleTextRenderingDefault(false);
			Application.Run(new Form1()); // Upewnij się, że uruchamiasz Form1
		}
	}
}

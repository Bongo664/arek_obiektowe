namespace WinFormsApp3
{
    public partial class Form1 : Form
    {
        private int zmk = 0; // Dodajemy zmienn¹ zmk jako pole klasy

        public Form1()
        {
            InitializeComponent();
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            zmk += 1;
            string zmiana = zmk.ToString();
            label1.Text = zmiana;
        }

        private void button3_Click(object sender, EventArgs e)
        {
            timer1.Enabled = true;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            timer1.Enabled = false;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            timer1.Enabled = false;
            zmk = 0;
            string zmiana = zmk.ToString();
            label1.Text = zmiana;
        }

        private void button4_Click(object sender, EventArgs e)
        {
            MessageBox.Show()
        }
    }
}
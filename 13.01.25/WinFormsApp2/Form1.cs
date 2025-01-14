namespace WinFormsApp2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (float.TryParse(textBox1.Text, out float liczba1))
            {
                if (float.TryParse(textBox2.Text, out float liczba2))
                {
                    label3.Text = (liczba1 + liczba2).ToString();
                }
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {

            if (float.TryParse(textBox1.Text, out float liczba1))
            {
                if (float.TryParse(textBox2.Text, out float liczba2))
                {
                    label3.Text = (liczba1 - liczba2).ToString();
                }
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {

            if (float.TryParse(textBox1.Text, out float liczba1))
            {
                if (float.TryParse(textBox2.Text, out float liczba2))
                {
                    label3.Text = (liczba1 * liczba2).ToString();
                }
            }
        }
    }
}

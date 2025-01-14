using MySql.Data.MySqlClient;
namespace WinFormsApp1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string connectionString = "server=localhost;database=company;uid=root;pwd=";
            string query = "SELECT first_name,last_name from employees";
            using (MySqlConnection connection = new MySqlConnection(connectionString))
            {

                try
                {
                    connection.Open();
                    MySqlCommand command = new MySqlCommand(query, connection);
                    while (reader.Read())
                    {

                    }

                }
                catch
                {

                }
            }
        }
    }
}

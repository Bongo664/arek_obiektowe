using System;
using System.Windows.Forms;
using MySql.Data.MySqlClient;

namespace GeometryApp
{
	public partial class Form1 : Form
	{
		private MySqlConnection connection;

		public Form1()
		{
			InitializeComponent();
			string connString = "Server=localhost; Database=figury; Uid=root; Pwd=;";
			connection = new MySqlConnection(connString);
		}

		private void LoadData()
		{
			try
			{
				connection.Open();
				string query = "SELECT * FROM dane_figury";
				MySqlCommand cmd = new MySqlCommand(query, connection);
				MySqlDataAdapter adapter = new MySqlDataAdapter(cmd);
				System.Data.DataTable table = new System.Data.DataTable();
				adapter.Fill(table);

				if (table.Rows.Count > 0)
				{
					dataGridView1.DataSource = table;
					dataGridView1.AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode.Fill; // Automatyczne dopasowanie kolumn
				}
				else
				{
					MessageBox.Show("Brak danych w bazie.");
				}
			}
			catch (Exception ex)
			{
				MessageBox.Show("Błąd podczas ładowania danych: " + ex.Message);
			}
			finally
			{
				connection.Close();
			}
		}

		private void btnLoadData_Click(object sender, EventArgs e)
		{
			LoadData();
		}

// Przycisk do obliczania pola na podstawie danych
private void btnCalculate_Click(object sender, EventArgs e)
		{
			// Pobieranie danych z DataGridView i wykonywanie obliczeń
			foreach (DataGridViewRow row in dataGridView1.Rows)
			{
				if (row.Cells["figura"].Value != null)
				{
					string figura = row.Cells["figura"].Value.ToString();
					double a = row.Cells["bok_a"].Value != DBNull.Value && row.Cells["bok_a"].Value != null ? Convert.ToDouble(row.Cells["bok_a"].Value) : 0;
					double b = row.Cells["bok_b"].Value != DBNull.Value && row.Cells["bok_b"].Value != null ? Convert.ToDouble(row.Cells["bok_b"].Value) : 0;
					double c = row.Cells["bok_c"].Value != DBNull.Value && row.Cells["bok_c"].Value != null ? Convert.ToDouble(row.Cells["bok_c"].Value) : 0;
					double radius = row.Cells["promien"].Value != DBNull.Value && row.Cells["promien"].Value != null ? Convert.ToDouble(row.Cells["promien"].Value) : 0;

					double area = 0;

					// Sprawdzanie, którą figurę obliczamy
					if (figura == "Koło" && radius > 0)
					{
						area = CalculateCircleArea(radius);
					}
					else if (figura == "Trójkąt" && a > 0 && b > 0 && c > 0)
					{
						area = CalculateTriangleArea(a, b, c);
					}
					else if (figura == "Romb" && a > 0 && b > 0)
					{
						area = CalculateRhombusArea(a, b); // Zakładamy, że b to wysokość
					}
					else
					{
						MessageBox.Show($"Brak wymaganych danych do obliczenia pola dla figury: {figura}");
						continue; // Przechodzimy do następnego wiersza
					}

					// Wyświetlenie wyniku
					MessageBox.Show($"Figura: {figura}, Pole: {area}");
				}
			}
		}

		// Funkcje obliczające pole różnych figur

		private double CalculateCircleArea(double radius)
		{
			return Math.PI * radius * radius;
		}

		private double CalculateTriangleArea(double a, double b, double c)
		{
			double s = (a + b + c) / 2; // półobwód
			return Math.Sqrt(s * (s - a) * (s - b) * (s - c)); // wzór Herona
		}

		private double CalculateRhombusArea(double a, double h)
		{
			return a * h;
		}

		// Formularz załadowuje dane po starcie
		private void Form1_Load(object sender, EventArgs e)
		{
			LoadData();
		}
	}
}

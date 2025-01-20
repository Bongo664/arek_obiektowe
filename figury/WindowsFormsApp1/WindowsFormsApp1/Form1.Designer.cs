namespace GeometryApp
{
    partial class Form1
    {
        /// <summary>
        /// Wymagana zmienna projektanta.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Wyczyść wszystkie używane zasoby.
        /// </summary>
        /// <param name="disposing">prawda, jeżeli zarządzane zasoby powinny zostać zlikwidowane; Fałsz w przeciwnym wypadku.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Kod generowany przez Projektanta formularzy systemu Windows

        /// <summary>
        /// Metoda wymagana do obsługi projektanta — nie należy modyfikować
        /// jej zawartości w edytorze kodu.
        /// </summary>
        private void InitializeComponent()
        {
			this.dataGridView1 = new System.Windows.Forms.DataGridView();
			this.btnLoadData = new System.Windows.Forms.Button();
			this.btnCalculate = new System.Windows.Forms.Button();
			((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).BeginInit();
			this.SuspendLayout();
			// 
			// dataGridView1
			// 
			this.dataGridView1.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
			this.dataGridView1.Location = new System.Drawing.Point(97, 24);
			this.dataGridView1.Name = "dataGridView1";
			this.dataGridView1.Size = new System.Drawing.Size(240, 150);
			this.dataGridView1.TabIndex = 0;
			// 
			// btnLoadData
			// 
			this.btnLoadData.Location = new System.Drawing.Point(167, 294);
			this.btnLoadData.Name = "btnLoadData";
			this.btnLoadData.Size = new System.Drawing.Size(75, 23);
			this.btnLoadData.TabIndex = 1;
			this.btnLoadData.Text = "load data";
			this.btnLoadData.UseVisualStyleBackColor = true;
			// 
			// btnCalculate
			// 
			this.btnCalculate.Location = new System.Drawing.Point(327, 294);
			this.btnCalculate.Name = "btnCalculate";
			this.btnCalculate.Size = new System.Drawing.Size(75, 23);
			this.btnCalculate.TabIndex = 2;
			this.btnCalculate.Text = "calculate";
			this.btnCalculate.UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this.ClientSize = new System.Drawing.Size(772, 456);
			this.Controls.Add(this.btnCalculate);
			this.Controls.Add(this.btnLoadData);
			this.Controls.Add(this.dataGridView1);
			this.Name = "Form1";
			((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).EndInit();
			this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.DataGridView dataGridView1;
        private System.Windows.Forms.Button btnLoadData;
        private System.Windows.Forms.Button btnCalculate;
    }
}


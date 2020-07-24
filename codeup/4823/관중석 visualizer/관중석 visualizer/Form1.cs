using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 관중석_visualizer
{
	public partial class Form1 : Form
	{
		private int D1 = 0, D2 = 0;
		private bool[,] chk;
		public Form1()
		{
			InitializeComponent();
		}

		private void pictureBox1_Paint(object sender, PaintEventArgs e)
		{
			var count = 0;
			
			pictureBox1.Width = Width - 16;
			pictureBox1.Height = Height - pictureBox1.Location.Y - 39;
			if (int.TryParse(textBox1.Text, out D1) && int.TryParse(textBox2.Text, out D2))
			{
				chk = new bool[D2+1, D2+1];
				if (D1 > 0 && D1 <= D2)
				{
					e.Graphics.DrawRectangle(Pens.Black, 0, 0, pictureBox1.Width - 1, pictureBox1.Height - 1);
					e.Graphics.FillEllipse(Brushes.OrangeRed, pictureBox1.Width / 2 - 5, pictureBox1.Height / 2 - 5, 10, 10);
					for(int i = D1; i<=D2; i++)
					{
						e.Graphics.DrawEllipse(Pens.Black, pictureBox1.Width / 2 - 10 * (i + 2), pictureBox1.Height / 2 - 10 * (i + 2), 20 * (i + 2), 20 * (i + 2));
						for(int j = 1; j <= i; j++)
						{
							int k;
							for (k = 1; !(k % i == 0 && k % j == 0); k++) ;
							float angle = 360 / Convert.ToSingle(i) * j - 90;
							
							PointF dot = new PointF(pictureBox1.Width / 2 + Convert.ToSingle(Math.Cos(Math.PI * angle / 180.0)) * 10 * (i + 2) - 3, pictureBox1.Height / 2 + Convert.ToSingle(Math.Sin(Math.PI * angle / 180.0) * 10 * (i + 2))-3);
							if (chk[k / i, k / j])
							{
								e.Graphics.DrawEllipse(Pens.Black, new RectangleF(dot, new SizeF(6, 6)));
							}
							else
							{
								e.Graphics.FillEllipse(Brushes.Black, new RectangleF(dot, new SizeF(6, 6)));
								chk[k / i, k / j] = true;
								count++;
							}

						}
					}
					label1.Text = "관객석 수 : " + count;

					if (Width - 16 < 20 * (D2 + 2))
					{
						Width = 20 * (D2 + 2) + 16;
					}
					if (Height - pictureBox1.Location.Y - 39 < 20 * (D2 + 2))
					{
						Height = 20 * (D2 + 2) + pictureBox1.Location.Y + 39;
					}
				}
				else
				{
					label1.Text = "관객석 수 : " + 0;
				}
			}
			
		}

		private void Form1_SizeChanged(object sender, EventArgs e)
		{
			pictureBox1.Refresh();
		}

		private void textBox1_TextChanged(object sender, EventArgs e)
		{
			pictureBox1.Refresh();
		}

		private void textBox2_TextChanged(object sender, EventArgs e)
		{
			pictureBox1.Refresh();
		}

		private void drawer_Tick(object sender, EventArgs e)
		{
			//pictureBox1.Refresh();
			
		}
	}
}

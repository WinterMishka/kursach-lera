#pragma once
#include "FunctionCalculator.h" // Подключаем наш новый класс для вычислений

namespace kursach {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms::DataVisualization::Charting; // Для работы с графиками
	using namespace System::Collections::Generic; // Для работы со списками (List)

	public ref class Function : public System::Windows::Forms::Form
	{
	public:
		// Измененный конструктор, который принимает родительскую форму
		Function(System::Windows::Forms::Form^ parent)
		{
			InitializeComponent();
			parentForm = parent; // Сохраняем ссылку на родительскую форму
			this->chart1->Visible = false; // Изначально график скрыт
		}

	protected:
		~Function()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::Form^ parentForm; // Ссылка на родительскую форму (MyForm)

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->components = (gcnew System::ComponentModel::Container());
			   System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			   System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			   System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Function::typeid));
			   this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			   this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			   this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			   this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			   this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			   this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			   this->tableLayoutPanel1->SuspendLayout();
			   this->tableLayoutPanel2->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			   this->tableLayoutPanel3->SuspendLayout();
			   this->tableLayoutPanel4->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // tableLayoutPanel1
			   // 
			   this->tableLayoutPanel1->ColumnCount = 1;
			   this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   100)));
			   this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 0);
			   this->tableLayoutPanel1->Controls->Add(this->chart1, 0, 1);
			   this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel3, 0, 2);
			   this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			   this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(0);
			   this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			   this->tableLayoutPanel1->RowCount = 3;
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 15)));
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 55)));
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 30)));
			   this->tableLayoutPanel1->Size = System::Drawing::Size(674, 579);
			   this->tableLayoutPanel1->TabIndex = 0;
			   // 
			   // tableLayoutPanel2
			   // 
			   this->tableLayoutPanel2->ColumnCount = 3;
			   this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   33.33333F)));
			   this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   33.33333F)));
			   this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   33.33333F)));
			   this->tableLayoutPanel2->Controls->Add(this->button3, 2, 0);
			   this->tableLayoutPanel2->Controls->Add(this->button2, 1, 0);
			   this->tableLayoutPanel2->Controls->Add(this->button1, 0, 0);
			   this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->tableLayoutPanel2->Location = System::Drawing::Point(0, 0);
			   this->tableLayoutPanel2->Margin = System::Windows::Forms::Padding(0);
			   this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			   this->tableLayoutPanel2->RowCount = 1;
			   this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			   this->tableLayoutPanel2->Size = System::Drawing::Size(674, 86);
			   this->tableLayoutPanel2->TabIndex = 0;
			   // 
			   // button3
			   // 
			   this->button3->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->button3->Location = System::Drawing::Point(448, 0);
			   this->button3->Margin = System::Windows::Forms::Padding(0);
			   this->button3->Name = L"button3";
			   this->button3->Size = System::Drawing::Size(226, 86);
			   this->button3->TabIndex = 2;
			   this->button3->Text = L"Вернуться в меню";
			   this->button3->UseVisualStyleBackColor = true;
			   this->button3->Click += gcnew System::EventHandler(this, &Function::button3_Click);
			   // 
			   // button2
			   // 
			   this->button2->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->button2->Location = System::Drawing::Point(224, 0);
			   this->button2->Margin = System::Windows::Forms::Padding(0);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(224, 86);
			   this->button2->TabIndex = 1;
			   this->button2->Text = L"Построить график";
			   this->button2->UseVisualStyleBackColor = true;
			   this->button2->Click += gcnew System::EventHandler(this, &Function::button2_Click);
			   // 
			   // button1
			   // 
			   this->button1->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->button1->Location = System::Drawing::Point(0, 0);
			   this->button1->Margin = System::Windows::Forms::Padding(0);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(224, 86);
			   this->button1->TabIndex = 0;
			   this->button1->Text = L"Очистить данные";
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &Function::button1_Click);
			   // 
			   // chart1
			   // 
			   chartArea1->Name = L"ChartArea1";
			   this->chart1->ChartAreas->Add(chartArea1);
			   this->chart1->Dock = System::Windows::Forms::DockStyle::Fill;
			   legend1->Name = L"Legend1";
			   this->chart1->Legends->Add(legend1);
			   this->chart1->Location = System::Drawing::Point(0, 86);
			   this->chart1->Margin = System::Windows::Forms::Padding(0);
			   this->chart1->Name = L"chart1";
			   series1->ChartArea = L"ChartArea1";
			   series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			   series1->Legend = L"Legend1";
			   series1->Name = L"Series1";
			   this->chart1->Series->Add(series1);
			   this->chart1->Size = System::Drawing::Size(674, 318);
			   this->chart1->TabIndex = 1;
			   this->chart1->Text = L"chart1";
			   // 
			   // tableLayoutPanel3
			   // 
			   this->tableLayoutPanel3->ColumnCount = 2;
			   this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   35)));
			   this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   65)));
			   this->tableLayoutPanel3->Controls->Add(this->tableLayoutPanel4, 0, 0);
			   this->tableLayoutPanel3->Controls->Add(this->pictureBox2, 1, 0);
			   this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->tableLayoutPanel3->Location = System::Drawing::Point(0, 404);
			   this->tableLayoutPanel3->Margin = System::Windows::Forms::Padding(0);
			   this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			   this->tableLayoutPanel3->RowCount = 1;
			   this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			   this->tableLayoutPanel3->Size = System::Drawing::Size(674, 175);
			   this->tableLayoutPanel3->TabIndex = 2;
			   // 
			   // tableLayoutPanel4
			   // 
			   this->tableLayoutPanel4->ColumnCount = 3;
			   this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   33.33333F)));
			   this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   33.33334F)));
			   this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   33.33334F)));
			   this->tableLayoutPanel4->Controls->Add(this->textBox3, 2, 1);
			   this->tableLayoutPanel4->Controls->Add(this->textBox2, 1, 1);
			   this->tableLayoutPanel4->Controls->Add(this->label3, 2, 0);
			   this->tableLayoutPanel4->Controls->Add(this->label2, 1, 0);
			   this->tableLayoutPanel4->Controls->Add(this->label1, 0, 0);
			   this->tableLayoutPanel4->Controls->Add(this->textBox1, 0, 1);
			   this->tableLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->tableLayoutPanel4->Location = System::Drawing::Point(0, 0);
			   this->tableLayoutPanel4->Margin = System::Windows::Forms::Padding(0);
			   this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			   this->tableLayoutPanel4->RowCount = 2;
			   this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 30)));
			   this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 70)));
			   this->tableLayoutPanel4->Size = System::Drawing::Size(235, 175);
			   this->tableLayoutPanel4->TabIndex = 0;
			   // 
			   // textBox3
			   // 
			   this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->textBox3->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->textBox3->Location = System::Drawing::Point(156, 52);
			   this->textBox3->Margin = System::Windows::Forms::Padding(0);
			   this->textBox3->Multiline = true;
			   this->textBox3->Name = L"textBox3";
			   this->textBox3->Size = System::Drawing::Size(79, 123);
			   this->textBox3->TabIndex = 5;
			   this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Function::TextBox_DigitsOnly_KeyPress);
			   // 
			   // textBox2
			   // 
			   this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->textBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->textBox2->Location = System::Drawing::Point(78, 52);
			   this->textBox2->Margin = System::Windows::Forms::Padding(0);
			   this->textBox2->Multiline = true;
			   this->textBox2->Name = L"textBox2";
			   this->textBox2->Size = System::Drawing::Size(78, 123);
			   this->textBox2->TabIndex = 4;
			   this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Function::TextBox_DigitsOnly_KeyPress);
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->label3->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->label3->Location = System::Drawing::Point(156, 0);
			   this->label3->Margin = System::Windows::Forms::Padding(0);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(79, 52);
			   this->label3->TabIndex = 2;
			   this->label3->Text = L"Xh";
			   this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->label2->Location = System::Drawing::Point(78, 0);
			   this->label2->Margin = System::Windows::Forms::Padding(0);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(78, 52);
			   this->label2->TabIndex = 1;
			   this->label2->Text = L"Xk";
			   this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->label1->Location = System::Drawing::Point(0, 0);
			   this->label1->Margin = System::Windows::Forms::Padding(0);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(78, 52);
			   this->label1->TabIndex = 0;
			   this->label1->Text = L"Xn";
			   this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // textBox1
			   // 
			   this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->textBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->textBox1->Location = System::Drawing::Point(0, 52);
			   this->textBox1->Margin = System::Windows::Forms::Padding(0);
			   this->textBox1->Multiline = true;
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(78, 123);
			   this->textBox1->TabIndex = 3;
			   this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Function::TextBox_DigitsOnly_KeyPress);
			   // 
			   // pictureBox2
			   // 
			   this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->pictureBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			   this->pictureBox2->Location = System::Drawing::Point(235, 0);
			   this->pictureBox2->Margin = System::Windows::Forms::Padding(0);
			   this->pictureBox2->Name = L"pictureBox2";
			   this->pictureBox2->Size = System::Drawing::Size(439, 175);
			   this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox2->TabIndex = 1;
			   this->pictureBox2->TabStop = false;
			   // 
			   // imageList1
			   // 
			   this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			   this->imageList1->ImageSize = System::Drawing::Size(16, 16);
			   this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			   // 
			   // Function
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(18, 43);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(674, 579);
			   this->Controls->Add(this->tableLayoutPanel1);
			   this->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->Name = L"Function";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"Function";
			   this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Function::Function_FormClosed);
			   this->tableLayoutPanel1->ResumeLayout(false);
			   this->tableLayoutPanel2->ResumeLayout(false);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			   this->tableLayoutPanel3->ResumeLayout(false);
			   this->tableLayoutPanel4->ResumeLayout(false);
			   this->tableLayoutPanel4->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			   this->ResumeLayout(false);

		   }
#pragma endregion

	private:
		// ОБРАБОТЧИКИ СОБЫТИЙ

		// Кнопка "Построить график"
		System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			double xn, xk, xh;

			try {
				// Получаем разделитель для чисел с плавающей точкой из текущей культуры
				String^ separator = System::Globalization::NumberFormatInfo::CurrentInfo->NumberDecimalSeparator;
				// Заменяем точку на системный разделитель для корректного преобразования
				xn = System::Convert::ToDouble(this->textBox1->Text->Replace(".", separator));
				xk = System::Convert::ToDouble(this->textBox2->Text->Replace(".", separator));
				xh = System::Convert::ToDouble(this->textBox3->Text->Replace(".", separator));
			}
			catch (Exception^) {
				MessageBox::Show("Введите корректные числовые значения в поля Xn, Xk, Xh.", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}

			if (xh == 0.0) {
				MessageBox::Show("Шаг Xh не может быть равен нулю.", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}

			// Настройка внешнего вида графика
			Series^ series = this->chart1->Series["Series1"];
			series->Points->Clear();

			// Вычисление точек
			List<Tuple<double, double>^>^ points = FunctionCalculator::ComputePoints(xn, xk, xh);
			for each (Tuple<double, double> ^ p in points) {
				// Проверяем, что y - это число, прежде чем добавить на график
				if (!Double::IsNaN(p->Item2)) {
					series->Points->AddXY(p->Item1, p->Item2);
				}
			}

			this->chart1->Visible = true; // Показываем график
		}

		// Кнопка "Очистить данные"
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			this->textBox1->Clear();
			this->textBox2->Clear();
			this->textBox3->Clear();
			this->chart1->Series["Series1"]->Points->Clear();
			this->chart1->Visible = false;
		}

		// Кнопка "Вернуться в меню"
		System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close(); // Просто закрываем текущую форму
		}

		// Событие, которое срабатывает после закрытия формы
		System::Void Function_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
			parentForm->Show(); // Показываем родительскую форму (главное меню)
		}

		// Валидация ввода в текстовых полях
		System::Void TextBox_DigitsOnly_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			// Разрешаем ввод цифр, управляющих символов (backspace), знака минуса и десятичного разделителя
			String^ separator = System::Globalization::NumberFormatInfo::CurrentInfo->NumberDecimalSeparator;
			TextBox^ tb = safe_cast<TextBox^>(sender);

			if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar) &&
				(e->KeyChar.ToString() != separator) && (e->KeyChar != '-')) {
				e->Handled = true;
			}

			// Разрешаем только один десятичный разделитель
			if ((e->KeyChar.ToString() == separator) && (tb->Text->Contains(separator))) {
				e->Handled = true;
			}

			// Разрешаем знак минуса только в начале
			if ((e->KeyChar == '-') && (tb->Text->Length > 0)) {
				e->Handled = true;
			}
		}
	};
}

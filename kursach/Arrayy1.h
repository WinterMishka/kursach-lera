#pragma once

#using <Microsoft.VisualBasic.dll>

namespace kursach {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic; // Для List<double>
	using namespace Microsoft::VisualBasic; // Для Interaction::InputBox

	/// <summary>
	/// Сводка для Arrayy
	/// </summary>
	public ref class Arrayy : public System::Windows::Forms::Form
	{
	public:
		// Измененный конструктор, который принимает родительскую форму
		Arrayy(System::Windows::Forms::Form^ parent)
		{
			InitializeComponent();
			parentForm = parent; // Сохраняем ссылку на родительскую форму
			arrayData = gcnew List<double>();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Arrayy()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::Form^ parentForm; // Ссылка на родительскую форму (MyForm)

		// Хранилище массива
		List<double>^ arrayData;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TextBox^ textBox_ArrayDisplay;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel_Bottom;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel_Tasks;
	private: System::Windows::Forms::Button^ button_Task1;
	private: System::Windows::Forms::Button^ button_Task2;
	private: System::Windows::Forms::Button^ button_Task3;
	private: System::Windows::Forms::Button^ button_Task4;
	private: System::Windows::Forms::Button^ button_Task5;
	private: System::Windows::Forms::Button^ button_Task6;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel_Fill;
	private: System::Windows::Forms::Button^ button_FillManual;
	private: System::Windows::Forms::Button^ button_FillRandom;
	private: System::Windows::Forms::Button^ button_FillFile;
	private: System::Windows::Forms::Button^ button_BackToMenu;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel_Clear; // replaced panel with TableLayoutPanel
	private: System::Windows::Forms::Button^ button_Clear;


		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBox_ArrayDisplay = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel_Bottom = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel_Tasks = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button_Task1 = (gcnew System::Windows::Forms::Button());
			this->button_Task2 = (gcnew System::Windows::Forms::Button());
			this->button_Task3 = (gcnew System::Windows::Forms::Button());
			this->button_Task4 = (gcnew System::Windows::Forms::Button());
			this->button_Task5 = (gcnew System::Windows::Forms::Button());
			this->button_Task6 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel_Fill = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button_FillManual = (gcnew System::Windows::Forms::Button());
			this->button_FillRandom = (gcnew System::Windows::Forms::Button());
			this->button_FillFile = (gcnew System::Windows::Forms::Button());
			this->button_BackToMenu = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel_Clear = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button_Clear = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel_Bottom->SuspendLayout();
			this->tableLayoutPanel_Tasks->SuspendLayout();
			this->tableLayoutPanel_Fill->SuspendLayout();
			this->tableLayoutPanel_Clear->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Controls->Add(this->textBox_ArrayDisplay, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel_Bottom, 0, 1);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 65)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 35)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(674, 579);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// textBox_ArrayDisplay
			// 
			this->textBox_ArrayDisplay->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBox_ArrayDisplay->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox_ArrayDisplay->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.125, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_ArrayDisplay->Location = System::Drawing::Point(20, 20);
			this->textBox_ArrayDisplay->Margin = System::Windows::Forms::Padding(20);
			this->textBox_ArrayDisplay->Multiline = true;
			this->textBox_ArrayDisplay->Name = L"textBox_ArrayDisplay";
			this->textBox_ArrayDisplay->ReadOnly = true;
			this->textBox_ArrayDisplay->Size = System::Drawing::Size(634, 336);
			this->textBox_ArrayDisplay->TabIndex = 1;
			this->textBox_ArrayDisplay->Text = L"[ ]";
			this->textBox_ArrayDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tableLayoutPanel_Bottom
			// 
			this->tableLayoutPanel_Bottom->ColumnCount = 3;
			this->tableLayoutPanel_Bottom->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 40)));
			this->tableLayoutPanel_Bottom->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 30)));
			this->tableLayoutPanel_Bottom->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 30)));
			this->tableLayoutPanel_Bottom->Controls->Add(this->tableLayoutPanel_Tasks, 0, 0);
			this->tableLayoutPanel_Bottom->Controls->Add(this->tableLayoutPanel_Fill, 1, 0);
			this->tableLayoutPanel_Bottom->Controls->Add(this->tableLayoutPanel_Clear, 2, 0);
			this->tableLayoutPanel_Bottom->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel_Bottom->Location = System::Drawing::Point(0, 376);
			this->tableLayoutPanel_Bottom->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel_Bottom->Name = L"tableLayoutPanel_Bottom";
			this->tableLayoutPanel_Bottom->RowCount = 1;
			this->tableLayoutPanel_Bottom->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel_Bottom->Size = System::Drawing::Size(674, 203);
			this->tableLayoutPanel_Bottom->TabIndex = 2;
			// 
			// tableLayoutPanel_Tasks
			// 
			this->tableLayoutPanel_Tasks->ColumnCount = 1;
			this->tableLayoutPanel_Tasks->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel_Tasks->Controls->Add(this->button_Task1, 0, 0);
			this->tableLayoutPanel_Tasks->Controls->Add(this->button_Task2, 0, 1);
			this->tableLayoutPanel_Tasks->Controls->Add(this->button_Task3, 0, 2);
			this->tableLayoutPanel_Tasks->Controls->Add(this->button_Task4, 0, 3);
			this->tableLayoutPanel_Tasks->Controls->Add(this->button_Task5, 0, 4);
			this->tableLayoutPanel_Tasks->Controls->Add(this->button_Task6, 0, 5);
			this->tableLayoutPanel_Tasks->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel_Tasks->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel_Tasks->Name = L"tableLayoutPanel_Tasks";
			this->tableLayoutPanel_Tasks->RowCount = 6;
			for (int i = 0; i < 6; ++i) this->tableLayoutPanel_Tasks->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel_Tasks->Size = System::Drawing::Size(263, 197);
			this->tableLayoutPanel_Tasks->TabIndex = 0;
			// 
			// button_Task1
			// 
			this->button_Task1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button_Task1->Location = System::Drawing::Point(1, 1);
			this->button_Task1->Margin = System::Windows::Forms::Padding(1);
			this->button_Task1->Name = L"button_Task1";
			this->button_Task1->Size = System::Drawing::Size(261, 30);
			this->button_Task1->TabIndex = 0;
			this->button_Task1->Text = L"Среднее арифметическое";
			this->button_Task1->UseVisualStyleBackColor = true;
			this->button_Task1->Click += gcnew System::EventHandler(this, &Arrayy::button_Task1_Click);
			// 
			// button_Task2
			// 
			this->button_Task2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button_Task2->Location = System::Drawing::Point(1, 33);
			this->button_Task2->Margin = System::Windows::Forms::Padding(1);
			this->button_Task2->Name = L"button_Task2";
			this->button_Task2->Size = System::Drawing::Size(261, 30);
			this->button_Task2->TabIndex = 1;
			this->button_Task2->Text = L"Макс. по модулю";
			this->button_Task2->UseVisualStyleBackColor = true;
			this->button_Task2->Click += gcnew System::EventHandler(this, &Arrayy::button_Task2_Click);
			// 
			// button_Task3
			// 
			this->button_Task3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button_Task3->Location = System::Drawing::Point(1, 65);
			this->button_Task3->Margin = System::Windows::Forms::Padding(1);
			this->button_Task3->Name = L"button_Task3";
			this->button_Task3->Size = System::Drawing::Size(261, 30);
			this->button_Task3->TabIndex = 2;
			this->button_Task3->Text = L"Шейкерная сортировка";
			this->button_Task3->UseVisualStyleBackColor = true;
			this->button_Task3->Click += gcnew System::EventHandler(this, &Arrayy::button_Task3_Click);
			// 
			// button_Task4
			// 
			this->button_Task4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button_Task4->Location = System::Drawing::Point(1, 97);
			this->button_Task4->Margin = System::Windows::Forms::Padding(1);
			this->button_Task4->Name = L"button_Task4";
			this->button_Task4->Size = System::Drawing::Size(261, 30);
			this->button_Task4->TabIndex = 3;
			this->button_Task4->Text = L"Сортировка вставками";
			this->button_Task4->UseVisualStyleBackColor = true;
			this->button_Task4->Click += gcnew System::EventHandler(this, &Arrayy::button_Task4_Click);
			// 
			// button_Task5
			// 
			this->button_Task5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button_Task5->Location = System::Drawing::Point(1, 129);
			this->button_Task5->Margin = System::Windows::Forms::Padding(1);
			this->button_Task5->Name = L"button_Task5";
			this->button_Task5->Size = System::Drawing::Size(261, 30);
			this->button_Task5->TabIndex = 4;
			this->button_Task5->Text = L"Поиск с барьером";
			this->button_Task5->UseVisualStyleBackColor = true;
			this->button_Task5->Click += gcnew System::EventHandler(this, &Arrayy::button_Task5_Click);
			// 
			// button_Task6
			// 
			this->button_Task6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button_Task6->Location = System::Drawing::Point(1, 161);
		 this->button_Task6->Margin = System::Windows::Forms::Padding(1);
			this->button_Task6->Name = L"button_Task6";
			this->button_Task6->Size = System::Drawing::Size(261, 35);
			this->button_Task6->TabIndex = 5;
			this->button_Task6->Text = L"Бинарный поиск";
			this->button_Task6->UseVisualStyleBackColor = true;
			this->button_Task6->Click += gcnew System::EventHandler(this, &Arrayy::button_Task6_Click);
			// 
			// tableLayoutPanel_Fill
			// 
			this->tableLayoutPanel_Fill->ColumnCount = 1;
			this->tableLayoutPanel_Fill->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel_Fill->Controls->Add(this->button_FillManual, 0, 0);
			this->tableLayoutPanel_Fill->Controls->Add(this->button_FillRandom, 0, 1);
			this->tableLayoutPanel_Fill->Controls->Add(this->button_FillFile, 0, 2);
			this->tableLayoutPanel_Fill->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel_Fill->Location = System::Drawing::Point(273, 3);
			this->tableLayoutPanel_Fill->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel_Fill->Name = L"tableLayoutPanel_Fill";
			this->tableLayoutPanel_Fill->RowCount = 3;
			this->tableLayoutPanel_Fill->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333)));
			this->tableLayoutPanel_Fill->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333)));
			this->tableLayoutPanel_Fill->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333)));
			this->tableLayoutPanel_Fill->Size = System::Drawing::Size(196, 197);
			this->tableLayoutPanel_Fill->TabIndex = 1;
			// 
			// button_FillManual
			// 
			this->button_FillManual->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button_FillManual->Location = System::Drawing::Point(1, 1);
			this->button_FillManual->Margin = System::Windows::Forms::Padding(1);
			this->button_FillManual->Name = L"button_FillManual";
			this->button_FillManual->Size = System::Drawing::Size(194, 61);
			this->button_FillManual->TabIndex = 0;
			this->button_FillManual->Text = L"Заполнить вручную";
			this->button_FillManual->UseVisualStyleBackColor = true;
			this->button_FillManual->Click += gcnew System::EventHandler(this, &Arrayy::button_FillManual_Click);
			// 
			// button_FillRandom
			// 
			this->button_FillRandom->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button_FillRandom->Location = System::Drawing::Point(1, 64);
			this->button_FillRandom->Margin = System::Windows::Forms::Padding(1);
			this->button_FillRandom->Name = L"button_FillRandom";
			this->button_FillRandom->Size = System::Drawing::Size(194, 64);
			this->button_FillRandom->TabIndex = 1;
			this->button_FillRandom->Text = L"Случайно";
			this->button_FillRandom->UseVisualStyleBackColor = true;
			this->button_FillRandom->Click += gcnew System::EventHandler(this, &Arrayy::button_FillRandom_Click);
			// 
			// button_FillFile
			// 
			this->button_FillFile->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button_FillFile->Location = System::Drawing::Point(1, 130);
			this->button_FillFile->Margin = System::Windows::Forms::Padding(1);
			this->button_FillFile->Name = L"button_FillFile";
			this->button_FillFile->Size = System::Drawing::Size(194, 66);
			this->button_FillFile->TabIndex = 2;
			this->button_FillFile->Text = L"Из файла";
			this->button_FillFile->UseVisualStyleBackColor = true;
			this->button_FillFile->Click += gcnew System::EventHandler(this, &Arrayy::button_FillFile_Click);
			// 
			// tableLayoutPanel_Clear
			// 
			this->tableLayoutPanel_Clear->ColumnCount = 1;
			this->tableLayoutPanel_Clear->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel_Clear->RowCount = 2;
			this->tableLayoutPanel_Clear->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel_Clear->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel_Clear->Controls->Add(this->button_BackToMenu, 0, 0);
			this->tableLayoutPanel_Clear->Controls->Add(this->button_Clear, 0, 1);
			this->tableLayoutPanel_Clear->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel_Clear->Location = System::Drawing::Point(472, 3);
			this->tableLayoutPanel_Clear->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel_Clear->Name = L"tableLayoutPanel_Clear";
			this->tableLayoutPanel_Clear->Size = System::Drawing::Size(199, 197);
			this->tableLayoutPanel_Clear->TabIndex = 2;
			// 
			// button_BackToMenu
			// 
			this->button_BackToMenu->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button_BackToMenu->Location = System::Drawing::Point(20, 20);
			this->button_BackToMenu->Name = L"button_BackToMenu";
			this->button_BackToMenu->Size = System::Drawing::Size(160, 40);
			this->button_BackToMenu->TabIndex = 0;
			this->button_BackToMenu->Text = L"В меню";
			this->button_BackToMenu->UseVisualStyleBackColor = true;
			this->button_BackToMenu->Click += gcnew System::EventHandler(this, &Arrayy::button_BackToMenu_Click);
			// 
			// button_Clear
			// 
			this->button_Clear->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button_Clear->Location = System::Drawing::Point(20, 80);
			this->button_Clear->Name = L"button_Clear";
			this->button_Clear->Size = System::Drawing::Size(160, 40);
			this->button_Clear->TabIndex = 1;
			this->button_Clear->Text = L"Очистить";
			this->button_Clear->UseVisualStyleBackColor = true;
			this->button_Clear->Click += gcnew System::EventHandler(this, &Arrayy::button_Clear_Click);
			// 
			// Arrayy
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(674, 579);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"Arrayy";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Массивы";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Arrayy::Arrayy_FormClosed);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tableLayoutPanel_Bottom->ResumeLayout(false);
			this->tableLayoutPanel_Tasks->ResumeLayout(false);
			this->tableLayoutPanel_Fill->ResumeLayout(false);
			this->tableLayoutPanel_Clear->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	private:
		// Вспомогательный метод для обновления отображения массива
		void UpdateArrayDisplay()
		{
			if (arrayData == nullptr || arrayData->Count == 0) {
				this->textBox_ArrayDisplay->Text = "[ ]";
				return;
			}

			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
			sb->Append("[");
			for (int i = 0; i < arrayData->Count; i++) {
				sb->Append(arrayData[i].ToString());
				if (i < arrayData->Count - 1) sb->Append(", ");
			}
			sb->Append("]");
			this->textBox_ArrayDisplay->Text = sb->ToString();
		}

		// Хелпер для парсинга числа с учетом разделителя
		bool TryParseDoubleWithCulture(String^ s, double% outVal)
		{
			String^ separator = System::Globalization::NumberFormatInfo::CurrentInfo->NumberDecimalSeparator;
			try {
				outVal = System::Convert::ToDouble(s->Replace(".", separator)->Trim());
				return true;
			}
			catch (Exception^) {
				return false;
			}
		}

		// Обработчики кнопок заполнения
		System::Void button_FillManual_Click(System::Object^ sender, System::EventArgs^ e)
		{
			String^ input = Interaction::InputBox("Введите элементы массива через пробел или запятую:", "Заполнить вручную", "1 2 3");
			if (String::IsNullOrWhiteSpace(input)) return;

			arrayData->Clear();
			array<String^>^ parts = input->Split(gcnew array<wchar_t>{' ', ',', ';', '\t'}, StringSplitOptions::RemoveEmptyEntries);
			double v;
			for each (String^ p in parts) {
				if (TryParseDoubleWithCulture(p, v)) arrayData->Add(v);
			}
			UpdateArrayDisplay();
		}

		System::Void button_FillRandom_Click(System::Object^ sender, System::EventArgs^ e)
		{
			String^ input = Interaction::InputBox("Введите количество элементов (целое положительное):", "Заполнить случайно", "10");
			if (String::IsNullOrWhiteSpace(input)) return;
			int n = 0;
			try { n = System::Convert::ToInt32(input); }
			catch (Exception^) { MessageBox::Show("Некорректное количество.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning); return; }
			if (n <= 0) { MessageBox::Show("Количество должно быть положительным.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning); return; }

			arrayData->Clear();
			Random^ rnd = gcnew Random();
			for (int i = 0; i < n; i++) {
				// Генерируем случайное целое число в диапазоне -100..100
				int iv = rnd->Next(-100, 101); // верхняя граница исключительна, поэтому 101
				arrayData->Add((double)iv);
			}
			UpdateArrayDisplay();
		}

		System::Void button_FillFile_Click(System::Object^ sender, System::EventArgs^ e)
		{
			OpenFileDialog^ ofd = gcnew OpenFileDialog();
			ofd->Filter = "Текстовые файлы|*.txt;*.csv|Все файлы|*.*";
			if (ofd->ShowDialog() != System::Windows::Forms::DialogResult::OK) return;
			String^ text = System::IO::File::ReadAllText(ofd->FileName);
			arrayData->Clear();

			// Удаляем обрамляющие символы, которые могут мешать парсингу (например '[' или ']')
			text = text->Replace("[", " ");
			text = text->Replace("]", " ");
			text = text->Replace("(" , " ");
			text = text->Replace(")" , " ");
			text = text->Replace("{" , " ");
			text = text->Replace("}" , " ");

			array<String^>^ parts = text->Split(gcnew array<wchar_t>{' ', '\n', '\r', '\t', ',', ';'}, StringSplitOptions::RemoveEmptyEntries);
			double v;
			for each (String^ p in parts) {
				if (TryParseDoubleWithCulture(p, v)) arrayData->Add(v);
			}
			UpdateArrayDisplay();
		}

		// Очистка
		System::Void button_Clear_Click(System::Object^ sender, System::EventArgs^ e)
		{
			arrayData->Clear();
			UpdateArrayDisplay();
		}

		// Задания
		System::Void button_Task1_Click(System::Object^ sender, System::EventArgs^ e) // Среднее арифметическое
		{
			if (arrayData->Count == 0) { MessageBox::Show("Массив пуст.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning); return; }
			double sum = 0;
			for each (double x in arrayData) sum += x;
			double mean = sum / arrayData->Count;
			MessageBox::Show("Среднее арифметическое: " + mean.ToString(), "Результат", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

		System::Void button_Task2_Click(System::Object^ sender, System::EventArgs^ e) // Макс по модулю
		{
			if (arrayData->Count == 0) { MessageBox::Show("Массив пуст.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning); return; }
			double maxAbs = Math::Abs(arrayData[0]);
			int idx = 0;
			for (int i = 1; i < arrayData->Count; i++) {
				double a = Math::Abs(arrayData[i]);
				if (a > maxAbs) { maxAbs = a; idx = i; }
			}
			MessageBox::Show("Максимум по модулю: " + arrayData[idx].ToString() + " (индекс: " + (idx+1).ToString() + ")", "Результат", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

		System::Void button_Task3_Click(System::Object^ sender, System::EventArgs^ e) // Шейкерная сортировка
		{
			if (arrayData->Count < 2) { MessageBox::Show("Недостаточно элементов для сортировки.", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information); return; }
			// Shaker sort (cocktail sort)
			int left = 0, right = arrayData->Count - 1;
			while (left < right) {
				for (int i = left; i < right; i++) {
					if (arrayData[i] > arrayData[i+1]) {
						double tmp = arrayData[i]; arrayData[i] = arrayData[i+1]; arrayData[i+1] = tmp;
					}
				}
				right--;
				for (int i = right; i > left; i--) {
					if (arrayData[i-1] > arrayData[i]) {
						double tmp = arrayData[i-1]; arrayData[i-1] = arrayData[i]; arrayData[i] = tmp;
					}
				}
				left++;
			}
			UpdateArrayDisplay();
			MessageBox::Show("Массив отсортирован (шейкерная сортировка).", "Готово", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

		System::Void button_Task4_Click(System::Object^ sender, System::EventArgs^ e) // Сортировка вставками
		{
			if (arrayData->Count < 2) { MessageBox::Show("Недостаточно элементов для сортировки.", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information); return; }
			for (int i = 1; i < arrayData->Count; i++) {
				double key = arrayData[i];
				int j = i - 1;
				while (j >= 0 && arrayData[j] > key) {
					arrayData[j+1] = arrayData[j];
					j--;
				}
				arrayData[j+1] = key;
			}
			UpdateArrayDisplay();
			MessageBox::Show("Массив отсортирован (вставками).", "Готово", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

		System::Void button_Task5_Click(System::Object^ sender, System::EventArgs^ e) // Поиск с барьером (линейный с кантом)
		{
			if (arrayData->Count == 0) { MessageBox::Show("Массив пуст.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning); return; }
			String^ input = Interaction::InputBox("Введите искомое значение:", "Поиск с барьером", "0");
			double target;
			if (!TryParseDoubleWithCulture(input, target)) { MessageBox::Show("Некорректное значение.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning); return; }

			// Классический обход с кантом
			int n = arrayData->Count;
			arrayData->Add(target); // sentinel
			int i = 0;
			while (arrayData[i] != target) i++;
			arrayData->RemoveAt(n); // remove sentinel
			if (i < n) MessageBox::Show("Элемент найден на позиции: " + (i+1).ToString(), "Результат", MessageBoxButtons::OK, MessageBoxIcon::Information);
			else MessageBox::Show("Элемент не найден.", "Результат", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

		System::Void button_Task6_Click(System::Object^ sender, System::EventArgs^ e) // Бинарный поиск
		{
			if (arrayData->Count == 0) { MessageBox::Show("Массив пуст.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning); return; }
			// Для бинарного поиска массив должен быть отсортирован.
			// Если не уверен, можно отсортировать копию.
			List<double>^ temp = gcnew List<double>(arrayData);
			// сортируем временный список
			for (int i = 1; i < temp->Count; i++) {
				double key = temp[i];
				int j = i - 1;
				while (j >= 0 && temp[j] > key) { temp[j+1] = temp[j]; j--; }
				temp[j+1] = key;
			}

			String^ input = Interaction::InputBox("Введите искомое значение:", "Бинарный поиск", "0");
			double target;
			if (!TryParseDoubleWithCulture(input, target)) { MessageBox::Show("Некорректное значение.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning); return; }

			int left = 0, right = temp->Count - 1;
			int found = -1;
			while (left <= right) {
				int mid = (left + right) / 2;
				if (temp[mid] == target) { found = mid; break; }
				else if (temp[mid] < target) left = mid + 1;
				else right = mid - 1;
			}
			if (found >= 0) MessageBox::Show("Элемент найден в отсортированной версии массива на позиции: " + (found+1).ToString(), "Результат", MessageBoxButtons::OK, MessageBoxIcon::Information);
			else MessageBox::Show("Элемент не найден.", "Результат", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

		// Возврат в меню
		System::Void button_BackToMenu_Click(System::Object^ sender, System::EventArgs^ e)
		{
			this->Close();
		}

		// После закрытия формы показываем родительскую форму
		System::Void Arrayy_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e)
		{
			parentForm->Show();
		}

	};

}
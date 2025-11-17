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
	/// Сводка для Matriks
	/// </summary>
	public ref class Matriks : public System::Windows::Forms::Form
	{
	public:
		// Измененный конструктор, который принимает родительскую форму
		Matriks(System::Windows::Forms::Form^ parent)
		{
			InitializeComponent();
			parentForm = parent; // Сохраняем ссылку на родительскую форму
			matrixData = gcnew List<List<double>^>();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Matriks()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::Form^ parentForm; // Ссылка на родительскую форму (MyForm)

		// Хранилище матрицы (список строк)
		List<List<double>^>^ matrixData;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TextBox^ textBox_MatrixDisplay;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel_Bottom;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel_Tasks;
	private: System::Windows::Forms::Button^ button_Task1;
	private: System::Windows::Forms::Button^ button_Task2;
	private: System::Windows::Forms::Button^ button_Task3;
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
			this->textBox_MatrixDisplay = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel_Bottom = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel_Tasks = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button_Task1 = (gcnew System::Windows::Forms::Button());
			this->button_Task2 = (gcnew System::Windows::Forms::Button());
			this->button_Task3 = (gcnew System::Windows::Forms::Button());
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
			this->tableLayoutPanel1->Controls->Add(this->textBox_MatrixDisplay, 0, 0);
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
			// textBox_MatrixDisplay
			// 
			this->textBox_MatrixDisplay->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBox_MatrixDisplay->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox_MatrixDisplay->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.125, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_MatrixDisplay->Location = System::Drawing::Point(20, 20);
			this->textBox_MatrixDisplay->Margin = System::Windows::Forms::Padding(20);
			this->textBox_MatrixDisplay->Multiline = true;
			this->textBox_MatrixDisplay->Name = L"textBox_MatrixDisplay";
			this->textBox_MatrixDisplay->ReadOnly = true;
			this->textBox_MatrixDisplay->Size = System::Drawing::Size(634, 336);
			this->textBox_MatrixDisplay->TabIndex = 1;
			this->textBox_MatrixDisplay->Text = L"[ ]";
			this->textBox_MatrixDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
			this->button_Task1->Text = L"Произведение элементов < T";
			this->button_Task1->UseVisualStyleBackColor = true;
			this->button_Task1->Click += gcnew System::EventHandler(this, &Matriks::button_Task1_Click);
			// 
			// button_Task2
			// 
			this->button_Task2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button_Task2->Location = System::Drawing::Point(1, 33);
			this->button_Task2->Margin = System::Windows::Forms::Padding(1);
			this->button_Task2->Name = L"button_Task2";
			this->button_Task2->Size = System::Drawing::Size(261, 30);
			this->button_Task2->TabIndex = 1;
			this->button_Task2->Text = L"Произведение диагонали";
			this->button_Task2->UseVisualStyleBackColor = true;
			this->button_Task2->Click += gcnew System::EventHandler(this, &Matriks::button_Task2_Click);
			// 
			// button_Task3
			// 
			this->button_Task3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button_Task3->Location = System::Drawing::Point(1, 65);
			this->button_Task3->Margin = System::Windows::Forms::Padding(1);
			this->button_Task3->Name = L"button_Task3";
			this->button_Task3->Size = System::Drawing::Size(261, 30);
			this->button_Task3->TabIndex = 2;
			this->button_Task3->Text = L"Формировать 1D массив (odd-even diff)";
			this->button_Task3->UseVisualStyleBackColor = true;
			this->button_Task3->Click += gcnew System::EventHandler(this, &Matriks::button_Task3_Click);
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
			this->button_FillManual->Click += gcnew System::EventHandler(this, &Matriks::button_FillManual_Click);
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
			this->button_FillRandom->Click += gcnew System::EventHandler(this, &Matriks::button_FillRandom_Click);
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
			this->button_FillFile->Click += gcnew System::EventHandler(this, &Matriks::button_FillFile_Click);
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
			this->button_BackToMenu->Click += gcnew System::EventHandler(this, &Matriks::button_BackToMenu_Click);
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
			this->button_Clear->Click += gcnew System::EventHandler(this, &Matriks::button_Clear_Click);
			// 
			// Matriks
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(674, 579);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"Matriks";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Матрицы";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Matriks::Matriks_FormClosed);
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
		// Вспомогательный метод для обновления отображения матрицы
		void UpdateMatrixDisplay()
		{
			if (matrixData == nullptr || matrixData->Count == 0) {
				this->textBox_MatrixDisplay->Text = "[ ]";
				return;
			}

			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
			for (int i = 0; i < matrixData->Count; i++) {
				sb->Append("[");
				for (int j = 0; j < matrixData[i]->Count; j++) {
					sb->Append(matrixData[i][j].ToString());
					if (j < matrixData[i]->Count - 1) sb->Append(", ");
				}
				sb->Append("]\r\n");
			}
			this->textBox_MatrixDisplay->Text = sb->ToString();
		}

		// Парсинг double с учетом разделителя
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

		// Разделение текста на токены чисел
		array<String^>^ SplitTokens(String^ text)
		{
			return text->Split(gcnew array<wchar_t>{' ', '\n', '\r', '\t', ',', ';'}, StringSplitOptions::RemoveEmptyEntries);
		}

		// Обработчики заполнения
		System::Void button_FillManual_Click(System::Object^ sender, System::EventArgs^ e)
		{
			String^ dims = Interaction::InputBox("Введите количество строк и столбцов через пробел (например: 3 4):", "Размер матрицы", "3 3");
			if (String::IsNullOrWhiteSpace(dims)) return;
			array<String^>^ parts = dims->Split(gcnew array<wchar_t>{' ', '\t'}, StringSplitOptions::RemoveEmptyEntries);
			int r = 0, c = 0;
			try {
				if (parts->Length >= 2) { r = Convert::ToInt32(parts[0]); c = Convert::ToInt32(parts[1]); }
				else { MessageBox::Show("Нужно два числа: строки и столбцы.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning); return; }
			}
			catch (Exception^) { MessageBox::Show("Некорректные размеры.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning); return; }
			if (r <= 0 || c <= 0) { MessageBox::Show("Размеры должны быть положительными.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning); return; }

			String^ input = Interaction::InputBox(String::Format("Введите {0} элементов матрицы через пробел/запятую или введите строки по одной (разделитель пробел):", r*c), "Элементы матрицы", "1 2 3 4 5 6 7 8 9");
			if (String::IsNullOrWhiteSpace(input)) return;

			array<String^>^ tokens = SplitTokens(input);
			if (tokens->Length != r*c) {
				MessageBox::Show(String::Format("Количество введённых элементов ({0}) не равно ожидаемому ({1}).", tokens->Length, r*c), "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}

			matrixData->Clear();
			int idx = 0;
			double v;
			for (int i = 0; i < r; i++) {
				List<double>^ row = gcnew List<double>();
				for (int j = 0; j < c; j++) {
					if (TryParseDoubleWithCulture(tokens[idx++], v)) row->Add(v);
					else row->Add(0.0); // при ошибке заменяем 0
				}
				matrixData->Add(row);
			}
			UpdateMatrixDisplay();
		}

		System::Void button_FillRandom_Click(System::Object^ sender, System::EventArgs^ e)
		{
			String^ dims = Interaction::InputBox("Введите количество строк и столбцов через пробел (например: 3 4):", "Размер матрицы", "3 3");
			if (String::IsNullOrWhiteSpace(dims)) return;
			array<String^>^ parts = dims->Split(gcnew array<wchar_t>{' ', '\t'}, StringSplitOptions::RemoveEmptyEntries);
			int r = 0, c = 0;
			try {
				if (parts->Length >= 2) { r = Convert::ToInt32(parts[0]); c = Convert::ToInt32(parts[1]); }
				else { MessageBox::Show("Нужно два числа: строки и столбцы.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning); return; }
			}
			catch (Exception^) { MessageBox::Show("Некорректные размеры.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning); return; }
			if (r <= 0 || c <= 0) { MessageBox::Show("Размеры должны быть положительными.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning); return; }

			matrixData->Clear();
			Random^ rnd = gcnew Random();
			for (int i = 0; i < r; i++) {
				List<double>^ row = gcnew List<double>();
				for (int j = 0; j < c; j++) {
					int iv = rnd->Next(-100, 101);
					row->Add((double)iv);
				}
				matrixData->Add(row);
			}
			UpdateMatrixDisplay();
		}

		System::Void button_FillFile_Click(System::Object^ sender, System::EventArgs^ e)
		{
			OpenFileDialog^ ofd = gcnew OpenFileDialog();
			ofd->Filter = "Текстовые файлы|*.txt;*.csv|Все файлы|*.*";
			if (ofd->ShowDialog() != System::Windows::Forms::DialogResult::OK) return;
			String^ text = System::IO::File::ReadAllText(ofd->FileName);
			array<String^>^ tokens = SplitTokens(text);
			if (tokens->Length == 0) { MessageBox::Show("Файл не содержит чисел.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning); return; }

			// Попробуем определить размеры: если первые два токена целые и соответствуют остальным — берем их
			int r = -1, c = -1;
			int idx = 0;
			int total = tokens->Length;
			double tmp;
			bool firstTwoAreInts = false;
			int a0, a1;
			try {
				a0 = Convert::ToInt32(tokens[0]);
				a1 = Convert::ToInt32(tokens[1]);
				if (a0 > 0 && a1 > 0 && (total - 2) == a0 * a1) { r = a0; c = a1; firstTwoAreInts = true; }
			}
			catch (Exception^) { /* ignore */ }

			array<String^>^ dataTokens;
			if (firstTwoAreInts) {
				dataTokens = gcnew array<String^>(total - 2);
				for (int i = 2; i < total; i++) dataTokens[i-2] = tokens[i];
			}
			else {
				// Если число токенов является квадратом — интерпретируем как N x N
				int sq = (int)Math::Sqrt(total);
				if (sq * sq == total) { r = sq; c = sq; dataTokens = tokens; }
				else {
					// Запросим у пользователя размеры
					String^ dims = Interaction::InputBox("Не удалось определить размеры матрицы. Введите строки и столбцы:", "Размеры из файла", "3 3");
					if (String::IsNullOrWhiteSpace(dims)) return;
					array<String^>^ parts = dims->Split(gcnew array<wchar_t>{' ', '\t'}, StringSplitOptions::RemoveEmptyEntries);
					try { r = Convert::ToInt32(parts[0]); c = Convert::ToInt32(parts[1]); }
					catch (Exception^) { MessageBox::Show("Некорректные размеры.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning); return; }
					if (r * c != total) { MessageBox::Show("Количество чисел в файле не соответствует введённым размерам.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning); return; }
					dataTokens = tokens;
				}
			}

			// Заполним матрицу
			matrixData->Clear();
			int p = 0;
			double v;
			for (int i = 0; i < r; i++) {
				List<double>^ row = gcnew List<double>();
				for (int j = 0; j < c; j++) {
					if (TryParseDoubleWithCulture(dataTokens[p++], v)) row->Add(v);
					else row->Add(0.0);
				}
				matrixData->Add(row);
			}
			UpdateMatrixDisplay();
		}

		// Очистка
		System::Void button_Clear_Click(System::Object^ sender, System::EventArgs^ e)
		{
			matrixData->Clear();
			UpdateMatrixDisplay();
		}

		// Задания
		System::Void button_Task1_Click(System::Object^ sender, System::EventArgs^ e) // Произведение элементов меньше T
		{
			if (matrixData->Count == 0) { MessageBox::Show("Матрица пуста.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning); return; }
			String^ input = Interaction::InputBox("Введите число T:", "Произведение элементов < T", "0");
			double T;
			if (!TryParseDoubleWithCulture(input, T)) { MessageBox::Show("Некорректное значение.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning); return; }
		
double prod = 1.0; bool found = false;
			for each (List<double>^ row in matrixData) {
				for each (double x in row) {
					if (x < T) { prod *= x; found = true; }
				}
			}
			if (!found) MessageBox::Show("Элементов меньше T не найдено.", "Результат", MessageBoxButtons::OK, MessageBoxIcon::Information);
			else MessageBox::Show("Произведение элементов меньше T: " + prod.ToString(), "Результат", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

		System::Void button_Task2_Click(System::Object^ sender, System::EventArgs^ e) // Произведение главной диагонали
		{
			if (matrixData->Count == 0) { MessageBox::Show("Матрица пуста.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning); return; }
			int r = matrixData->Count;
			int c = matrixData[0]->Count;
			if (r != c) { MessageBox::Show("Матрица не квадратная. Операция невозможна.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning); return; }
		
double prod = 1.0;
			for (int i = 0; i < r; i++) prod *= matrixData[i][i];
			MessageBox::Show("Произведение элементов главной диагонали: " + prod.ToString(), "Результат", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

		System::Void button_Task3_Click(System::Object^ sender, System::EventArgs^ e) // Формирование одномерного массива
		{
			if (matrixData->Count == 0) { MessageBox::Show("Матрица пуста.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning); return; }
			List<double>^ result = gcnew List<double>();
			for each (List<double>^ row in matrixData) {
				double prodOdd = 1.0; bool hasOdd = false;
				double prodEven = 1.0; bool hasEven = false;
				for each (double x in row) {
					// Считаем целочисленную четность: если число является целым и нечетным/четным
					double intpart;
					if (Math::Abs(x - Math::Round(x)) < 1e-9) {
						int xi = (int)Math::Round(x);
						if ((xi % 2) == 0) { prodEven *= x; hasEven = true; }
						else { prodOdd *= x; hasOdd = true; }
					}
				}
				// Разность произведений (odd - even), если одного из типов нет — считаем произведение равным 1
				if (!hasOdd) prodOdd = 1.0;
				if (!hasEven) prodEven = 1.0;
				result->Add(prodOdd - prodEven);
			}

			// Показать результат и предложить сохранить
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
			sb->Append("[");
			for (int i = 0; i < result->Count; i++) {
				sb->Append(result[i].ToString());
				if (i < result->Count - 1) sb->Append(", ");
			}
			sb->Append("]");
			MessageBox::Show("Результирующий одномерный массив: " + sb->ToString(), "Результат", MessageBoxButtons::OK, MessageBoxIcon::Information);

			if (MessageBox::Show("Сохранить результат в файл?", "Сохранение", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				SaveFileDialog^ sfd = gcnew SaveFileDialog();
				sfd->Filter = "Текстовые файлы|*.txt|Все файлы|*.*";
				if (sfd->ShowDialog() != System::Windows::Forms::DialogResult::OK) return;
				System::IO::File::WriteAllText(sfd->FileName, sb->ToString());
				MessageBox::Show("Результат успешно сохранён.", "Успех", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}

		// Возврат в меню
		System::Void button_BackToMenu_Click(System::Object^ sender, System::EventArgs^ e)
		{
			this->Close();
		}

		// После закрытия формы показываем родительскую форму
		System::Void Matriks_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
			parentForm->Show(); // Показываем родительскую форму (главное меню)
		}

	};
}
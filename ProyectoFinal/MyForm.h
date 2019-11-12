#pragma once

namespace ProyectoFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  lblNombre;




	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;



	private: System::Windows::Forms::ToolStripMenuItem^  nombreToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  promedioPToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  deudaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  bToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  cToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  dToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  eToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  fToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  gToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  hToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  iToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  jToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  kToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  lToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  nToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  oToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  qToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  rToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  sToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  tToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  uToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  vToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  wToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  xToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  yToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  quintoSuperiorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  tercioSuperiorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  reprobadosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  siToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  noToolStripMenuItem;

	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblNombre = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->nombreToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->iToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->jToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->kToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->qToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->vToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->xToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->yToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->promedioPToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->quintoSuperiorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tercioSuperiorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reprobadosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->siToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->noToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->lblNombre);
			this->panel1->Location = System::Drawing::Point(24, 80);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(623, 430);
			this->panel1->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(316, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(90, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Deuda Pendiente";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(441, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(31, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Peso";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(191, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Promedio Ponderado";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(490, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(119, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Fecha de ultima edicion";
			// 
			// lblNombre
			// 
			this->lblNombre->AutoSize = true;
			this->lblNombre->Location = System::Drawing::Point(10, 9);
			this->lblNombre->Name = L"lblNombre";
			this->lblNombre->Size = System::Drawing::Size(44, 13);
			this->lblNombre->TabIndex = 0;
			this->lblNombre->Text = L"Nombre";
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(687, 80);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(527, 430);
			this->panel2->TabIndex = 5;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->nombreToolStripMenuItem,
					this->promedioPToolStripMenuItem, this->deudaToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->ShowCheckMargin = true;
			this->contextMenuStrip1->Size = System::Drawing::Size(162, 70);
			// 
			// nombreToolStripMenuItem
			// 
			this->nombreToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(26) {
				this->aToolStripMenuItem,
					this->bToolStripMenuItem, this->cToolStripMenuItem, this->dToolStripMenuItem, this->eToolStripMenuItem, this->fToolStripMenuItem,
					this->gToolStripMenuItem, this->hToolStripMenuItem, this->iToolStripMenuItem, this->jToolStripMenuItem, this->kToolStripMenuItem,
					this->lToolStripMenuItem, this->mToolStripMenuItem, this->nToolStripMenuItem, this->oToolStripMenuItem, this->pToolStripMenuItem,
					this->qToolStripMenuItem, this->rToolStripMenuItem, this->sToolStripMenuItem, this->tToolStripMenuItem, this->uToolStripMenuItem,
					this->vToolStripMenuItem, this->wToolStripMenuItem, this->xToolStripMenuItem, this->yToolStripMenuItem, this->zToolStripMenuItem
			});
			this->nombreToolStripMenuItem->Name = L"nombreToolStripMenuItem";
			this->nombreToolStripMenuItem->Size = System::Drawing::Size(174, 22);
			this->nombreToolStripMenuItem->Text = L"Nombre";
			// 
			// aToolStripMenuItem
			// 
			this->aToolStripMenuItem->Name = L"aToolStripMenuItem";
			this->aToolStripMenuItem->Size = System::Drawing::Size(85, 22);
			this->aToolStripMenuItem->Text = L"A";
			// 
			// bToolStripMenuItem
			// 
			this->bToolStripMenuItem->Name = L"bToolStripMenuItem";
			this->bToolStripMenuItem->Size = System::Drawing::Size(85, 22);
			this->bToolStripMenuItem->Text = L"B";
			// 
			// cToolStripMenuItem
			// 
			this->cToolStripMenuItem->Name = L"cToolStripMenuItem";
			this->cToolStripMenuItem->Size = System::Drawing::Size(85, 22);
			this->cToolStripMenuItem->Text = L"C";
			// 
			// dToolStripMenuItem
			// 
			this->dToolStripMenuItem->Name = L"dToolStripMenuItem";
			this->dToolStripMenuItem->Size = System::Drawing::Size(85, 22);
			this->dToolStripMenuItem->Text = L"D";
			// 
			// eToolStripMenuItem
			// 
			this->eToolStripMenuItem->Name = L"eToolStripMenuItem";
			this->eToolStripMenuItem->Size = System::Drawing::Size(85, 22);
			this->eToolStripMenuItem->Text = L"E";
			// 
			// fToolStripMenuItem
			// 
			this->fToolStripMenuItem->Name = L"fToolStripMenuItem";
			this->fToolStripMenuItem->Size = System::Drawing::Size(85, 22);
			this->fToolStripMenuItem->Text = L"F";
			// 
			// gToolStripMenuItem
			// 
			this->gToolStripMenuItem->Name = L"gToolStripMenuItem";
			this->gToolStripMenuItem->Size = System::Drawing::Size(85, 22);
			this->gToolStripMenuItem->Text = L"G";
			// 
			// hToolStripMenuItem
			// 
			this->hToolStripMenuItem->Name = L"hToolStripMenuItem";
			this->hToolStripMenuItem->Size = System::Drawing::Size(85, 22);
			this->hToolStripMenuItem->Text = L"H";
			// 
			// iToolStripMenuItem
			// 
			this->iToolStripMenuItem->Name = L"iToolStripMenuItem";
			this->iToolStripMenuItem->Size = System::Drawing::Size(85, 22);
			this->iToolStripMenuItem->Text = L"I";
			// 
			// jToolStripMenuItem
			// 
			this->jToolStripMenuItem->Name = L"jToolStripMenuItem";
			this->jToolStripMenuItem->Size = System::Drawing::Size(85, 22);
			this->jToolStripMenuItem->Text = L"J";
			// 
			// kToolStripMenuItem
			// 
			this->kToolStripMenuItem->Name = L"kToolStripMenuItem";
			this->kToolStripMenuItem->Size = System::Drawing::Size(85, 22);
			this->kToolStripMenuItem->Text = L"K";
			// 
			// lToolStripMenuItem
			// 
			this->lToolStripMenuItem->Name = L"lToolStripMenuItem";
			this->lToolStripMenuItem->Size = System::Drawing::Size(85, 22);
			this->lToolStripMenuItem->Text = L"L";
			// 
			// mToolStripMenuItem
			// 
			this->mToolStripMenuItem->Name = L"mToolStripMenuItem";
			this->mToolStripMenuItem->Size = System::Drawing::Size(85, 22);
			this->mToolStripMenuItem->Text = L"M";
			// 
			// nToolStripMenuItem
			// 
			this->nToolStripMenuItem->Name = L"nToolStripMenuItem";
			this->nToolStripMenuItem->Size = System::Drawing::Size(85, 22);
			this->nToolStripMenuItem->Text = L"N";
			// 
			// oToolStripMenuItem
			// 
			this->oToolStripMenuItem->Name = L"oToolStripMenuItem";
			this->oToolStripMenuItem->Size = System::Drawing::Size(85, 22);
			this->oToolStripMenuItem->Text = L"O";
			// 
			// pToolStripMenuItem
			// 
			this->pToolStripMenuItem->Name = L"pToolStripMenuItem";
			this->pToolStripMenuItem->Size = System::Drawing::Size(85, 22);
			this->pToolStripMenuItem->Text = L"P";
			// 
			// qToolStripMenuItem
			// 
			this->qToolStripMenuItem->Name = L"qToolStripMenuItem";
			this->qToolStripMenuItem->Size = System::Drawing::Size(85, 22);
			this->qToolStripMenuItem->Text = L"Q";
			// 
			// rToolStripMenuItem
			// 
			this->rToolStripMenuItem->Name = L"rToolStripMenuItem";
			this->rToolStripMenuItem->Size = System::Drawing::Size(85, 22);
			this->rToolStripMenuItem->Text = L"R";
			// 
			// sToolStripMenuItem
			// 
			this->sToolStripMenuItem->Name = L"sToolStripMenuItem";
			this->sToolStripMenuItem->Size = System::Drawing::Size(85, 22);
			this->sToolStripMenuItem->Text = L"S";
			// 
			// tToolStripMenuItem
			// 
			this->tToolStripMenuItem->Name = L"tToolStripMenuItem";
			this->tToolStripMenuItem->Size = System::Drawing::Size(85, 22);
			this->tToolStripMenuItem->Text = L"T";
			// 
			// uToolStripMenuItem
			// 
			this->uToolStripMenuItem->Name = L"uToolStripMenuItem";
			this->uToolStripMenuItem->Size = System::Drawing::Size(85, 22);
			this->uToolStripMenuItem->Text = L"U";
			// 
			// vToolStripMenuItem
			// 
			this->vToolStripMenuItem->Name = L"vToolStripMenuItem";
			this->vToolStripMenuItem->Size = System::Drawing::Size(85, 22);
			this->vToolStripMenuItem->Text = L"V";
			// 
			// wToolStripMenuItem
			// 
			this->wToolStripMenuItem->Name = L"wToolStripMenuItem";
			this->wToolStripMenuItem->Size = System::Drawing::Size(85, 22);
			this->wToolStripMenuItem->Text = L"W";
			// 
			// xToolStripMenuItem
			// 
			this->xToolStripMenuItem->Name = L"xToolStripMenuItem";
			this->xToolStripMenuItem->Size = System::Drawing::Size(85, 22);
			this->xToolStripMenuItem->Text = L"X";
			// 
			// yToolStripMenuItem
			// 
			this->yToolStripMenuItem->Name = L"yToolStripMenuItem";
			this->yToolStripMenuItem->Size = System::Drawing::Size(85, 22);
			this->yToolStripMenuItem->Text = L"Y";
			// 
			// zToolStripMenuItem
			// 
			this->zToolStripMenuItem->Name = L"zToolStripMenuItem";
			this->zToolStripMenuItem->Size = System::Drawing::Size(85, 22);
			this->zToolStripMenuItem->Text = L"Z";
			// 
			// promedioPToolStripMenuItem
			// 
			this->promedioPToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->quintoSuperiorToolStripMenuItem,
					this->tercioSuperiorToolStripMenuItem, this->reprobadosToolStripMenuItem
			});
			this->promedioPToolStripMenuItem->Name = L"promedioPToolStripMenuItem";
			this->promedioPToolStripMenuItem->Size = System::Drawing::Size(174, 22);
			this->promedioPToolStripMenuItem->Text = L"Promedio P.";
			// 
			// quintoSuperiorToolStripMenuItem
			// 
			this->quintoSuperiorToolStripMenuItem->Name = L"quintoSuperiorToolStripMenuItem";
			this->quintoSuperiorToolStripMenuItem->Size = System::Drawing::Size(157, 22);
			this->quintoSuperiorToolStripMenuItem->Text = L"Quinto superior";
			// 
			// tercioSuperiorToolStripMenuItem
			// 
			this->tercioSuperiorToolStripMenuItem->Name = L"tercioSuperiorToolStripMenuItem";
			this->tercioSuperiorToolStripMenuItem->Size = System::Drawing::Size(157, 22);
			this->tercioSuperiorToolStripMenuItem->Text = L"Tercio superior";
			// 
			// reprobadosToolStripMenuItem
			// 
			this->reprobadosToolStripMenuItem->Name = L"reprobadosToolStripMenuItem";
			this->reprobadosToolStripMenuItem->Size = System::Drawing::Size(157, 22);
			this->reprobadosToolStripMenuItem->Text = L"Reprobados";
			// 
			// deudaToolStripMenuItem
			// 
			this->deudaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->siToolStripMenuItem,
					this->noToolStripMenuItem
			});
			this->deudaToolStripMenuItem->Name = L"deudaToolStripMenuItem";
			this->deudaToolStripMenuItem->Size = System::Drawing::Size(174, 22);
			this->deudaToolStripMenuItem->Text = L"Deuda";
			// 
			// siToolStripMenuItem
			// 
			this->siToolStripMenuItem->Name = L"siToolStripMenuItem";
			this->siToolStripMenuItem->Size = System::Drawing::Size(90, 22);
			this->siToolStripMenuItem->Text = L"Si";
			// 
			// noToolStripMenuItem
			// 
			this->noToolStripMenuItem->Name = L"noToolStripMenuItem";
			this->noToolStripMenuItem->Size = System::Drawing::Size(90, 22);
			this->noToolStripMenuItem->Text = L"No";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1259, 522);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	
	



};
}

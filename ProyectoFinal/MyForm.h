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
	private: System::Windows::Forms::Panel^  ArchivosPnl;
	protected:


	private: System::Windows::Forms::Label^  lblNombre;




	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Panel^  DatosPnl;
	private: System::Windows::Forms::MenuStrip^  OpcMSrp;


	private: System::Windows::Forms::ToolStripMenuItem^  filtrarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  inicialNombreToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  bToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  cToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  dToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  eToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  fToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  gToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  hToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  iToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  jToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  kToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  lToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  mToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  nToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  oToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  pToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  qToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  rToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  sToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  tToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  uToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  vToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  wToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  xToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  yToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  zToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  promedioPToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  quintoSuperiorToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  tercioSuperiorToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  reprobadosToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  deudaPendienteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  siToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  noToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  porMesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  eneroToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  febreroToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  marzoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  abrilToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mayoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  junioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  julioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  agostoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  septiembreToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  octubreToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  noviembreToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  diciembreToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ordenarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  fechaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  masRecienteAMasAntiguoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  masAntiguoAMasRecienteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  nombreToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  ordenAlfabeticoAcendenteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ordenAlfabeticoDescendenteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  promedioPonderadoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mayorNotaAMenorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  menorNotaAMayorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  deudaPendienteToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  mayorDeudaAMenorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  menorDeudaAMayorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pesoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mayorPesoAMenorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  menorPesoAMayorToolStripMenuItem;
private: System::Windows::Forms::TextBox^  textBox1;
private: System::Windows::Forms::Label^  label1;







































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
			this->ArchivosPnl = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblNombre = (gcnew System::Windows::Forms::Label());
			this->DatosPnl = (gcnew System::Windows::Forms::Panel());
			this->OpcMSrp = (gcnew System::Windows::Forms::MenuStrip());
			this->filtrarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->inicialNombreToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->iToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->jToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->kToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->qToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->vToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->xToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->yToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->promedioPToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->quintoSuperiorToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tercioSuperiorToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reprobadosToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deudaPendienteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->siToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->noToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->porMesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eneroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->febreroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->marzoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->abrilToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mayoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->junioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->julioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->agostoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->septiembreToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->octubreToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->noviembreToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->diciembreToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ordenarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fechaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->masRecienteAMasAntiguoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->masAntiguoAMasRecienteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nombreToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ordenAlfabeticoAcendenteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ordenAlfabeticoDescendenteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->promedioPonderadoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mayorNotaAMenorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menorNotaAMayorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deudaPendienteToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mayorDeudaAMenorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menorDeudaAMayorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pesoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mayorPesoAMenorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menorPesoAMayorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ArchivosPnl->SuspendLayout();
			this->OpcMSrp->SuspendLayout();
			this->SuspendLayout();
			// 
			// ArchivosPnl
			// 
			this->ArchivosPnl->Controls->Add(this->label5);
			this->ArchivosPnl->Controls->Add(this->label4);
			this->ArchivosPnl->Controls->Add(this->label3);
			this->ArchivosPnl->Controls->Add(this->label2);
			this->ArchivosPnl->Controls->Add(this->lblNombre);
			this->ArchivosPnl->Location = System::Drawing::Point(24, 44);
			this->ArchivosPnl->Name = L"ArchivosPnl";
			this->ArchivosPnl->Size = System::Drawing::Size(623, 466);
			this->ArchivosPnl->TabIndex = 1;
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
			// DatosPnl
			// 
			this->DatosPnl->Location = System::Drawing::Point(687, 44);
			this->DatosPnl->Name = L"DatosPnl";
			this->DatosPnl->Size = System::Drawing::Size(527, 466);
			this->DatosPnl->TabIndex = 5;
			// 
			// OpcMSrp
			// 
			this->OpcMSrp->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->filtrarToolStripMenuItem,
					this->ordenarToolStripMenuItem
			});
			this->OpcMSrp->Location = System::Drawing::Point(0, 0);
			this->OpcMSrp->Name = L"OpcMSrp";
			this->OpcMSrp->Size = System::Drawing::Size(1259, 24);
			this->OpcMSrp->TabIndex = 6;
			this->OpcMSrp->Text = L"menuStrip1";
			// 
			// filtrarToolStripMenuItem
			// 
			this->filtrarToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->inicialNombreToolStripMenuItem,
					this->promedioPToolStripMenuItem1, this->deudaPendienteToolStripMenuItem, this->porMesToolStripMenuItem
			});
			this->filtrarToolStripMenuItem->Name = L"filtrarToolStripMenuItem";
			this->filtrarToolStripMenuItem->Size = System::Drawing::Size(49, 20);
			this->filtrarToolStripMenuItem->Text = L"Filtrar";
			// 
			// inicialNombreToolStripMenuItem
			// 
			this->inicialNombreToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(26) {
				this->aToolStripMenuItem1,
					this->bToolStripMenuItem1, this->cToolStripMenuItem1, this->dToolStripMenuItem1, this->eToolStripMenuItem1, this->fToolStripMenuItem1,
					this->gToolStripMenuItem1, this->hToolStripMenuItem1, this->iToolStripMenuItem1, this->jToolStripMenuItem1, this->kToolStripMenuItem1,
					this->lToolStripMenuItem1, this->mToolStripMenuItem1, this->nToolStripMenuItem1, this->oToolStripMenuItem1, this->pToolStripMenuItem1,
					this->qToolStripMenuItem1, this->rToolStripMenuItem1, this->sToolStripMenuItem1, this->tToolStripMenuItem1, this->uToolStripMenuItem1,
					this->vToolStripMenuItem1, this->wToolStripMenuItem1, this->xToolStripMenuItem1, this->yToolStripMenuItem1, this->zToolStripMenuItem1
			});
			this->inicialNombreToolStripMenuItem->Name = L"inicialNombreToolStripMenuItem";
			this->inicialNombreToolStripMenuItem->Size = System::Drawing::Size(164, 22);
			this->inicialNombreToolStripMenuItem->Text = L"Inicial Nombre";
			// 
			// aToolStripMenuItem1
			// 
			this->aToolStripMenuItem1->Name = L"aToolStripMenuItem1";
			this->aToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->aToolStripMenuItem1->Text = L"A";
			// 
			// bToolStripMenuItem1
			// 
			this->bToolStripMenuItem1->Name = L"bToolStripMenuItem1";
			this->bToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->bToolStripMenuItem1->Text = L"B";
			// 
			// cToolStripMenuItem1
			// 
			this->cToolStripMenuItem1->Name = L"cToolStripMenuItem1";
			this->cToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->cToolStripMenuItem1->Text = L"C";
			// 
			// dToolStripMenuItem1
			// 
			this->dToolStripMenuItem1->Name = L"dToolStripMenuItem1";
			this->dToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->dToolStripMenuItem1->Text = L"D";
			// 
			// eToolStripMenuItem1
			// 
			this->eToolStripMenuItem1->Name = L"eToolStripMenuItem1";
			this->eToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->eToolStripMenuItem1->Text = L"E";
			// 
			// fToolStripMenuItem1
			// 
			this->fToolStripMenuItem1->Name = L"fToolStripMenuItem1";
			this->fToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->fToolStripMenuItem1->Text = L"F";
			// 
			// gToolStripMenuItem1
			// 
			this->gToolStripMenuItem1->Name = L"gToolStripMenuItem1";
			this->gToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->gToolStripMenuItem1->Text = L"G";
			// 
			// hToolStripMenuItem1
			// 
			this->hToolStripMenuItem1->Name = L"hToolStripMenuItem1";
			this->hToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->hToolStripMenuItem1->Text = L"H";
			// 
			// iToolStripMenuItem1
			// 
			this->iToolStripMenuItem1->Name = L"iToolStripMenuItem1";
			this->iToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->iToolStripMenuItem1->Text = L"I";
			// 
			// jToolStripMenuItem1
			// 
			this->jToolStripMenuItem1->Name = L"jToolStripMenuItem1";
			this->jToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->jToolStripMenuItem1->Text = L"J";
			// 
			// kToolStripMenuItem1
			// 
			this->kToolStripMenuItem1->Name = L"kToolStripMenuItem1";
			this->kToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->kToolStripMenuItem1->Text = L"K";
			// 
			// lToolStripMenuItem1
			// 
			this->lToolStripMenuItem1->Name = L"lToolStripMenuItem1";
			this->lToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->lToolStripMenuItem1->Text = L"L";
			// 
			// mToolStripMenuItem1
			// 
			this->mToolStripMenuItem1->Name = L"mToolStripMenuItem1";
			this->mToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->mToolStripMenuItem1->Text = L"M";
			// 
			// nToolStripMenuItem1
			// 
			this->nToolStripMenuItem1->Name = L"nToolStripMenuItem1";
			this->nToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->nToolStripMenuItem1->Text = L"N";
			// 
			// oToolStripMenuItem1
			// 
			this->oToolStripMenuItem1->Name = L"oToolStripMenuItem1";
			this->oToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->oToolStripMenuItem1->Text = L"O";
			// 
			// pToolStripMenuItem1
			// 
			this->pToolStripMenuItem1->Name = L"pToolStripMenuItem1";
			this->pToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->pToolStripMenuItem1->Text = L"P";
			// 
			// qToolStripMenuItem1
			// 
			this->qToolStripMenuItem1->Name = L"qToolStripMenuItem1";
			this->qToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->qToolStripMenuItem1->Text = L"Q";
			// 
			// rToolStripMenuItem1
			// 
			this->rToolStripMenuItem1->Name = L"rToolStripMenuItem1";
			this->rToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->rToolStripMenuItem1->Text = L"R";
			// 
			// sToolStripMenuItem1
			// 
			this->sToolStripMenuItem1->Name = L"sToolStripMenuItem1";
			this->sToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->sToolStripMenuItem1->Text = L"S";
			// 
			// tToolStripMenuItem1
			// 
			this->tToolStripMenuItem1->Name = L"tToolStripMenuItem1";
			this->tToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->tToolStripMenuItem1->Text = L"T";
			// 
			// uToolStripMenuItem1
			// 
			this->uToolStripMenuItem1->Name = L"uToolStripMenuItem1";
			this->uToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->uToolStripMenuItem1->Text = L"U";
			// 
			// vToolStripMenuItem1
			// 
			this->vToolStripMenuItem1->Name = L"vToolStripMenuItem1";
			this->vToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->vToolStripMenuItem1->Text = L"V";
			// 
			// wToolStripMenuItem1
			// 
			this->wToolStripMenuItem1->Name = L"wToolStripMenuItem1";
			this->wToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->wToolStripMenuItem1->Text = L"W";
			// 
			// xToolStripMenuItem1
			// 
			this->xToolStripMenuItem1->Name = L"xToolStripMenuItem1";
			this->xToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->xToolStripMenuItem1->Text = L"X";
			// 
			// yToolStripMenuItem1
			// 
			this->yToolStripMenuItem1->Name = L"yToolStripMenuItem1";
			this->yToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->yToolStripMenuItem1->Text = L"Y";
			// 
			// zToolStripMenuItem1
			// 
			this->zToolStripMenuItem1->Name = L"zToolStripMenuItem1";
			this->zToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->zToolStripMenuItem1->Text = L"Z";
			// 
			// promedioPToolStripMenuItem1
			// 
			this->promedioPToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->quintoSuperiorToolStripMenuItem1,
					this->tercioSuperiorToolStripMenuItem1, this->reprobadosToolStripMenuItem1
			});
			this->promedioPToolStripMenuItem1->Name = L"promedioPToolStripMenuItem1";
			this->promedioPToolStripMenuItem1->Size = System::Drawing::Size(164, 22);
			this->promedioPToolStripMenuItem1->Text = L"Promedio P.";
			// 
			// quintoSuperiorToolStripMenuItem1
			// 
			this->quintoSuperiorToolStripMenuItem1->Name = L"quintoSuperiorToolStripMenuItem1";
			this->quintoSuperiorToolStripMenuItem1->Size = System::Drawing::Size(158, 22);
			this->quintoSuperiorToolStripMenuItem1->Text = L"Quinto Superior";
			// 
			// tercioSuperiorToolStripMenuItem1
			// 
			this->tercioSuperiorToolStripMenuItem1->Name = L"tercioSuperiorToolStripMenuItem1";
			this->tercioSuperiorToolStripMenuItem1->Size = System::Drawing::Size(158, 22);
			this->tercioSuperiorToolStripMenuItem1->Text = L"Tercio Superior";
			// 
			// reprobadosToolStripMenuItem1
			// 
			this->reprobadosToolStripMenuItem1->Name = L"reprobadosToolStripMenuItem1";
			this->reprobadosToolStripMenuItem1->Size = System::Drawing::Size(158, 22);
			this->reprobadosToolStripMenuItem1->Text = L"Reprobados";
			// 
			// deudaPendienteToolStripMenuItem
			// 
			this->deudaPendienteToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->siToolStripMenuItem1,
					this->noToolStripMenuItem1
			});
			this->deudaPendienteToolStripMenuItem->Name = L"deudaPendienteToolStripMenuItem";
			this->deudaPendienteToolStripMenuItem->Size = System::Drawing::Size(164, 22);
			this->deudaPendienteToolStripMenuItem->Text = L"Deuda Pendiente";
			// 
			// siToolStripMenuItem1
			// 
			this->siToolStripMenuItem1->Name = L"siToolStripMenuItem1";
			this->siToolStripMenuItem1->Size = System::Drawing::Size(90, 22);
			this->siToolStripMenuItem1->Text = L"Si";
			// 
			// noToolStripMenuItem1
			// 
			this->noToolStripMenuItem1->Name = L"noToolStripMenuItem1";
			this->noToolStripMenuItem1->Size = System::Drawing::Size(90, 22);
			this->noToolStripMenuItem1->Text = L"No";
			// 
			// porMesToolStripMenuItem
			// 
			this->porMesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(12) {
				this->eneroToolStripMenuItem,
					this->febreroToolStripMenuItem, this->marzoToolStripMenuItem, this->abrilToolStripMenuItem, this->mayoToolStripMenuItem, this->junioToolStripMenuItem,
					this->julioToolStripMenuItem, this->agostoToolStripMenuItem, this->septiembreToolStripMenuItem, this->octubreToolStripMenuItem,
					this->noviembreToolStripMenuItem, this->diciembreToolStripMenuItem
			});
			this->porMesToolStripMenuItem->Name = L"porMesToolStripMenuItem";
			this->porMesToolStripMenuItem->Size = System::Drawing::Size(164, 22);
			this->porMesToolStripMenuItem->Text = L"Por mes";
			// 
			// eneroToolStripMenuItem
			// 
			this->eneroToolStripMenuItem->Name = L"eneroToolStripMenuItem";
			this->eneroToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->eneroToolStripMenuItem->Text = L"Enero";
			// 
			// febreroToolStripMenuItem
			// 
			this->febreroToolStripMenuItem->Name = L"febreroToolStripMenuItem";
			this->febreroToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->febreroToolStripMenuItem->Text = L"Febrero";
			// 
			// marzoToolStripMenuItem
			// 
			this->marzoToolStripMenuItem->Name = L"marzoToolStripMenuItem";
			this->marzoToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->marzoToolStripMenuItem->Text = L"Marzo";
			// 
			// abrilToolStripMenuItem
			// 
			this->abrilToolStripMenuItem->Name = L"abrilToolStripMenuItem";
			this->abrilToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->abrilToolStripMenuItem->Text = L"Abril";
			// 
			// mayoToolStripMenuItem
			// 
			this->mayoToolStripMenuItem->Name = L"mayoToolStripMenuItem";
			this->mayoToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->mayoToolStripMenuItem->Text = L"Mayo";
			// 
			// junioToolStripMenuItem
			// 
			this->junioToolStripMenuItem->Name = L"junioToolStripMenuItem";
			this->junioToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->junioToolStripMenuItem->Text = L"Junio";
			// 
			// julioToolStripMenuItem
			// 
			this->julioToolStripMenuItem->Name = L"julioToolStripMenuItem";
			this->julioToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->julioToolStripMenuItem->Text = L"Julio";
			// 
			// agostoToolStripMenuItem
			// 
			this->agostoToolStripMenuItem->Name = L"agostoToolStripMenuItem";
			this->agostoToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->agostoToolStripMenuItem->Text = L"Agosto";
			// 
			// septiembreToolStripMenuItem
			// 
			this->septiembreToolStripMenuItem->Name = L"septiembreToolStripMenuItem";
			this->septiembreToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->septiembreToolStripMenuItem->Text = L"Septiembre";
			// 
			// octubreToolStripMenuItem
			// 
			this->octubreToolStripMenuItem->Name = L"octubreToolStripMenuItem";
			this->octubreToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->octubreToolStripMenuItem->Text = L"Octubre";
			// 
			// noviembreToolStripMenuItem
			// 
			this->noviembreToolStripMenuItem->Name = L"noviembreToolStripMenuItem";
			this->noviembreToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->noviembreToolStripMenuItem->Text = L"Noviembre";
			// 
			// diciembreToolStripMenuItem
			// 
			this->diciembreToolStripMenuItem->Name = L"diciembreToolStripMenuItem";
			this->diciembreToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->diciembreToolStripMenuItem->Text = L"Diciembre";
			// 
			// ordenarToolStripMenuItem
			// 
			this->ordenarToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->fechaToolStripMenuItem,
					this->nombreToolStripMenuItem1, this->promedioPonderadoToolStripMenuItem, this->deudaPendienteToolStripMenuItem1, this->pesoToolStripMenuItem
			});
			this->ordenarToolStripMenuItem->Name = L"ordenarToolStripMenuItem";
			this->ordenarToolStripMenuItem->Size = System::Drawing::Size(62, 20);
			this->ordenarToolStripMenuItem->Text = L"Ordenar";
			// 
			// fechaToolStripMenuItem
			// 
			this->fechaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->masRecienteAMasAntiguoToolStripMenuItem,
					this->masAntiguoAMasRecienteToolStripMenuItem
			});
			this->fechaToolStripMenuItem->Name = L"fechaToolStripMenuItem";
			this->fechaToolStripMenuItem->Size = System::Drawing::Size(187, 22);
			this->fechaToolStripMenuItem->Text = L"Fecha";
			// 
			// masRecienteAMasAntiguoToolStripMenuItem
			// 
			this->masRecienteAMasAntiguoToolStripMenuItem->Name = L"masRecienteAMasAntiguoToolStripMenuItem";
			this->masRecienteAMasAntiguoToolStripMenuItem->Size = System::Drawing::Size(219, 22);
			this->masRecienteAMasAntiguoToolStripMenuItem->Text = L"Mas reciente a mas antiguo";
			// 
			// masAntiguoAMasRecienteToolStripMenuItem
			// 
			this->masAntiguoAMasRecienteToolStripMenuItem->Name = L"masAntiguoAMasRecienteToolStripMenuItem";
			this->masAntiguoAMasRecienteToolStripMenuItem->Size = System::Drawing::Size(219, 22);
			this->masAntiguoAMasRecienteToolStripMenuItem->Text = L"Mas antiguo a mas reciente";
			// 
			// nombreToolStripMenuItem1
			// 
			this->nombreToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ordenAlfabeticoAcendenteToolStripMenuItem,
					this->ordenAlfabeticoDescendenteToolStripMenuItem
			});
			this->nombreToolStripMenuItem1->Name = L"nombreToolStripMenuItem1";
			this->nombreToolStripMenuItem1->Size = System::Drawing::Size(187, 22);
			this->nombreToolStripMenuItem1->Text = L"Nombre";
			// 
			// ordenAlfabeticoAcendenteToolStripMenuItem
			// 
			this->ordenAlfabeticoAcendenteToolStripMenuItem->Name = L"ordenAlfabeticoAcendenteToolStripMenuItem";
			this->ordenAlfabeticoAcendenteToolStripMenuItem->Size = System::Drawing::Size(232, 22);
			this->ordenAlfabeticoAcendenteToolStripMenuItem->Text = L"Orden alfabetico acendente";
			// 
			// ordenAlfabeticoDescendenteToolStripMenuItem
			// 
			this->ordenAlfabeticoDescendenteToolStripMenuItem->Name = L"ordenAlfabeticoDescendenteToolStripMenuItem";
			this->ordenAlfabeticoDescendenteToolStripMenuItem->Size = System::Drawing::Size(232, 22);
			this->ordenAlfabeticoDescendenteToolStripMenuItem->Text = L"Orden alfabetico descendente";
			// 
			// promedioPonderadoToolStripMenuItem
			// 
			this->promedioPonderadoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->mayorNotaAMenorToolStripMenuItem,
					this->menorNotaAMayorToolStripMenuItem
			});
			this->promedioPonderadoToolStripMenuItem->Name = L"promedioPonderadoToolStripMenuItem";
			this->promedioPonderadoToolStripMenuItem->Size = System::Drawing::Size(187, 22);
			this->promedioPonderadoToolStripMenuItem->Text = L"Promedio Ponderado";
			// 
			// mayorNotaAMenorToolStripMenuItem
			// 
			this->mayorNotaAMenorToolStripMenuItem->Name = L"mayorNotaAMenorToolStripMenuItem";
			this->mayorNotaAMenorToolStripMenuItem->Size = System::Drawing::Size(182, 22);
			this->mayorNotaAMenorToolStripMenuItem->Text = L"Mayor nota a menor";
			// 
			// menorNotaAMayorToolStripMenuItem
			// 
			this->menorNotaAMayorToolStripMenuItem->Name = L"menorNotaAMayorToolStripMenuItem";
			this->menorNotaAMayorToolStripMenuItem->Size = System::Drawing::Size(182, 22);
			this->menorNotaAMayorToolStripMenuItem->Text = L"Menor nota a mayor";
			// 
			// deudaPendienteToolStripMenuItem1
			// 
			this->deudaPendienteToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->mayorDeudaAMenorToolStripMenuItem,
					this->menorDeudaAMayorToolStripMenuItem
			});
			this->deudaPendienteToolStripMenuItem1->Name = L"deudaPendienteToolStripMenuItem1";
			this->deudaPendienteToolStripMenuItem1->Size = System::Drawing::Size(187, 22);
			this->deudaPendienteToolStripMenuItem1->Text = L"Deuda Pendiente";
			// 
			// mayorDeudaAMenorToolStripMenuItem
			// 
			this->mayorDeudaAMenorToolStripMenuItem->Name = L"mayorDeudaAMenorToolStripMenuItem";
			this->mayorDeudaAMenorToolStripMenuItem->Size = System::Drawing::Size(191, 22);
			this->mayorDeudaAMenorToolStripMenuItem->Text = L"Mayor deuda a menor";
			// 
			// menorDeudaAMayorToolStripMenuItem
			// 
			this->menorDeudaAMayorToolStripMenuItem->Name = L"menorDeudaAMayorToolStripMenuItem";
			this->menorDeudaAMayorToolStripMenuItem->Size = System::Drawing::Size(191, 22);
			this->menorDeudaAMayorToolStripMenuItem->Text = L"Menor deuda a mayor";
			// 
			// pesoToolStripMenuItem
			// 
			this->pesoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->mayorPesoAMenorToolStripMenuItem,
					this->menorPesoAMayorToolStripMenuItem
			});
			this->pesoToolStripMenuItem->Name = L"pesoToolStripMenuItem";
			this->pesoToolStripMenuItem->Size = System::Drawing::Size(187, 22);
			this->pesoToolStripMenuItem->Text = L"Peso";
			// 
			// mayorPesoAMenorToolStripMenuItem
			// 
			this->mayorPesoAMenorToolStripMenuItem->Name = L"mayorPesoAMenorToolStripMenuItem";
			this->mayorPesoAMenorToolStripMenuItem->Size = System::Drawing::Size(183, 22);
			this->mayorPesoAMenorToolStripMenuItem->Text = L"Mayor peso a menor";
			// 
			// menorPesoAMayorToolStripMenuItem
			// 
			this->menorPesoAMayorToolStripMenuItem->Name = L"menorPesoAMayorToolStripMenuItem";
			this->menorPesoAMayorToolStripMenuItem->Size = System::Drawing::Size(183, 22);
			this->menorPesoAMayorToolStripMenuItem->Text = L"Menor peso a mayor";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(489, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(158, 20);
			this->textBox1->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(443, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Buscar";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1259, 522);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->OpcMSrp);
			this->Controls->Add(this->DatosPnl);
			this->Controls->Add(this->ArchivosPnl);
			this->MainMenuStrip = this->OpcMSrp;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ArchivosPnl->ResumeLayout(false);
			this->ArchivosPnl->PerformLayout();
			this->OpcMSrp->ResumeLayout(false);
			this->OpcMSrp->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	





};
}

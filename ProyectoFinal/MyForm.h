#pragma once
#include "ArbolAVL.hpp"

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
		MyForm(Alumno** lista)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			k = 0;
			arbol = new ArbolAVL();
			this->lista = lista;
			for (int i = 0; i < 8; i++) {
				arbol->insertar(lista[i]);
			}
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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
	private: System::Windows::Forms::Label^  lblPeso;





	private: System::Windows::Forms::Label^  lblPP;
	private: System::Windows::Forms::Label^  lblFecha;


	private: System::Windows::Forms::Label^  lblDP;


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













	private: System::Windows::Forms::ToolStripMenuItem^  ordenarToolStripMenuItem;



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
private: System::Windows::Forms::TextBox^  txtBoxNombre;


private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::Label^  lblFecha6;
private: System::Windows::Forms::Label^  lblFecha7;


private: System::Windows::Forms::Label^  lblFecha5;

private: System::Windows::Forms::Label^  lblFecha4;

private: System::Windows::Forms::Label^  lblFecha3;

private: System::Windows::Forms::Label^  lblFecha2;

private: System::Windows::Forms::Label^  lblFecha1;

private: System::Windows::Forms::Label^  lblPeso7;

private: System::Windows::Forms::Label^  lblPeso6;

private: System::Windows::Forms::Label^  lblPeso5;

private: System::Windows::Forms::Label^  lblPeso4;

private: System::Windows::Forms::Label^  lblPeso3;

private: System::Windows::Forms::Label^  lblPeso2;

private: System::Windows::Forms::Label^  lblPeso1;

private: System::Windows::Forms::Label^  lblDP7;

private: System::Windows::Forms::Label^  lblDP6;

private: System::Windows::Forms::Label^  lblDP5;

private: System::Windows::Forms::Label^  lblDP4;

private: System::Windows::Forms::Label^  lblDP3;

private: System::Windows::Forms::Label^  lblDP2;

private: System::Windows::Forms::Label^  lblDP1;

private: System::Windows::Forms::Label^  lblPP7;

private: System::Windows::Forms::Label^  lblPP6;

private: System::Windows::Forms::Label^  lblPP5;

private: System::Windows::Forms::Label^  lblPP4;

private: System::Windows::Forms::Label^  lblPP3;

private: System::Windows::Forms::Label^  lblPP2;

private: System::Windows::Forms::Label^  lblPP1;

private: System::Windows::Forms::Label^  lblNombre7;

private: System::Windows::Forms::Label^  lblNombre6;

private: System::Windows::Forms::Label^  lblNombre5;

private: System::Windows::Forms::Label^  lblNombre4;

private: System::Windows::Forms::Label^  lblNombre3;

private: System::Windows::Forms::Label^  lblNombre2;

private: System::Windows::Forms::Label^  lblNombre1;
private: System::Windows::Forms::Label^  lblFecha8;

private: System::Windows::Forms::Label^  lblPeso8;

private: System::Windows::Forms::Label^  lblDP8;

private: System::Windows::Forms::Label^  lblPP8;

private: System::Windows::Forms::Label^  lblNombre8;









































	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		ArbolAVL* arbol;
		Alumno** lista;
private: System::Windows::Forms::Button^  btnReestablecer;



























private: System::Windows::Forms::TextBox^  txtBoxDireccion;
private: System::Windows::Forms::Label^  lblDireccion;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::TextBox^  txtBoxPesoMayor;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::TextBox^  txtBoxPesoMenor;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::TextBox^  txtBoxPesoIgual;
		 int k;
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->ArchivosPnl = (gcnew System::Windows::Forms::Panel());
			this->lblFecha8 = (gcnew System::Windows::Forms::Label());
			this->lblPeso8 = (gcnew System::Windows::Forms::Label());
			this->lblDP8 = (gcnew System::Windows::Forms::Label());
			this->lblPP8 = (gcnew System::Windows::Forms::Label());
			this->lblNombre8 = (gcnew System::Windows::Forms::Label());
			this->lblFecha6 = (gcnew System::Windows::Forms::Label());
			this->lblFecha7 = (gcnew System::Windows::Forms::Label());
			this->lblFecha5 = (gcnew System::Windows::Forms::Label());
			this->lblFecha4 = (gcnew System::Windows::Forms::Label());
			this->lblFecha3 = (gcnew System::Windows::Forms::Label());
			this->lblFecha2 = (gcnew System::Windows::Forms::Label());
			this->lblFecha1 = (gcnew System::Windows::Forms::Label());
			this->lblPeso7 = (gcnew System::Windows::Forms::Label());
			this->lblPeso6 = (gcnew System::Windows::Forms::Label());
			this->lblPeso5 = (gcnew System::Windows::Forms::Label());
			this->lblPeso4 = (gcnew System::Windows::Forms::Label());
			this->lblPeso3 = (gcnew System::Windows::Forms::Label());
			this->lblPeso2 = (gcnew System::Windows::Forms::Label());
			this->lblPeso1 = (gcnew System::Windows::Forms::Label());
			this->lblDP7 = (gcnew System::Windows::Forms::Label());
			this->lblDP6 = (gcnew System::Windows::Forms::Label());
			this->lblDP5 = (gcnew System::Windows::Forms::Label());
			this->lblDP4 = (gcnew System::Windows::Forms::Label());
			this->lblDP3 = (gcnew System::Windows::Forms::Label());
			this->lblDP2 = (gcnew System::Windows::Forms::Label());
			this->lblDP1 = (gcnew System::Windows::Forms::Label());
			this->lblPP7 = (gcnew System::Windows::Forms::Label());
			this->lblPP6 = (gcnew System::Windows::Forms::Label());
			this->lblPP5 = (gcnew System::Windows::Forms::Label());
			this->lblPP4 = (gcnew System::Windows::Forms::Label());
			this->lblPP3 = (gcnew System::Windows::Forms::Label());
			this->lblPP2 = (gcnew System::Windows::Forms::Label());
			this->lblPP1 = (gcnew System::Windows::Forms::Label());
			this->lblNombre7 = (gcnew System::Windows::Forms::Label());
			this->lblNombre6 = (gcnew System::Windows::Forms::Label());
			this->lblNombre5 = (gcnew System::Windows::Forms::Label());
			this->lblNombre4 = (gcnew System::Windows::Forms::Label());
			this->lblNombre3 = (gcnew System::Windows::Forms::Label());
			this->lblNombre2 = (gcnew System::Windows::Forms::Label());
			this->lblNombre1 = (gcnew System::Windows::Forms::Label());
			this->lblDP = (gcnew System::Windows::Forms::Label());
			this->lblPeso = (gcnew System::Windows::Forms::Label());
			this->lblPP = (gcnew System::Windows::Forms::Label());
			this->lblFecha = (gcnew System::Windows::Forms::Label());
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
			this->ordenarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->txtBoxNombre = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnReestablecer = (gcnew System::Windows::Forms::Button());
			this->txtBoxDireccion = (gcnew System::Windows::Forms::TextBox());
			this->lblDireccion = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtBoxPesoMayor = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtBoxPesoMenor = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtBoxPesoIgual = (gcnew System::Windows::Forms::TextBox());
			this->ArchivosPnl->SuspendLayout();
			this->OpcMSrp->SuspendLayout();
			this->SuspendLayout();
			// 
			// ArchivosPnl
			// 
			this->ArchivosPnl->Controls->Add(this->lblFecha8);
			this->ArchivosPnl->Controls->Add(this->lblPeso8);
			this->ArchivosPnl->Controls->Add(this->lblDP8);
			this->ArchivosPnl->Controls->Add(this->lblPP8);
			this->ArchivosPnl->Controls->Add(this->lblNombre8);
			this->ArchivosPnl->Controls->Add(this->lblFecha6);
			this->ArchivosPnl->Controls->Add(this->lblFecha7);
			this->ArchivosPnl->Controls->Add(this->lblFecha5);
			this->ArchivosPnl->Controls->Add(this->lblFecha4);
			this->ArchivosPnl->Controls->Add(this->lblFecha3);
			this->ArchivosPnl->Controls->Add(this->lblFecha2);
			this->ArchivosPnl->Controls->Add(this->lblFecha1);
			this->ArchivosPnl->Controls->Add(this->lblPeso7);
			this->ArchivosPnl->Controls->Add(this->lblPeso6);
			this->ArchivosPnl->Controls->Add(this->lblPeso5);
			this->ArchivosPnl->Controls->Add(this->lblPeso4);
			this->ArchivosPnl->Controls->Add(this->lblPeso3);
			this->ArchivosPnl->Controls->Add(this->lblPeso2);
			this->ArchivosPnl->Controls->Add(this->lblPeso1);
			this->ArchivosPnl->Controls->Add(this->lblDP7);
			this->ArchivosPnl->Controls->Add(this->lblDP6);
			this->ArchivosPnl->Controls->Add(this->lblDP5);
			this->ArchivosPnl->Controls->Add(this->lblDP4);
			this->ArchivosPnl->Controls->Add(this->lblDP3);
			this->ArchivosPnl->Controls->Add(this->lblDP2);
			this->ArchivosPnl->Controls->Add(this->lblDP1);
			this->ArchivosPnl->Controls->Add(this->lblPP7);
			this->ArchivosPnl->Controls->Add(this->lblPP6);
			this->ArchivosPnl->Controls->Add(this->lblPP5);
			this->ArchivosPnl->Controls->Add(this->lblPP4);
			this->ArchivosPnl->Controls->Add(this->lblPP3);
			this->ArchivosPnl->Controls->Add(this->lblPP2);
			this->ArchivosPnl->Controls->Add(this->lblPP1);
			this->ArchivosPnl->Controls->Add(this->lblNombre7);
			this->ArchivosPnl->Controls->Add(this->lblNombre6);
			this->ArchivosPnl->Controls->Add(this->lblNombre5);
			this->ArchivosPnl->Controls->Add(this->lblNombre4);
			this->ArchivosPnl->Controls->Add(this->lblNombre3);
			this->ArchivosPnl->Controls->Add(this->lblNombre2);
			this->ArchivosPnl->Controls->Add(this->lblNombre1);
			this->ArchivosPnl->Controls->Add(this->lblDP);
			this->ArchivosPnl->Controls->Add(this->lblPeso);
			this->ArchivosPnl->Controls->Add(this->lblPP);
			this->ArchivosPnl->Controls->Add(this->lblFecha);
			this->ArchivosPnl->Controls->Add(this->lblNombre);
			this->ArchivosPnl->Location = System::Drawing::Point(24, 37);
			this->ArchivosPnl->Name = L"ArchivosPnl";
			this->ArchivosPnl->Size = System::Drawing::Size(623, 427);
			this->ArchivosPnl->TabIndex = 1;
			// 
			// lblFecha8
			// 
			this->lblFecha8->AutoSize = true;
			this->lblFecha8->Location = System::Drawing::Point(490, 209);
			this->lblFecha8->Name = L"lblFecha8";
			this->lblFecha8->Size = System::Drawing::Size(119, 13);
			this->lblFecha8->TabIndex = 43;
			this->lblFecha8->Text = L"Fecha de ultima edicion";
			// 
			// lblPeso8
			// 
			this->lblPeso8->AutoSize = true;
			this->lblPeso8->Location = System::Drawing::Point(441, 209);
			this->lblPeso8->Name = L"lblPeso8";
			this->lblPeso8->Size = System::Drawing::Size(31, 13);
			this->lblPeso8->TabIndex = 42;
			this->lblPeso8->Text = L"Peso";
			// 
			// lblDP8
			// 
			this->lblDP8->AutoSize = true;
			this->lblDP8->Location = System::Drawing::Point(316, 209);
			this->lblDP8->Name = L"lblDP8";
			this->lblDP8->Size = System::Drawing::Size(90, 13);
			this->lblDP8->TabIndex = 41;
			this->lblDP8->Text = L"Deuda Pendiente";
			// 
			// lblPP8
			// 
			this->lblPP8->AutoSize = true;
			this->lblPP8->Location = System::Drawing::Point(191, 209);
			this->lblPP8->Name = L"lblPP8";
			this->lblPP8->Size = System::Drawing::Size(106, 13);
			this->lblPP8->TabIndex = 40;
			this->lblPP8->Text = L"Promedio Ponderado";
			// 
			// lblNombre8
			// 
			this->lblNombre8->AutoSize = true;
			this->lblNombre8->Location = System::Drawing::Point(10, 209);
			this->lblNombre8->Name = L"lblNombre8";
			this->lblNombre8->Size = System::Drawing::Size(44, 13);
			this->lblNombre8->TabIndex = 39;
			this->lblNombre8->Text = L"Nombre";
			// 
			// lblFecha6
			// 
			this->lblFecha6->AutoSize = true;
			this->lblFecha6->Location = System::Drawing::Point(490, 158);
			this->lblFecha6->Name = L"lblFecha6";
			this->lblFecha6->Size = System::Drawing::Size(119, 13);
			this->lblFecha6->TabIndex = 38;
			this->lblFecha6->Text = L"Fecha de ultima edicion";
			// 
			// lblFecha7
			// 
			this->lblFecha7->AutoSize = true;
			this->lblFecha7->Location = System::Drawing::Point(490, 185);
			this->lblFecha7->Name = L"lblFecha7";
			this->lblFecha7->Size = System::Drawing::Size(119, 13);
			this->lblFecha7->TabIndex = 38;
			this->lblFecha7->Text = L"Fecha de ultima edicion";
			// 
			// lblFecha5
			// 
			this->lblFecha5->AutoSize = true;
			this->lblFecha5->Location = System::Drawing::Point(490, 136);
			this->lblFecha5->Name = L"lblFecha5";
			this->lblFecha5->Size = System::Drawing::Size(119, 13);
			this->lblFecha5->TabIndex = 37;
			this->lblFecha5->Text = L"Fecha de ultima edicion";
			// 
			// lblFecha4
			// 
			this->lblFecha4->AutoSize = true;
			this->lblFecha4->Location = System::Drawing::Point(490, 108);
			this->lblFecha4->Name = L"lblFecha4";
			this->lblFecha4->Size = System::Drawing::Size(119, 13);
			this->lblFecha4->TabIndex = 36;
			this->lblFecha4->Text = L"Fecha de ultima edicion";
			// 
			// lblFecha3
			// 
			this->lblFecha3->AutoSize = true;
			this->lblFecha3->Location = System::Drawing::Point(490, 86);
			this->lblFecha3->Name = L"lblFecha3";
			this->lblFecha3->Size = System::Drawing::Size(119, 13);
			this->lblFecha3->TabIndex = 35;
			this->lblFecha3->Text = L"Fecha de ultima edicion";
			// 
			// lblFecha2
			// 
			this->lblFecha2->AutoSize = true;
			this->lblFecha2->Location = System::Drawing::Point(490, 64);
			this->lblFecha2->Name = L"lblFecha2";
			this->lblFecha2->Size = System::Drawing::Size(119, 13);
			this->lblFecha2->TabIndex = 34;
			this->lblFecha2->Text = L"Fecha de ultima edicion";
			// 
			// lblFecha1
			// 
			this->lblFecha1->AutoSize = true;
			this->lblFecha1->Location = System::Drawing::Point(490, 40);
			this->lblFecha1->Name = L"lblFecha1";
			this->lblFecha1->Size = System::Drawing::Size(119, 13);
			this->lblFecha1->TabIndex = 33;
			this->lblFecha1->Text = L"Fecha de ultima edicion";
			// 
			// lblPeso7
			// 
			this->lblPeso7->AutoSize = true;
			this->lblPeso7->Location = System::Drawing::Point(441, 185);
			this->lblPeso7->Name = L"lblPeso7";
			this->lblPeso7->Size = System::Drawing::Size(31, 13);
			this->lblPeso7->TabIndex = 32;
			this->lblPeso7->Text = L"Peso";
			// 
			// lblPeso6
			// 
			this->lblPeso6->AutoSize = true;
			this->lblPeso6->Location = System::Drawing::Point(441, 158);
			this->lblPeso6->Name = L"lblPeso6";
			this->lblPeso6->Size = System::Drawing::Size(31, 13);
			this->lblPeso6->TabIndex = 31;
			this->lblPeso6->Text = L"Peso";
			// 
			// lblPeso5
			// 
			this->lblPeso5->AutoSize = true;
			this->lblPeso5->Location = System::Drawing::Point(441, 136);
			this->lblPeso5->Name = L"lblPeso5";
			this->lblPeso5->Size = System::Drawing::Size(31, 13);
			this->lblPeso5->TabIndex = 30;
			this->lblPeso5->Text = L"Peso";
			// 
			// lblPeso4
			// 
			this->lblPeso4->AutoSize = true;
			this->lblPeso4->Location = System::Drawing::Point(441, 108);
			this->lblPeso4->Name = L"lblPeso4";
			this->lblPeso4->Size = System::Drawing::Size(31, 13);
			this->lblPeso4->TabIndex = 29;
			this->lblPeso4->Text = L"Peso";
			// 
			// lblPeso3
			// 
			this->lblPeso3->AutoSize = true;
			this->lblPeso3->Location = System::Drawing::Point(441, 86);
			this->lblPeso3->Name = L"lblPeso3";
			this->lblPeso3->Size = System::Drawing::Size(31, 13);
			this->lblPeso3->TabIndex = 28;
			this->lblPeso3->Text = L"Peso";
			// 
			// lblPeso2
			// 
			this->lblPeso2->AutoSize = true;
			this->lblPeso2->Location = System::Drawing::Point(441, 64);
			this->lblPeso2->Name = L"lblPeso2";
			this->lblPeso2->Size = System::Drawing::Size(31, 13);
			this->lblPeso2->TabIndex = 27;
			this->lblPeso2->Text = L"Peso";
			// 
			// lblPeso1
			// 
			this->lblPeso1->AutoSize = true;
			this->lblPeso1->Location = System::Drawing::Point(441, 40);
			this->lblPeso1->Name = L"lblPeso1";
			this->lblPeso1->Size = System::Drawing::Size(31, 13);
			this->lblPeso1->TabIndex = 26;
			this->lblPeso1->Text = L"Peso";
			// 
			// lblDP7
			// 
			this->lblDP7->AutoSize = true;
			this->lblDP7->Location = System::Drawing::Point(316, 185);
			this->lblDP7->Name = L"lblDP7";
			this->lblDP7->Size = System::Drawing::Size(90, 13);
			this->lblDP7->TabIndex = 25;
			this->lblDP7->Text = L"Deuda Pendiente";
			// 
			// lblDP6
			// 
			this->lblDP6->AutoSize = true;
			this->lblDP6->Location = System::Drawing::Point(316, 158);
			this->lblDP6->Name = L"lblDP6";
			this->lblDP6->Size = System::Drawing::Size(90, 13);
			this->lblDP6->TabIndex = 24;
			this->lblDP6->Text = L"Deuda Pendiente";
			// 
			// lblDP5
			// 
			this->lblDP5->AutoSize = true;
			this->lblDP5->Location = System::Drawing::Point(316, 136);
			this->lblDP5->Name = L"lblDP5";
			this->lblDP5->Size = System::Drawing::Size(90, 13);
			this->lblDP5->TabIndex = 23;
			this->lblDP5->Text = L"Deuda Pendiente";
			// 
			// lblDP4
			// 
			this->lblDP4->AutoSize = true;
			this->lblDP4->Location = System::Drawing::Point(316, 108);
			this->lblDP4->Name = L"lblDP4";
			this->lblDP4->Size = System::Drawing::Size(90, 13);
			this->lblDP4->TabIndex = 22;
			this->lblDP4->Text = L"Deuda Pendiente";
			// 
			// lblDP3
			// 
			this->lblDP3->AutoSize = true;
			this->lblDP3->Location = System::Drawing::Point(316, 86);
			this->lblDP3->Name = L"lblDP3";
			this->lblDP3->Size = System::Drawing::Size(90, 13);
			this->lblDP3->TabIndex = 21;
			this->lblDP3->Text = L"Deuda Pendiente";
			// 
			// lblDP2
			// 
			this->lblDP2->AutoSize = true;
			this->lblDP2->Location = System::Drawing::Point(316, 64);
			this->lblDP2->Name = L"lblDP2";
			this->lblDP2->Size = System::Drawing::Size(90, 13);
			this->lblDP2->TabIndex = 20;
			this->lblDP2->Text = L"Deuda Pendiente";
			// 
			// lblDP1
			// 
			this->lblDP1->AutoSize = true;
			this->lblDP1->Location = System::Drawing::Point(316, 40);
			this->lblDP1->Name = L"lblDP1";
			this->lblDP1->Size = System::Drawing::Size(90, 13);
			this->lblDP1->TabIndex = 19;
			this->lblDP1->Text = L"Deuda Pendiente";
			// 
			// lblPP7
			// 
			this->lblPP7->AutoSize = true;
			this->lblPP7->Location = System::Drawing::Point(191, 185);
			this->lblPP7->Name = L"lblPP7";
			this->lblPP7->Size = System::Drawing::Size(106, 13);
			this->lblPP7->TabIndex = 18;
			this->lblPP7->Text = L"Promedio Ponderado";
			// 
			// lblPP6
			// 
			this->lblPP6->AutoSize = true;
			this->lblPP6->Location = System::Drawing::Point(191, 158);
			this->lblPP6->Name = L"lblPP6";
			this->lblPP6->Size = System::Drawing::Size(106, 13);
			this->lblPP6->TabIndex = 17;
			this->lblPP6->Text = L"Promedio Ponderado";
			// 
			// lblPP5
			// 
			this->lblPP5->AutoSize = true;
			this->lblPP5->Location = System::Drawing::Point(191, 136);
			this->lblPP5->Name = L"lblPP5";
			this->lblPP5->Size = System::Drawing::Size(106, 13);
			this->lblPP5->TabIndex = 16;
			this->lblPP5->Text = L"Promedio Ponderado";
			// 
			// lblPP4
			// 
			this->lblPP4->AutoSize = true;
			this->lblPP4->Location = System::Drawing::Point(191, 108);
			this->lblPP4->Name = L"lblPP4";
			this->lblPP4->Size = System::Drawing::Size(106, 13);
			this->lblPP4->TabIndex = 15;
			this->lblPP4->Text = L"Promedio Ponderado";
			// 
			// lblPP3
			// 
			this->lblPP3->AutoSize = true;
			this->lblPP3->Location = System::Drawing::Point(191, 86);
			this->lblPP3->Name = L"lblPP3";
			this->lblPP3->Size = System::Drawing::Size(106, 13);
			this->lblPP3->TabIndex = 14;
			this->lblPP3->Text = L"Promedio Ponderado";
			// 
			// lblPP2
			// 
			this->lblPP2->AutoSize = true;
			this->lblPP2->Location = System::Drawing::Point(191, 64);
			this->lblPP2->Name = L"lblPP2";
			this->lblPP2->Size = System::Drawing::Size(106, 13);
			this->lblPP2->TabIndex = 13;
			this->lblPP2->Text = L"Promedio Ponderado";
			// 
			// lblPP1
			// 
			this->lblPP1->AutoSize = true;
			this->lblPP1->Location = System::Drawing::Point(191, 40);
			this->lblPP1->Name = L"lblPP1";
			this->lblPP1->Size = System::Drawing::Size(106, 13);
			this->lblPP1->TabIndex = 12;
			this->lblPP1->Text = L"Promedio Ponderado";
			// 
			// lblNombre7
			// 
			this->lblNombre7->AutoSize = true;
			this->lblNombre7->Location = System::Drawing::Point(10, 185);
			this->lblNombre7->Name = L"lblNombre7";
			this->lblNombre7->Size = System::Drawing::Size(44, 13);
			this->lblNombre7->TabIndex = 11;
			this->lblNombre7->Text = L"Nombre";
			// 
			// lblNombre6
			// 
			this->lblNombre6->AutoSize = true;
			this->lblNombre6->Location = System::Drawing::Point(10, 158);
			this->lblNombre6->Name = L"lblNombre6";
			this->lblNombre6->Size = System::Drawing::Size(44, 13);
			this->lblNombre6->TabIndex = 10;
			this->lblNombre6->Text = L"Nombre";
			// 
			// lblNombre5
			// 
			this->lblNombre5->AutoSize = true;
			this->lblNombre5->Location = System::Drawing::Point(10, 136);
			this->lblNombre5->Name = L"lblNombre5";
			this->lblNombre5->Size = System::Drawing::Size(44, 13);
			this->lblNombre5->TabIndex = 9;
			this->lblNombre5->Text = L"Nombre";
			// 
			// lblNombre4
			// 
			this->lblNombre4->AutoSize = true;
			this->lblNombre4->Location = System::Drawing::Point(10, 108);
			this->lblNombre4->Name = L"lblNombre4";
			this->lblNombre4->Size = System::Drawing::Size(44, 13);
			this->lblNombre4->TabIndex = 8;
			this->lblNombre4->Text = L"Nombre";
			// 
			// lblNombre3
			// 
			this->lblNombre3->AutoSize = true;
			this->lblNombre3->Location = System::Drawing::Point(10, 86);
			this->lblNombre3->Name = L"lblNombre3";
			this->lblNombre3->Size = System::Drawing::Size(44, 13);
			this->lblNombre3->TabIndex = 7;
			this->lblNombre3->Text = L"Nombre";
			// 
			// lblNombre2
			// 
			this->lblNombre2->AutoSize = true;
			this->lblNombre2->Location = System::Drawing::Point(10, 64);
			this->lblNombre2->Name = L"lblNombre2";
			this->lblNombre2->Size = System::Drawing::Size(44, 13);
			this->lblNombre2->TabIndex = 6;
			this->lblNombre2->Text = L"Nombre";
			// 
			// lblNombre1
			// 
			this->lblNombre1->AutoSize = true;
			this->lblNombre1->Location = System::Drawing::Point(10, 40);
			this->lblNombre1->Name = L"lblNombre1";
			this->lblNombre1->Size = System::Drawing::Size(44, 13);
			this->lblNombre1->TabIndex = 5;
			this->lblNombre1->Text = L"Nombre";
			// 
			// lblDP
			// 
			this->lblDP->AutoSize = true;
			this->lblDP->Location = System::Drawing::Point(316, 9);
			this->lblDP->Name = L"lblDP";
			this->lblDP->Size = System::Drawing::Size(90, 13);
			this->lblDP->TabIndex = 4;
			this->lblDP->Text = L"Deuda Pendiente";
			// 
			// lblPeso
			// 
			this->lblPeso->AutoSize = true;
			this->lblPeso->Location = System::Drawing::Point(441, 9);
			this->lblPeso->Name = L"lblPeso";
			this->lblPeso->Size = System::Drawing::Size(31, 13);
			this->lblPeso->TabIndex = 3;
			this->lblPeso->Text = L"Peso";
			// 
			// lblPP
			// 
			this->lblPP->AutoSize = true;
			this->lblPP->Location = System::Drawing::Point(191, 9);
			this->lblPP->Name = L"lblPP";
			this->lblPP->Size = System::Drawing::Size(106, 13);
			this->lblPP->TabIndex = 2;
			this->lblPP->Text = L"Promedio Ponderado";
			// 
			// lblFecha
			// 
			this->lblFecha->AutoSize = true;
			this->lblFecha->Location = System::Drawing::Point(490, 9);
			this->lblFecha->Name = L"lblFecha";
			this->lblFecha->Size = System::Drawing::Size(119, 13);
			this->lblFecha->TabIndex = 1;
			this->lblFecha->Text = L"Fecha de ultima edicion";
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
			this->DatosPnl->Location = System::Drawing::Point(687, 37);
			this->DatosPnl->Name = L"DatosPnl";
			this->DatosPnl->Size = System::Drawing::Size(527, 427);
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
			this->filtrarToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->inicialNombreToolStripMenuItem,
					this->promedioPToolStripMenuItem1, this->deudaPendienteToolStripMenuItem
			});
			this->filtrarToolStripMenuItem->Name = L"filtrarToolStripMenuItem";
			this->filtrarToolStripMenuItem->Size = System::Drawing::Size(44, 20);
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
			this->inicialNombreToolStripMenuItem->Size = System::Drawing::Size(157, 22);
			this->inicialNombreToolStripMenuItem->Text = L"Inicial Nombre";
			// 
			// aToolStripMenuItem1
			// 
			this->aToolStripMenuItem1->Name = L"aToolStripMenuItem1";
			this->aToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->aToolStripMenuItem1->Text = L"A";
			this->aToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::aToolStripMenuItem1_Click);
			// 
			// bToolStripMenuItem1
			// 
			this->bToolStripMenuItem1->Name = L"bToolStripMenuItem1";
			this->bToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->bToolStripMenuItem1->Text = L"B";
			this->bToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::bToolStripMenuItem1_Click);
			// 
			// cToolStripMenuItem1
			// 
			this->cToolStripMenuItem1->Name = L"cToolStripMenuItem1";
			this->cToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->cToolStripMenuItem1->Text = L"C";
			this->cToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::cToolStripMenuItem1_Click);
			// 
			// dToolStripMenuItem1
			// 
			this->dToolStripMenuItem1->Name = L"dToolStripMenuItem1";
			this->dToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->dToolStripMenuItem1->Text = L"D";
			this->dToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::dToolStripMenuItem1_Click);
			// 
			// eToolStripMenuItem1
			// 
			this->eToolStripMenuItem1->Name = L"eToolStripMenuItem1";
			this->eToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->eToolStripMenuItem1->Text = L"E";
			this->eToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::eToolStripMenuItem1_Click);
			// 
			// fToolStripMenuItem1
			// 
			this->fToolStripMenuItem1->Name = L"fToolStripMenuItem1";
			this->fToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->fToolStripMenuItem1->Text = L"F";
			this->fToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::fToolStripMenuItem1_Click);
			// 
			// gToolStripMenuItem1
			// 
			this->gToolStripMenuItem1->Name = L"gToolStripMenuItem1";
			this->gToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->gToolStripMenuItem1->Text = L"G";
			this->gToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::gToolStripMenuItem1_Click);
			// 
			// hToolStripMenuItem1
			// 
			this->hToolStripMenuItem1->Name = L"hToolStripMenuItem1";
			this->hToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->hToolStripMenuItem1->Text = L"H";
			this->hToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::hToolStripMenuItem1_Click);
			// 
			// iToolStripMenuItem1
			// 
			this->iToolStripMenuItem1->Name = L"iToolStripMenuItem1";
			this->iToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->iToolStripMenuItem1->Text = L"I";
			this->iToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::iToolStripMenuItem1_Click);
			// 
			// jToolStripMenuItem1
			// 
			this->jToolStripMenuItem1->Name = L"jToolStripMenuItem1";
			this->jToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->jToolStripMenuItem1->Text = L"J";
			this->jToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::jToolStripMenuItem1_Click);
			// 
			// kToolStripMenuItem1
			// 
			this->kToolStripMenuItem1->Name = L"kToolStripMenuItem1";
			this->kToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->kToolStripMenuItem1->Text = L"K";
			this->kToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::kToolStripMenuItem1_Click);
			// 
			// lToolStripMenuItem1
			// 
			this->lToolStripMenuItem1->Name = L"lToolStripMenuItem1";
			this->lToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->lToolStripMenuItem1->Text = L"L";
			this->lToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::lToolStripMenuItem1_Click);
			// 
			// mToolStripMenuItem1
			// 
			this->mToolStripMenuItem1->Name = L"mToolStripMenuItem1";
			this->mToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->mToolStripMenuItem1->Text = L"M";
			this->mToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::mToolStripMenuItem1_Click);
			// 
			// nToolStripMenuItem1
			// 
			this->nToolStripMenuItem1->Name = L"nToolStripMenuItem1";
			this->nToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->nToolStripMenuItem1->Text = L"N";
			this->nToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::nToolStripMenuItem1_Click);
			// 
			// oToolStripMenuItem1
			// 
			this->oToolStripMenuItem1->Name = L"oToolStripMenuItem1";
			this->oToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->oToolStripMenuItem1->Text = L"O";
			this->oToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::oToolStripMenuItem1_Click);
			// 
			// pToolStripMenuItem1
			// 
			this->pToolStripMenuItem1->Name = L"pToolStripMenuItem1";
			this->pToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->pToolStripMenuItem1->Text = L"P";
			this->pToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::pToolStripMenuItem1_Click);
			// 
			// qToolStripMenuItem1
			// 
			this->qToolStripMenuItem1->Name = L"qToolStripMenuItem1";
			this->qToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->qToolStripMenuItem1->Text = L"Q";
			this->qToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::qToolStripMenuItem1_Click);
			// 
			// rToolStripMenuItem1
			// 
			this->rToolStripMenuItem1->Name = L"rToolStripMenuItem1";
			this->rToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->rToolStripMenuItem1->Text = L"R";
			this->rToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::rToolStripMenuItem1_Click);
			// 
			// sToolStripMenuItem1
			// 
			this->sToolStripMenuItem1->Name = L"sToolStripMenuItem1";
			this->sToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->sToolStripMenuItem1->Text = L"S";
			this->sToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::sToolStripMenuItem1_Click);
			// 
			// tToolStripMenuItem1
			// 
			this->tToolStripMenuItem1->Name = L"tToolStripMenuItem1";
			this->tToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->tToolStripMenuItem1->Text = L"T";
			this->tToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::tToolStripMenuItem1_Click);
			// 
			// uToolStripMenuItem1
			// 
			this->uToolStripMenuItem1->Name = L"uToolStripMenuItem1";
			this->uToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->uToolStripMenuItem1->Text = L"U";
			this->uToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::uToolStripMenuItem1_Click);
			// 
			// vToolStripMenuItem1
			// 
			this->vToolStripMenuItem1->Name = L"vToolStripMenuItem1";
			this->vToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->vToolStripMenuItem1->Text = L"V";
			this->vToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::vToolStripMenuItem1_Click);
			// 
			// wToolStripMenuItem1
			// 
			this->wToolStripMenuItem1->Name = L"wToolStripMenuItem1";
			this->wToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->wToolStripMenuItem1->Text = L"W";
			this->wToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::wToolStripMenuItem1_Click);
			// 
			// xToolStripMenuItem1
			// 
			this->xToolStripMenuItem1->Name = L"xToolStripMenuItem1";
			this->xToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->xToolStripMenuItem1->Text = L"X";
			this->xToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::xToolStripMenuItem1_Click);
			// 
			// yToolStripMenuItem1
			// 
			this->yToolStripMenuItem1->Name = L"yToolStripMenuItem1";
			this->yToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->yToolStripMenuItem1->Text = L"Y";
			this->yToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::yToolStripMenuItem1_Click);
			// 
			// zToolStripMenuItem1
			// 
			this->zToolStripMenuItem1->Name = L"zToolStripMenuItem1";
			this->zToolStripMenuItem1->Size = System::Drawing::Size(85, 22);
			this->zToolStripMenuItem1->Text = L"Z";
			this->zToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::zToolStripMenuItem1_Click);
			// 
			// promedioPToolStripMenuItem1
			// 
			this->promedioPToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->quintoSuperiorToolStripMenuItem1,
					this->tercioSuperiorToolStripMenuItem1, this->reprobadosToolStripMenuItem1
			});
			this->promedioPToolStripMenuItem1->Name = L"promedioPToolStripMenuItem1";
			this->promedioPToolStripMenuItem1->Size = System::Drawing::Size(157, 22);
			this->promedioPToolStripMenuItem1->Text = L"Promedio P.";
			// 
			// quintoSuperiorToolStripMenuItem1
			// 
			this->quintoSuperiorToolStripMenuItem1->Name = L"quintoSuperiorToolStripMenuItem1";
			this->quintoSuperiorToolStripMenuItem1->Size = System::Drawing::Size(147, 22);
			this->quintoSuperiorToolStripMenuItem1->Text = L"Quinto Superior";
			this->quintoSuperiorToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::quintoSuperiorToolStripMenuItem1_Click);
			// 
			// tercioSuperiorToolStripMenuItem1
			// 
			this->tercioSuperiorToolStripMenuItem1->Name = L"tercioSuperiorToolStripMenuItem1";
			this->tercioSuperiorToolStripMenuItem1->Size = System::Drawing::Size(147, 22);
			this->tercioSuperiorToolStripMenuItem1->Text = L"Tercio Superior";
			this->tercioSuperiorToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::tercioSuperiorToolStripMenuItem1_Click);
			// 
			// reprobadosToolStripMenuItem1
			// 
			this->reprobadosToolStripMenuItem1->Name = L"reprobadosToolStripMenuItem1";
			this->reprobadosToolStripMenuItem1->Size = System::Drawing::Size(147, 22);
			this->reprobadosToolStripMenuItem1->Text = L"Reprobados";
			this->reprobadosToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::reprobadosToolStripMenuItem1_Click);
			// 
			// deudaPendienteToolStripMenuItem
			// 
			this->deudaPendienteToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->siToolStripMenuItem1,
					this->noToolStripMenuItem1
			});
			this->deudaPendienteToolStripMenuItem->Name = L"deudaPendienteToolStripMenuItem";
			this->deudaPendienteToolStripMenuItem->Size = System::Drawing::Size(157, 22);
			this->deudaPendienteToolStripMenuItem->Text = L"Deuda Pendiente";
			// 
			// siToolStripMenuItem1
			// 
			this->siToolStripMenuItem1->Name = L"siToolStripMenuItem1";
			this->siToolStripMenuItem1->Size = System::Drawing::Size(88, 22);
			this->siToolStripMenuItem1->Text = L"Si";
			this->siToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::siToolStripMenuItem1_Click);
			// 
			// noToolStripMenuItem1
			// 
			this->noToolStripMenuItem1->Name = L"noToolStripMenuItem1";
			this->noToolStripMenuItem1->Size = System::Drawing::Size(88, 22);
			this->noToolStripMenuItem1->Text = L"No";
			this->noToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::noToolStripMenuItem1_Click);
			// 
			// ordenarToolStripMenuItem
			// 
			this->ordenarToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->nombreToolStripMenuItem1,
					this->promedioPonderadoToolStripMenuItem, this->deudaPendienteToolStripMenuItem1, this->pesoToolStripMenuItem
			});
			this->ordenarToolStripMenuItem->Name = L"ordenarToolStripMenuItem";
			this->ordenarToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->ordenarToolStripMenuItem->Text = L"Ordenar";
			// 
			// nombreToolStripMenuItem1
			// 
			this->nombreToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ordenAlfabeticoAcendenteToolStripMenuItem,
					this->ordenAlfabeticoDescendenteToolStripMenuItem
			});
			this->nombreToolStripMenuItem1->Name = L"nombreToolStripMenuItem1";
			this->nombreToolStripMenuItem1->Size = System::Drawing::Size(173, 22);
			this->nombreToolStripMenuItem1->Text = L"Nombre";
			// 
			// ordenAlfabeticoAcendenteToolStripMenuItem
			// 
			this->ordenAlfabeticoAcendenteToolStripMenuItem->Name = L"ordenAlfabeticoAcendenteToolStripMenuItem";
			this->ordenAlfabeticoAcendenteToolStripMenuItem->Size = System::Drawing::Size(217, 22);
			this->ordenAlfabeticoAcendenteToolStripMenuItem->Text = L"Orden alfabetico acendente";
			this->ordenAlfabeticoAcendenteToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ordenAlfabeticoAcendenteToolStripMenuItem_Click);
			// 
			// ordenAlfabeticoDescendenteToolStripMenuItem
			// 
			this->ordenAlfabeticoDescendenteToolStripMenuItem->Name = L"ordenAlfabeticoDescendenteToolStripMenuItem";
			this->ordenAlfabeticoDescendenteToolStripMenuItem->Size = System::Drawing::Size(217, 22);
			this->ordenAlfabeticoDescendenteToolStripMenuItem->Text = L"Orden alfabetico descendente";
			this->ordenAlfabeticoDescendenteToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ordenAlfabeticoDescendenteToolStripMenuItem_Click);
			// 
			// promedioPonderadoToolStripMenuItem
			// 
			this->promedioPonderadoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->mayorNotaAMenorToolStripMenuItem,
					this->menorNotaAMayorToolStripMenuItem
			});
			this->promedioPonderadoToolStripMenuItem->Name = L"promedioPonderadoToolStripMenuItem";
			this->promedioPonderadoToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->promedioPonderadoToolStripMenuItem->Text = L"Promedio Ponderado";
			// 
			// mayorNotaAMenorToolStripMenuItem
			// 
			this->mayorNotaAMenorToolStripMenuItem->Name = L"mayorNotaAMenorToolStripMenuItem";
			this->mayorNotaAMenorToolStripMenuItem->Size = System::Drawing::Size(168, 22);
			this->mayorNotaAMenorToolStripMenuItem->Text = L"Mayor nota a menor";
			this->mayorNotaAMenorToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::mayorNotaAMenorToolStripMenuItem_Click);
			// 
			// menorNotaAMayorToolStripMenuItem
			// 
			this->menorNotaAMayorToolStripMenuItem->Name = L"menorNotaAMayorToolStripMenuItem";
			this->menorNotaAMayorToolStripMenuItem->Size = System::Drawing::Size(168, 22);
			this->menorNotaAMayorToolStripMenuItem->Text = L"Menor nota a mayor";
			this->menorNotaAMayorToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::menorNotaAMayorToolStripMenuItem_Click);
			// 
			// deudaPendienteToolStripMenuItem1
			// 
			this->deudaPendienteToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->mayorDeudaAMenorToolStripMenuItem,
					this->menorDeudaAMayorToolStripMenuItem
			});
			this->deudaPendienteToolStripMenuItem1->Name = L"deudaPendienteToolStripMenuItem1";
			this->deudaPendienteToolStripMenuItem1->Size = System::Drawing::Size(173, 22);
			this->deudaPendienteToolStripMenuItem1->Text = L"Deuda Pendiente";
			// 
			// mayorDeudaAMenorToolStripMenuItem
			// 
			this->mayorDeudaAMenorToolStripMenuItem->Name = L"mayorDeudaAMenorToolStripMenuItem";
			this->mayorDeudaAMenorToolStripMenuItem->Size = System::Drawing::Size(177, 22);
			this->mayorDeudaAMenorToolStripMenuItem->Text = L"Mayor deuda a menor";
			this->mayorDeudaAMenorToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::mayorDeudaAMenorToolStripMenuItem_Click);
			// 
			// menorDeudaAMayorToolStripMenuItem
			// 
			this->menorDeudaAMayorToolStripMenuItem->Name = L"menorDeudaAMayorToolStripMenuItem";
			this->menorDeudaAMayorToolStripMenuItem->Size = System::Drawing::Size(177, 22);
			this->menorDeudaAMayorToolStripMenuItem->Text = L"Menor deuda a mayor";
			this->menorDeudaAMayorToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::menorDeudaAMayorToolStripMenuItem_Click);
			// 
			// pesoToolStripMenuItem
			// 
			this->pesoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->mayorPesoAMenorToolStripMenuItem,
					this->menorPesoAMayorToolStripMenuItem
			});
			this->pesoToolStripMenuItem->Name = L"pesoToolStripMenuItem";
			this->pesoToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->pesoToolStripMenuItem->Text = L"Peso";
			// 
			// mayorPesoAMenorToolStripMenuItem
			// 
			this->mayorPesoAMenorToolStripMenuItem->Name = L"mayorPesoAMenorToolStripMenuItem";
			this->mayorPesoAMenorToolStripMenuItem->Size = System::Drawing::Size(170, 22);
			this->mayorPesoAMenorToolStripMenuItem->Text = L"Mayor peso a menor";
			this->mayorPesoAMenorToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::mayorPesoAMenorToolStripMenuItem_Click);
			// 
			// menorPesoAMayorToolStripMenuItem
			// 
			this->menorPesoAMayorToolStripMenuItem->Name = L"menorPesoAMayorToolStripMenuItem";
			this->menorPesoAMayorToolStripMenuItem->Size = System::Drawing::Size(170, 22);
			this->menorPesoAMayorToolStripMenuItem->Text = L"Menor peso a mayor";
			this->menorPesoAMayorToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::menorPesoAMayorToolStripMenuItem_Click);
			// 
			// txtBoxNombre
			// 
			this->txtBoxNombre->Location = System::Drawing::Point(975, 8);
			this->txtBoxNombre->Name = L"txtBoxNombre";
			this->txtBoxNombre->Size = System::Drawing::Size(158, 20);
			this->txtBoxNombre->TabIndex = 7;
			this->txtBoxNombre->TextChanged += gcnew System::EventHandler(this, &MyForm::txtBoxNombre_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(929, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Buscar";
			// 
			// btnReestablecer
			// 
			this->btnReestablecer->Location = System::Drawing::Point(1139, 5);
			this->btnReestablecer->Name = L"btnReestablecer";
			this->btnReestablecer->Size = System::Drawing::Size(75, 23);
			this->btnReestablecer->TabIndex = 9;
			this->btnReestablecer->Text = L"Reestablecer";
			this->btnReestablecer->UseVisualStyleBackColor = true;
			this->btnReestablecer->Click += gcnew System::EventHandler(this, &MyForm::btnReestablecer_Click);
			// 
			// txtBoxDireccion
			// 
			this->txtBoxDireccion->Location = System::Drawing::Point(100, 490);
			this->txtBoxDireccion->Name = L"txtBoxDireccion";
			this->txtBoxDireccion->Size = System::Drawing::Size(547, 20);
			this->txtBoxDireccion->TabIndex = 10;
			this->txtBoxDireccion->TextChanged += gcnew System::EventHandler(this, &MyForm::txtBoxDireccion_TextChanged);
			// 
			// lblDireccion
			// 
			this->lblDireccion->AutoSize = true;
			this->lblDireccion->Location = System::Drawing::Point(42, 493);
			this->lblDireccion->Name = L"lblDireccion";
			this->lblDireccion->Size = System::Drawing::Size(52, 13);
			this->lblDireccion->TabIndex = 11;
			this->lblDireccion->Text = L"Direccion";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(124, 5);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(117, 13);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Filtrar por Peso mayor a";
			// 
			// txtBoxPesoMayor
			// 
			this->txtBoxPesoMayor->Location = System::Drawing::Point(247, 2);
			this->txtBoxPesoMayor->Name = L"txtBoxPesoMayor";
			this->txtBoxPesoMayor->Size = System::Drawing::Size(64, 20);
			this->txtBoxPesoMayor->TabIndex = 13;
			this->txtBoxPesoMayor->TextChanged += gcnew System::EventHandler(this, &MyForm::txtBoxPesoMayor_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(317, 5);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(118, 13);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Filtrar por Peso menor a";
			// 
			// txtBoxPesoMenor
			// 
			this->txtBoxPesoMenor->Location = System::Drawing::Point(441, 2);
			this->txtBoxPesoMenor->Name = L"txtBoxPesoMenor";
			this->txtBoxPesoMenor->Size = System::Drawing::Size(64, 20);
			this->txtBoxPesoMenor->TabIndex = 15;
			this->txtBoxPesoMenor->TextChanged += gcnew System::EventHandler(this, &MyForm::txtBoxPesoMenor_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(515, 5);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(123, 13);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Filtrar por Peso igual que";
			// 
			// txtBoxPesoIgual
			// 
			this->txtBoxPesoIgual->Location = System::Drawing::Point(644, 2);
			this->txtBoxPesoIgual->Name = L"txtBoxPesoIgual";
			this->txtBoxPesoIgual->Size = System::Drawing::Size(64, 20);
			this->txtBoxPesoIgual->TabIndex = 17;
			this->txtBoxPesoIgual->TextChanged += gcnew System::EventHandler(this, &MyForm::txtBoxPesoIgual_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1259, 522);
			this->Controls->Add(this->txtBoxPesoIgual);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtBoxPesoMenor);
			this->Controls->Add(this->txtBoxNombre);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtBoxPesoMayor);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lblDireccion);
			this->Controls->Add(this->txtBoxDireccion);
			this->Controls->Add(this->btnReestablecer);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->OpcMSrp);
			this->Controls->Add(this->DatosPnl);
			this->Controls->Add(this->ArchivosPnl);
			this->MainMenuStrip = this->OpcMSrp;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ArchivosPnl->ResumeLayout(false);
			this->ArchivosPnl->PerformLayout();
			this->OpcMSrp->ResumeLayout(false);
			this->OpcMSrp->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		void Ascendente(Nodo* nodo) {
			if (nodo == nullptr) return;
			Ascendente(nodo->izq);
			lista[k] = nodo->alumno;
			k++;
			Ascendente(nodo->der);
		}

		void Descendente(Nodo* nodo) {
			if (nodo == nullptr) return;
			Descendente(nodo->der);
			lista[k] = nodo->alumno;
			k++;
			Descendente(nodo->izq);
		}

		//////////////////////////////////Filtrar
		int FiltrarInicial(string letra) {
			arbol->Eliminar();
			for (int i = 0; i < 8; i++) {
				arbol->insertarSegunInicial(lista[i], letra);
			}
			Ascendente(arbol->getRaiz());
			k = 0;

			int p = 0;
			for (int i = 0; i < 8; i++) {
				if (lista[i]->getNombre() >= letra && lista[i]->getNombre() < arbol->SiguienteLetra(letra))
					p++;
			}
			return p;
		}
		int FiltrarPesoIgual(int numero) {
			arbol->Eliminar();
			for (int i = 0; i < 8; i++) {
				arbol->insertarSegunPesoIgual(lista[i], numero);
			}
			Ascendente(arbol->getRaiz());
			k = 0;

			int p = 0;
			for (int i = 0; i < 8; i++) {
				if (lista[i]->getPeso() == numero)
					p++;
			}
			return p;
		}
		//////////////////////////////////Ordenar
		void ordenarPesoAsc() {
			arbol->Eliminar();
			for (int i = 0; i < 8; i++) {
				arbol->insertarSegunPeso(lista[i]);
			}
			Ascendente(arbol->getRaiz());
			k = 0;
		}
		void ordenarNombreDes() {
			arbol->Eliminar();
			for (int i = 0; i < 8; i++) {
				arbol->insertarSegunNombre(lista[i]);
			}
			Descendente(arbol->getRaiz());
			k = 0;
		}
		void ordenarNombreAsc() {
			arbol->Eliminar();
			for (int i = 0; i < 8; i++) {
				arbol->insertarSegunNombre(lista[i]);
			}
			Ascendente(arbol->getRaiz());
			k = 0;
		}
		void ordenarPesoDes() {
			arbol->Eliminar();
			for (int i = 0; i < 8; i++) {
				arbol->insertarSegunPeso(lista[i]);
			}
			Descendente(arbol->getRaiz());
			k = 0;
		}
		void ordenarDeudaAsc() {
			arbol->Eliminar();
			for (int i = 0; i < 8; i++) {
				arbol->insertarSegunDeuda(lista[i]);
			}
			Ascendente(arbol->getRaiz());
			k = 0;
		}
		void ordenarDeudaDes() {
			arbol->Eliminar();
			for (int i = 0; i < 8; i++) {
				arbol->insertarSegunDeuda(lista[i]);
			}
			Descendente(arbol->getRaiz());
			k = 0;
		}

		void ordenarPromedioAsc() {
			arbol->Eliminar();
			for (int i = 0; i < 8; i++) {
				arbol->insertarSegunPromedio(lista[i]);
			}
			Ascendente(arbol->getRaiz());
			k = 0;
		}

		void ordenarPromedioDes() {
			arbol->Eliminar();
			for (int i = 0; i < 8; i++) {
				arbol->insertarSegunPromedio(lista[i]);
			}
			Descendente(arbol->getRaiz());
			k = 0;
		}
		void imprimir() {
			//Nombre
			lblNombre1->Text = gcnew String(lista[0]->getNombre().c_str());
			lblNombre2->Text = gcnew String(lista[1]->getNombre().c_str());
			lblNombre3->Text = gcnew String(lista[2]->getNombre().c_str());
			lblNombre4->Text = gcnew String(lista[3]->getNombre().c_str());
			lblNombre5->Text = gcnew String(lista[4]->getNombre().c_str());
			lblNombre6->Text = gcnew String(lista[5]->getNombre().c_str());
			lblNombre7->Text = gcnew String(lista[6]->getNombre().c_str());
			lblNombre8->Text = gcnew String(lista[7]->getNombre().c_str());
			//Promedio Ponderado
			lblPP1->Text = gcnew String(lista[0]->getPromedioPonderado() + "");
			lblPP2->Text = gcnew String(lista[1]->getPromedioPonderado() + "");
			lblPP3->Text = gcnew String(lista[2]->getPromedioPonderado() + "");
			lblPP4->Text = gcnew String(lista[3]->getPromedioPonderado() + "");
			lblPP5->Text = gcnew String(lista[4]->getPromedioPonderado() + "");
			lblPP6->Text = gcnew String(lista[5]->getPromedioPonderado() + "");
			lblPP7->Text = gcnew String(lista[6]->getPromedioPonderado() + "");
			lblPP8->Text = gcnew String(lista[7]->getPromedioPonderado() + "");
			//Deuda Pendiente
			lblDP1->Text = gcnew String(lista[0]->getDeudaPendiente() + "");
			lblDP2->Text = gcnew String(lista[1]->getDeudaPendiente() + "");
			lblDP3->Text = gcnew String(lista[2]->getDeudaPendiente() + "");
			lblDP4->Text = gcnew String(lista[3]->getDeudaPendiente() + "");
			lblDP5->Text = gcnew String(lista[4]->getDeudaPendiente() + "");
			lblDP6->Text = gcnew String(lista[5]->getDeudaPendiente() + "");
			lblDP7->Text = gcnew String(lista[6]->getDeudaPendiente() + "");
			lblDP8->Text = gcnew String(lista[7]->getDeudaPendiente() + "");
			//Peso
			lblPeso1->Text = gcnew String(lista[0]->getPeso() + "");
			lblPeso2->Text = gcnew String(lista[1]->getPeso() + "");
			lblPeso3->Text = gcnew String(lista[2]->getPeso() + "");
			lblPeso4->Text = gcnew String(lista[3]->getPeso() + "");
			lblPeso5->Text = gcnew String(lista[4]->getPeso() + "");
			lblPeso6->Text = gcnew String(lista[5]->getPeso() + "");
			lblPeso7->Text = gcnew String(lista[6]->getPeso() + "");
			lblPeso8->Text = gcnew String(lista[7]->getPeso() + "");
			//Fecha
		
		}
		
		void OcultarFiltros(int p) {
			if (p < 1) {
				lblNombre1->Visible = false;
				lblPP1->Visible = false;
				lblDP1->Visible = false;
				lblPeso1->Visible = false;
				lblFecha1->Visible = false;
			}
			if (p < 2) {
				lblNombre2->Visible = false;
				lblPP2->Visible = false;
				lblDP2->Visible = false;
				lblPeso2->Visible = false;
				lblFecha2->Visible = false;
			}
			if (p < 3) {
				lblNombre3->Visible = false;
				lblPP3->Visible = false;
				lblDP3->Visible = false;
				lblPeso3->Visible = false;
				lblFecha3->Visible = false;
			}
			if (p < 4) {
				lblNombre4->Visible = false;
				lblPP4->Visible = false;
				lblDP4->Visible = false;
				lblPeso4->Visible = false;
				lblFecha4->Visible = false;
			}
			if (p < 5) {
				lblNombre5->Visible = false;
				lblPP5->Visible = false;
				lblDP5->Visible = false;
				lblPeso5->Visible = false;
				lblFecha5->Visible = false;
			}
			if (p < 6) {
				lblNombre6->Visible = false;
				lblPP6->Visible = false;
				lblDP6->Visible = false;
				lblPeso6->Visible = false;
				lblFecha6->Visible = false;
			}
			if (p < 7) {
				lblNombre7->Visible = false;
				lblPP7->Visible = false;
				lblDP7->Visible = false;
				lblPeso7->Visible = false;
				lblFecha7->Visible = false;
			}
			if (p < 8) {
				lblNombre8->Visible = false;
				lblPP8->Visible = false;
				lblDP8->Visible = false;
				lblPeso8->Visible = false;
				lblFecha8->Visible = false;
			}
		}
		void reestablecer() {
			lblNombre1->Visible = true;     lblPP1->Visible = true; lblDP1->Visible = true; lblPeso1->Visible = true; lblFecha1->Visible = true;
			lblNombre2->Visible = true;     lblPP2->Visible = true; lblDP2->Visible = true; lblPeso2->Visible = true; lblFecha2->Visible = true;
			lblNombre3->Visible = true;     lblPP3->Visible = true; lblDP3->Visible = true; lblPeso3->Visible = true; lblFecha3->Visible = true;
			lblNombre4->Visible = true;     lblPP4->Visible = true; lblDP4->Visible = true; lblPeso4->Visible = true; lblFecha4->Visible = true;
			lblNombre5->Visible = true;     lblPP5->Visible = true; lblDP5->Visible = true; lblPeso5->Visible = true; lblFecha5->Visible = true;
			lblNombre6->Visible = true;     lblPP6->Visible = true; lblDP6->Visible = true; lblPeso6->Visible = true; lblFecha6->Visible = true;
			lblNombre7->Visible = true;     lblPP7->Visible = true; lblDP7->Visible = true; lblPeso7->Visible = true; lblFecha7->Visible = true;
			lblNombre8->Visible = true;     lblPP8->Visible = true; lblDP8->Visible = true; lblPeso8->Visible = true; lblFecha8->Visible = true;
		}





private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	imprimir();
}
private: System::Void mayorNotaAMenorToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	 ordenarPromedioDes();
	 imprimir();
}
private: System::Void menorNotaAMayorToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	ordenarPromedioAsc();
	imprimir();
}
private: System::Void mayorDeudaAMenorToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	ordenarDeudaDes();
	imprimir();
}
private: System::Void menorDeudaAMayorToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	ordenarDeudaAsc();
	imprimir();
}
private: System::Void mayorPesoAMenorToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	ordenarPesoDes();
	imprimir();
}
private: System::Void menorPesoAMayorToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	ordenarPesoAsc();
	imprimir();
}
private: System::Void ordenAlfabeticoAcendenteToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	ordenarNombreAsc();
	imprimir();
}
private: System::Void ordenAlfabeticoDescendenteToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	ordenarNombreDes();
	imprimir();
}
private: System::Void quintoSuperiorToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	reestablecer();
	ordenarPromedioDes();
	OcultarFiltros(8 / 5 + 1);
	imprimir();

}
private: System::Void tercioSuperiorToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	reestablecer();
	ordenarPromedioDes();
	OcultarFiltros(8 / 3 + 1);

	imprimir();
}

private: System::Void reprobadosToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	reestablecer();
	ordenarPromedioAsc();
	int p = 0;
	for (int i = 0; i < 8; i++) {
		if (lista[i]->getPromedioPonderado() <= 12.49)
			p++;
	}
	OcultarFiltros(p);
	imprimir();
}
private: System::Void btnReestablecer_Click(System::Object^  sender, System::EventArgs^  e) {
	reestablecer();
	imprimir();
}
private: System::Void siToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	reestablecer();
	ordenarDeudaDes();
	int p = 0;
	for (int i = 0; i < 8; i++) {
		if (lista[i]->getDeudaPendiente() > 0)
			p++;
	}
	OcultarFiltros(p);
	imprimir();

}
private: System::Void noToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	reestablecer();
	ordenarDeudaAsc();
	int p = 0;
	for (int i = 0; i < 8; i++) {
		if (lista[i]->getDeudaPendiente() == 0)
			p++;
	}
	OcultarFiltros(p);
	imprimir();

}
private: System::Void aToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	reestablecer();
	OcultarFiltros(FiltrarInicial("A"));
	imprimir();
}
private: System::Void bToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	reestablecer();
	OcultarFiltros(FiltrarInicial("B"));
	imprimir();
}
private: System::Void cToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	reestablecer();
	OcultarFiltros(FiltrarInicial("C"));
	imprimir();
}
private: System::Void zToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	reestablecer();
	OcultarFiltros(FiltrarInicial("Z"));
	imprimir();
}
private: System::Void dToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	reestablecer();
	OcultarFiltros(FiltrarInicial("D"));
	imprimir();
}
private: System::Void eToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	reestablecer();
	OcultarFiltros(FiltrarInicial("E"));
	imprimir();
}
private: System::Void fToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	reestablecer();
	OcultarFiltros(FiltrarInicial("F"));
	imprimir();
}
private: System::Void gToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	reestablecer();
	OcultarFiltros(FiltrarInicial("G"));
	imprimir();
}
private: System::Void hToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	reestablecer();
	OcultarFiltros(FiltrarInicial("H"));
	imprimir();
}
private: System::Void iToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	reestablecer();
	OcultarFiltros(FiltrarInicial("I"));
	imprimir();
}
private: System::Void jToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	reestablecer();
	OcultarFiltros(FiltrarInicial("J"));
	imprimir();
}
private: System::Void kToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	reestablecer();
	OcultarFiltros(FiltrarInicial("K"));
	imprimir();
}
private: System::Void lToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	reestablecer();
	OcultarFiltros(FiltrarInicial("L"));
	imprimir();
}
private: System::Void mToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	reestablecer();
	OcultarFiltros(FiltrarInicial("M"));
	imprimir();
}
private: System::Void nToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	reestablecer();
	OcultarFiltros(FiltrarInicial("N"));
	imprimir();
}
private: System::Void oToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	reestablecer();
	OcultarFiltros(FiltrarInicial("O"));
	imprimir();
}
private: System::Void pToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	reestablecer();
	OcultarFiltros(FiltrarInicial("P"));
	imprimir();
}
private: System::Void qToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	reestablecer();
	OcultarFiltros(FiltrarInicial("Q"));
	imprimir();
}
private: System::Void rToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	reestablecer();
	OcultarFiltros(FiltrarInicial("R"));
	imprimir();
}
private: System::Void sToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	reestablecer();
	OcultarFiltros(FiltrarInicial("S"));
	imprimir();
}
private: System::Void tToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	reestablecer();
	OcultarFiltros(FiltrarInicial("T"));
	imprimir();
}
private: System::Void uToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	reestablecer();
	OcultarFiltros(FiltrarInicial("U"));
	imprimir();
}
private: System::Void vToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	reestablecer();
	OcultarFiltros(FiltrarInicial("V"));
	imprimir();
}
private: System::Void wToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	reestablecer();
	OcultarFiltros(FiltrarInicial("W"));
	imprimir();
}
private: System::Void xToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	reestablecer();
	OcultarFiltros(FiltrarInicial("X"));
	imprimir();
}
private: System::Void yToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	reestablecer();
	OcultarFiltros(FiltrarInicial("Y"));
	imprimir();
}

private: System::Void txtBoxNombre_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	reestablecer();
	int p;
	for (int i = 0; i < 8; i++) {
		if (gcnew String(lista[i]->getNombre().c_str()) == txtBoxNombre->Text) {
			OcultarFiltros(1);
			lblNombre1->Text = gcnew String(lista[i]->getNombre().c_str());
			lblPP1->Text = gcnew String(lista[i]->getPromedioPonderado() + "");
			lblDP1->Text = gcnew String(lista[i]->getDeudaPendiente() + "");
			lblPeso1->Text = gcnew String(lista[i]->getPeso() + "");
		}
	}
}
private: System::Void txtBoxPesoMayor_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	reestablecer();
	ordenarPesoDes();
	int p = 0;
	if (txtBoxPesoMayor->Text != gcnew String("")) {
		for (int i = 0; i < 8; i++) {
			if (lista[i]->getPeso() >= Convert::ToInt16(txtBoxPesoMayor->Text)) {
				p++;
			}
		}
	}
	OcultarFiltros(p);
	imprimir();
}
private: System::Void txtBoxPesoMenor_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	reestablecer();
	ordenarPesoAsc();
	int p = 0;
	if (txtBoxPesoMenor->Text != gcnew String("")) {
		for (int i = 0; i < 8; i++) {
			if (lista[i]->getPeso() <= Convert::ToInt16(txtBoxPesoMenor->Text)) {
				p++;
			}
		}
	}
	OcultarFiltros(p);
	imprimir();
}
private: System::Void txtBoxPesoIgual_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	reestablecer();
	if (txtBoxPesoIgual->Text != gcnew String("")) {
		OcultarFiltros(FiltrarPesoIgual(Convert::ToInt16(txtBoxPesoIgual->Text)));
	}
	imprimir();
	
}
private: System::Void txtBoxDireccion_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (txtBoxDireccion->Text != gcnew String("")) {
		//String^ temp = txtBoxDireccion->Text;
		
		//mainProgram->EditarRuta(txtBoxDireccion->Text);
	}
	

}
};
}

#pragma once
#include"Donor.h"
#include"filecsv.h"
#include "Recipient.h"
#include"Validition.h"
#include"Admin.h"
#include<string>
#include <msclr/marshal_cppstd.h>
#include <exception>
#include <cstdlib>
#include <list>
#include <vector>
#include"User.h"





namespace Project4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Summary for Home
	/// </summary>
	public ref class Home : public System::Windows::Forms::Form
	{
	public:

		int i = 0;
		int indexDoAdmin = -1;
		int indexReAdmin = -1;
		int indexReqDoAdmin = -1;
		bool DoSingup = false;
		bool femaleRegDo = false;
		bool maleRegDo = false;
		bool femaleRegRe = false;
		bool maleRegRe = false;
		int CurentUserIndex = 0;
		//Do
		bool FnameUpdateDo = false;
		bool LnameUpdateDo = false;
		bool EmailUpdateDO = false;
		bool PassUpdateDo = false;
		bool MidUpdateDO = false;
		bool DisUpdateDo = false;
		/////Re
		bool FnameUpdateRe = false;
		bool LnameUpdateRe = false;
		bool EmailUpdateRe = false;
		bool PassUpdateRe = false;
		bool HosUpdateRe = false;
		bool DocUpdateRe = false;
		//AdminDo
		bool FnameUpdateAdminDo = false;
		bool LnameUpdateAdminDo = false;
		bool EmailUpdateAdminDO = false;
		bool PassUpdateAdminDo = false;
		bool AgeUpdateAdminDo = false;
		bool GenderUpdateAdminDo = false;
		bool BloodUpdateAdminDO = false;
		bool DisUpdateAdminDo = false;
		bool LastDonUpdateAdminDo = false;
		//AdminRe
		bool FnameUpdateAdminRe = false;
		bool LnameUpdateAdminRe = false;
		bool EmailUpdateAdminRe = false;
		bool PassUpdateAdminRe = false;
		bool AgeUpdateAdminRe = false;
		bool GenderUpdateAdminRe = false;
		bool BloodUpdateAdminRe = false;
		bool HosUpdateAdminRe = false;
		bool DocUpdateAdminRe = false;
		/////////
		bool DelAcoAdminDo = false;
		bool DelAcoAdminRe = false;
		//drag
		bool dragging;
		Point offset;


	private: System::Windows::Forms::Label^ labelBooldTypeHDo;
	private: System::Windows::Forms::Button^ butEditNameDonor;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panelUpdateFname;
	private: System::Windows::Forms::TextBox^ textBoxUpdateFname;
	private: System::Windows::Forms::Button^ butExittPanelFnameDo;
	private: System::Windows::Forms::Label^ labelLnameSetDo;
	private: System::Windows::Forms::Label^ labelPasSetDo;
	private: System::Windows::Forms::Label^ labelEmailSetDo;
	private: System::Windows::Forms::Label^ labelNameSetDO;
	private: System::Windows::Forms::Button^ butSaveFnameDo;
	private: System::Windows::Forms::Panel^ panelLoginRe;
	private: System::Windows::Forms::Button^ butSingupFormLoginRe;
	private: System::Windows::Forms::Button^ butLoginRe;
	private: System::Windows::Forms::TextBox^ textBoxPasLoginRe;
	private: System::Windows::Forms::TextBox^ textBoxEmailLoginRe;
	private: System::Windows::Forms::Button^ butBackfromRe;
	private: System::Windows::Forms::Panel^ panelSinguRe;
	private: System::Windows::Forms::Panel^ panelLoginAdmin;
	private: System::Windows::Forms::Button^ butLoginAdmin;
	private: System::Windows::Forms::TextBox^ textBoxPassAdmin;
	private: System::Windows::Forms::TextBox^ textBoxUsernameAdmin;
	private: System::Windows::Forms::DateTimePicker^ textBoxLastDataRegDo;
	private: System::Windows::Forms::TextBox^ textBoxLastnameReDo;
	private: System::Windows::Forms::Panel^ panelMassegSingup;
	private: System::Windows::Forms::Button^ butLogMasseg;
	private: System::Windows::Forms::Button^ butSendReqDo;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerYReqDo;
	private: System::Windows::Forms::TextBox^ textBoxHosReqDo;
	private: System::Windows::Forms::Button^ butEditLNameDonor;
	private: System::Windows::Forms::Button^ butEditEmailDonor;
	private: System::Windows::Forms::Button^ butEditPasDonor;
	private: System::Windows::Forms::Label^ labelIdSetDo;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerDReqDo;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerMReqDo;
	private: System::Windows::Forms::TextBox^ textBoxDocSingupRe;
	private: System::Windows::Forms::RadioButton^ radioButFemaleRe;
	private: System::Windows::Forms::RadioButton^ radioButMaleRe;
	private: System::Windows::Forms::ComboBox^ comboBoxBloodSingupRe;
	private: System::Windows::Forms::TextBox^ textBoxLnameSingupRe;
	private: System::Windows::Forms::TextBox^ textBoxMailSingupRe;
	private: System::Windows::Forms::TextBox^ textBoxPasSingupRe;
	private: System::Windows::Forms::TextBox^ textBoxAgeSingupRe;
	private: System::Windows::Forms::TextBox^ textBoxHosSingupRe;
	private: System::Windows::Forms::TextBox^ textBoxFnameSingupRe;
	private: System::Windows::Forms::Button^ butSingupRefromReg;
	private: System::Windows::Forms::Button^ butLoginReFromReg;
	private: System::Windows::Forms::Button^ butBackFromRegRe;
	private: System::Windows::Forms::Panel^ panelRoomRe;
	private: System::Windows::Forms::Panel^ panelHomeRe;
	private: System::Windows::Forms::Label^ labelHosnameHomRe;
	private: System::Windows::Forms::Label^ labelBloodeHomRe;
	private: System::Windows::Forms::Label^ labelDocnameHomRe;
	private: System::Windows::Forms::Label^ labelUsernameHomRe;
	private: System::Windows::Forms::Panel^ panelRequestRe;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Panel^ panelSettingRe;
	private: System::Windows::Forms::Label^ labelIdSetRe;
	private: System::Windows::Forms::Button^ butEditPasRe;
	private: System::Windows::Forms::Button^ butEditDocRe;
	private: System::Windows::Forms::Button^ butEditHosRe;
	private: System::Windows::Forms::Label^ labelLnameSetRe;
	private: System::Windows::Forms::Label^ labelPasSetRe;
	private: System::Windows::Forms::Label^ labelEmailSetRe;
	private: System::Windows::Forms::Label^ labelFnameSetRe;
	private: System::Windows::Forms::Button^ butEditMailRe;
	private: System::Windows::Forms::Button^ butUpdataRe;
	private: System::Windows::Forms::Button^ butDelAccRe;
	private: System::Windows::Forms::Panel^ panelUpdateDateRe;
	private: System::Windows::Forms::Button^ butSeveUpdateRe;
	private: System::Windows::Forms::TextBox^ textBoxUpdateDateRe;
	private: System::Windows::Forms::Button^ butExitPanelUpRe;
	private: System::Windows::Forms::Panel^ panelMenuBarRe;
	private: System::Windows::Forms::Button^ butSettingRe;
	private: System::Windows::Forms::Button^ butReqRe;
	private: System::Windows::Forms::Button^ butHomeRe;
	private: System::Windows::Forms::ComboBox^ comboBoxReqBloodeRe;
	private: System::Windows::Forms::TextBox^ textBoxQuantityReqRe;
	private: System::Windows::Forms::TextBox^ textBoxReqHosRe;
	private: System::Windows::Forms::Button^ butEditLnameRe;
	private: System::Windows::Forms::Button^ butEditFnameRe;
	private: System::Windows::Forms::Label^ labelDocSetRe;
	private: System::Windows::Forms::Label^ labelHosSetRe;
	private: System::Windows::Forms::Button^ butSerchRe;
	private: System::Windows::Forms::Panel^ panelSerchRe;
	private: System::Windows::Forms::Button^ butSerRe;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerSerRe;
	private: System::Windows::Forms::Button^ butLogOutRe;
	private: System::Windows::Forms::Button^ butLogoutDo;
	private: System::Windows::Forms::Panel^ panelRoomAdmin;
	private: System::Windows::Forms::Panel^ panelHomeAdmin;
	private: System::Windows::Forms::Label^ labelNumofAllReq;
	private: System::Windows::Forms::Label^ labelNumofRe;
	private: System::Windows::Forms::Label^ labelNumofDo;
	private: System::Windows::Forms::Panel^ panelMenuAdmin;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ butAdminPageRe;
	private: System::Windows::Forms::Button^ butAdminPageReq;
	private: System::Windows::Forms::Button^ butAdminPageHo;
	private: System::Windows::Forms::Panel^ panelDoAdmin;
	private: System::Windows::Forms::Button^ butLnameAdminDo;
	private: System::Windows::Forms::Button^ butEmailnameAdminDo;
	private: System::Windows::Forms::Button^ butPasAdminDo;
	private: System::Windows::Forms::Label^ labelLnameAdminDo;
	private: System::Windows::Forms::Label^ labelPasAdminDo;
	private: System::Windows::Forms::Label^ labelEmailAdminDo;
	private: System::Windows::Forms::Label^ labelFnameAdminDo;
	private: System::Windows::Forms::Button^ butFnameAdminDo;
	private: System::Windows::Forms::Button^ butInsertAdminDo;
	private: System::Windows::Forms::Button^ butDelAcoAdminDo;
	private: System::Windows::Forms::Panel^ panelUpdateAdminDo;
	private: System::Windows::Forms::Button^ butSaveUpdateAdminDo;
	private: System::Windows::Forms::TextBox^ textBoxUpdateAdminDo;
	private: System::Windows::Forms::Button^ butExitUpdateAdminDo;
	private: System::Windows::Forms::TextBox^ textBoxIdAdminDo;
	private: System::Windows::Forms::Button^ butBloodeAdminDo;
	private: System::Windows::Forms::Button^ butLastDonAdminDo;
	private: System::Windows::Forms::Button^ butDisAdminDo;
	private: System::Windows::Forms::Label^ labelBloodeAdminDo;
	private: System::Windows::Forms::Label^ labelDisAdminDo;
	private: System::Windows::Forms::Label^ labelLastDonAdminDo;
	private: System::Windows::Forms::Label^ labelAgeAdminDo;
	private: System::Windows::Forms::Button^ butAgeAdminDo;
	private: System::Windows::Forms::Button^ butBackRcoDoAdmin;
	private: System::Windows::Forms::Button^ butNextRcoDoAdmin;
	private: System::Windows::Forms::Label^ labelGenderAdminDo;
	private: System::Windows::Forms::Button^ butGenderAdminDo;
	private: System::Windows::Forms::Label^ labelABab;
	private: System::Windows::Forms::Label^ labelAB;
	private: System::Windows::Forms::Label^ labelOo;
	private: System::Windows::Forms::Label^ labelO;
	private: System::Windows::Forms::Label^ labelBb;
	private: System::Windows::Forms::Label^ labelB;
	private: System::Windows::Forms::Label^ labelAa;
	private: System::Windows::Forms::Label^ labelA;
	private: System::Windows::Forms::Panel^ panelReAdmin;
	private: System::Windows::Forms::Label^ labelGenderAdminRe;
	private: System::Windows::Forms::Button^ butGenderAdminRe;
	private: System::Windows::Forms::Button^ butBackRcoReAdmin;
	private: System::Windows::Forms::Button^ butNextRcoReAdmin;
	private: System::Windows::Forms::Button^ butBloodeAdminRe;
	private: System::Windows::Forms::Button^ butHosAdminRe;
	private: System::Windows::Forms::Button^ butDocAdminRe;
	private: System::Windows::Forms::Label^ labelBloodeAdminRe;
	private: System::Windows::Forms::Label^ labelDocAdminRe;
	private: System::Windows::Forms::Label^ labelHosAdminRe;
	private: System::Windows::Forms::Label^ labelAgeAdminRe;
	private: System::Windows::Forms::Button^ butAgeAdminRe;
	private: System::Windows::Forms::TextBox^ textBoxIdAdminRe;
	private: System::Windows::Forms::Button^ butLnameAdminRe;
	private: System::Windows::Forms::Button^ butEmailAdminRe;
	private: System::Windows::Forms::Button^ butBPasAdminRe;
	private: System::Windows::Forms::Label^ labelLnameAdminRe;
	private: System::Windows::Forms::Label^ labelPasAdminRe;
	private: System::Windows::Forms::Label^ labelEmailAdminRe;
	private: System::Windows::Forms::Label^ labelFnameAdminRe;
	private: System::Windows::Forms::Button^ butFnameAdminRe;
	private: System::Windows::Forms::Button^ butInsertRe;
	private: System::Windows::Forms::Button^ butDelAcoAdminRe;
	private: System::Windows::Forms::Panel^ panelUpdateAdminRe;
	private: System::Windows::Forms::Button^ butSaveUpdateAdminRe;
	private: System::Windows::Forms::TextBox^ textBoxUpdateAdminRe;
	private: System::Windows::Forms::Button^ butExitUpdateAdminRe;
	private: System::Windows::Forms::Panel^ panelDelAcconetRe;
	private: System::Windows::Forms::Button^ butNoDelAccoRe;
	private: System::Windows::Forms::Button^ butYesDelAccoRe;
	private: System::Windows::Forms::Button^ butExitDelPanel;
	private: System::Windows::Forms::Panel^ panelDelAccoDo;
	private: System::Windows::Forms::Button^ butNoDelAccoDo;
	private: System::Windows::Forms::Button^ butYesDelAccoDo;
	private: System::Windows::Forms::Button^ butExitDelAccoPanelDo;
	private: System::Windows::Forms::Panel^ panelDelAccoAdmin;
	private: System::Windows::Forms::Button^ butNoDelAcoAdmin;
	private: System::Windows::Forms::Button^ butYesDelAcoAdmin;
	private: System::Windows::Forms::Button^ butExitDelAcoAdmin;
	private: System::Windows::Forms::Panel^ panelInserDo;
	private: System::Windows::Forms::Button^ butAddDoAdmin;
	private: System::Windows::Forms::TextBox^ textBoxEmailInAdminDo;
	private: System::Windows::Forms::TextBox^ textBoxLnameInAdminDo;
	private: System::Windows::Forms::TextBox^ textBoxAgeInAdminDo;
	private: System::Windows::Forms::TextBox^ textBoxDisInAdminDo;
	private: System::Windows::Forms::TextBox^ textBoxGendrInAdminDo;
	private: System::Windows::Forms::TextBox^ textBoxPasInAdminDo;
	private: System::Windows::Forms::TextBox^ textBoxLastDonInAdminDo;
	private: System::Windows::Forms::TextBox^ textBoxBloodInAdminDo;
	private: System::Windows::Forms::TextBox^ textBoxFnameInAdminDo;
	private: System::Windows::Forms::Button^ butExitInsertDo;
	private: System::Windows::Forms::Panel^ panelInsertRe;
	private: System::Windows::Forms::Button^ butAddReAdmin;
	private: System::Windows::Forms::TextBox^ textBoxEmailInAdminRe;
	private: System::Windows::Forms::TextBox^ textBoxLnameInAdminRe;
	private: System::Windows::Forms::TextBox^ textBoxAgeInAdminRe;
	private: System::Windows::Forms::TextBox^ textBoxHosInAdminRe;
	private: System::Windows::Forms::TextBox^ textBoxGenderInAdminRe;
	private: System::Windows::Forms::TextBox^ textBoxPasInAdminRe;
	private: System::Windows::Forms::TextBox^ textBoxDocInAdminRe;
	private: System::Windows::Forms::TextBox^ textBoxBloodInAdminRe;
	private: System::Windows::Forms::TextBox^ textBoxFnameInAdminRe;
	private: System::Windows::Forms::Button^ butExitInserRe;
	private: System::Windows::Forms::Button^ butAdminPageDo;
	private: System::Windows::Forms::Panel^ panelRequestAdmin;
	private: System::Windows::Forms::Button^ butBackReqAdmin;
	private: System::Windows::Forms::Button^ butNextReqAdmin;
	private: System::Windows::Forms::Label^ labelBloodDoReqAdmin;
	private: System::Windows::Forms::Label^ labelDateDoReqAdmin;
	private: System::Windows::Forms::TextBox^ textBoxIdDoReqAdmin;
	private: System::Windows::Forms::Label^ labelLnameDoReqAdmin;
	private: System::Windows::Forms::Label^ labelFnameDoReqAdmin;
	private: System::Windows::Forms::Label^ labelBHosDoReqAdmin;
	private: System::Windows::Forms::Label^ labelAgeDoReqAdmin;
	private: System::Windows::Forms::Label^ labelEmailDoReqAdmin;
	private: System::Windows::Forms::Button^ butValidReqDoAdmin;
	private: System::Windows::Forms::Button^ butAcceptReqDoAdmin;
	private: System::Windows::Forms::TextBox^ textBoxMedRegDo;
	private: System::Windows::Forms::TextBox^ textBoxDisRegDo;
	private: System::Windows::Forms::TextBox^ textBoxNameREGDo;
	private: System::Windows::Forms::Button^ butBackFromAdminLogin;
	private: System::Windows::Forms::Panel^ panelAcceptReq;
	private: System::Windows::Forms::Button^ butExitAcceptReqPanel;
	private: System::Windows::Forms::Panel^ panelRejectReq;
	private: System::Windows::Forms::Button^ butExitRejectPanel;
	private: System::Windows::Forms::Panel^ panelDisplayBlood;

	private: System::Windows::Forms::Button^ butDisplayBlood;
	private: System::Windows::Forms::DataGridView^ dataGridView1;





	private: System::Windows::Forms::Button^ butDisplayBloodRe;
	private: System::Windows::Forms::Label^ labelExDataBlood;
	private: System::Windows::Forms::TextBox^ textBoxMidInAdminDo;
	private: System::Windows::Forms::Button^ butDisplayDoDate;
	private: System::Windows::Forms::Panel^ panelDisplayDoDate;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Gender;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column14;
	private: System::Windows::Forms::Label^ labelDisSetDo;
	private: System::Windows::Forms::Label^ labelMidSetDo;
	private: System::Windows::Forms::Button^ butEditDisDonor;
	private: System::Windows::Forms::Button^ butEditMidDonor;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column16;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ butDisplayReDate;
	private: System::Windows::Forms::Panel^ panelDisplayReDate;
	private: System::Windows::Forms::Button^ butExitDisplayReDate;



	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;
















	private: System::Windows::Forms::Button^ butRejectReq;


	public:




		Home(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Home()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ titelbar;
	private: System::Windows::Forms::Button^ exit;
	private: System::Windows::Forms::Button^ minScreen;
		   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
	private: System::Windows::Forms::Button^ fullScreen;
	private: System::Windows::Forms::Panel^ panelDonorLogin;
	private: System::Windows::Forms::Button^ backbtn;
	private: System::Windows::Forms::Panel^ panelDonorRoom;
	private: System::Windows::Forms::Button^ butLSingDo;
	private: System::Windows::Forms::Label^ labelHomePagelaDo;
	private: System::Windows::Forms::Label^ labelHomePageDo;
	private: System::Windows::Forms::Panel^ panelNavbarDo;
	private: System::Windows::Forms::Panel^ panelHomeDO;
	private: System::Windows::Forms::Button^ butHomeDo;
	private: System::Windows::Forms::Button^ butSettingDo;
	private: System::Windows::Forms::Button^ butReqDo;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panelRequestDo;
	private: System::Windows::Forms::Panel^ panelSettingDo;
	private: System::Windows::Forms::TextBox^ textBoxEmailLoginDo;
	private: System::Windows::Forms::Button^ butLoginDo;
	private: System::Windows::Forms::TextBox^ textBoxPasLOginDO;
	private: System::Windows::Forms::Panel^ DonorSingup;
	private: System::Windows::Forms::Button^ butSingupINRegesterDo;
	private: System::Windows::Forms::Button^ butTologinFromRegister;
	private: System::Windows::Forms::Button^ butBackfromSingupDo;
	private: System::Windows::Forms::ComboBox^ comboBoxBooldTypeSingupDO;
	private: System::Windows::Forms::TextBox^ textBoxAgeRegDo;
	private: System::Windows::Forms::TextBox^ textBoxPasRegDo;
	private: System::Windows::Forms::TextBox^ textBoxMailRegDo;
	private: System::Windows::Forms::RadioButton^ radioButtonFemaleRegDo;
	private: System::Windows::Forms::RadioButton^ radioButtonMaleRegDo;
	private: System::Windows::Forms::Panel^ main;
	private: System::Windows::Forms::Button^ donoer;
	private: System::Windows::Forms::Button^ recipient;
	private: System::Windows::Forms::Button^ admin;
	private: System::ComponentModel::IContainer^ components;
#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Required method for Designer support - do not modify
		   /// the contents of this method with the code editor.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->components = (gcnew System::ComponentModel::Container());
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
			   this->titelbar = (gcnew System::Windows::Forms::Panel());
			   this->panel1 = (gcnew System::Windows::Forms::Panel());
			   this->minScreen = (gcnew System::Windows::Forms::Button());
			   this->fullScreen = (gcnew System::Windows::Forms::Button());
			   this->exit = (gcnew System::Windows::Forms::Button());
			   this->panelDonorLogin = (gcnew System::Windows::Forms::Panel());
			   this->textBoxPasLOginDO = (gcnew System::Windows::Forms::TextBox());
			   this->textBoxEmailLoginDo = (gcnew System::Windows::Forms::TextBox());
			   this->butLoginDo = (gcnew System::Windows::Forms::Button());
			   this->butLSingDo = (gcnew System::Windows::Forms::Button());
			   this->backbtn = (gcnew System::Windows::Forms::Button());
			   this->panelDonorRoom = (gcnew System::Windows::Forms::Panel());
			   this->panelHomeDO = (gcnew System::Windows::Forms::Panel());
			   this->labelBooldTypeHDo = (gcnew System::Windows::Forms::Label());
			   this->labelHomePagelaDo = (gcnew System::Windows::Forms::Label());
			   this->labelHomePageDo = (gcnew System::Windows::Forms::Label());
			   this->panelSettingDo = (gcnew System::Windows::Forms::Panel());
			   this->labelDisSetDo = (gcnew System::Windows::Forms::Label());
			   this->labelMidSetDo = (gcnew System::Windows::Forms::Label());
			   this->butEditDisDonor = (gcnew System::Windows::Forms::Button());
			   this->butEditMidDonor = (gcnew System::Windows::Forms::Button());
			   this->labelIdSetDo = (gcnew System::Windows::Forms::Label());
			   this->butEditLNameDonor = (gcnew System::Windows::Forms::Button());
			   this->butEditEmailDonor = (gcnew System::Windows::Forms::Button());
			   this->butEditPasDonor = (gcnew System::Windows::Forms::Button());
			   this->labelLnameSetDo = (gcnew System::Windows::Forms::Label());
			   this->labelPasSetDo = (gcnew System::Windows::Forms::Label());
			   this->labelEmailSetDo = (gcnew System::Windows::Forms::Label());
			   this->labelNameSetDO = (gcnew System::Windows::Forms::Label());
			   this->butEditNameDonor = (gcnew System::Windows::Forms::Button());
			   this->button6 = (gcnew System::Windows::Forms::Button());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->panelRequestDo = (gcnew System::Windows::Forms::Panel());
			   this->dateTimePickerDReqDo = (gcnew System::Windows::Forms::DateTimePicker());
			   this->dateTimePickerMReqDo = (gcnew System::Windows::Forms::DateTimePicker());
			   this->butSendReqDo = (gcnew System::Windows::Forms::Button());
			   this->dateTimePickerYReqDo = (gcnew System::Windows::Forms::DateTimePicker());
			   this->textBoxHosReqDo = (gcnew System::Windows::Forms::TextBox());
			   this->panelNavbarDo = (gcnew System::Windows::Forms::Panel());
			   this->butLogoutDo = (gcnew System::Windows::Forms::Button());
			   this->butSettingDo = (gcnew System::Windows::Forms::Button());
			   this->butReqDo = (gcnew System::Windows::Forms::Button());
			   this->butHomeDo = (gcnew System::Windows::Forms::Button());
			   this->panelDelAccoDo = (gcnew System::Windows::Forms::Panel());
			   this->butNoDelAccoDo = (gcnew System::Windows::Forms::Button());
			   this->butYesDelAccoDo = (gcnew System::Windows::Forms::Button());
			   this->butExitDelAccoPanelDo = (gcnew System::Windows::Forms::Button());
			   this->panelUpdateFname = (gcnew System::Windows::Forms::Panel());
			   this->butSaveFnameDo = (gcnew System::Windows::Forms::Button());
			   this->textBoxUpdateFname = (gcnew System::Windows::Forms::TextBox());
			   this->butExittPanelFnameDo = (gcnew System::Windows::Forms::Button());
			   this->DonorSingup = (gcnew System::Windows::Forms::Panel());
			   this->textBoxMedRegDo = (gcnew System::Windows::Forms::TextBox());
			   this->textBoxDisRegDo = (gcnew System::Windows::Forms::TextBox());
			   this->textBoxNameREGDo = (gcnew System::Windows::Forms::TextBox());
			   this->textBoxLastnameReDo = (gcnew System::Windows::Forms::TextBox());
			   this->textBoxLastDataRegDo = (gcnew System::Windows::Forms::DateTimePicker());
			   this->radioButtonFemaleRegDo = (gcnew System::Windows::Forms::RadioButton());
			   this->radioButtonMaleRegDo = (gcnew System::Windows::Forms::RadioButton());
			   this->comboBoxBooldTypeSingupDO = (gcnew System::Windows::Forms::ComboBox());
			   this->textBoxAgeRegDo = (gcnew System::Windows::Forms::TextBox());
			   this->textBoxPasRegDo = (gcnew System::Windows::Forms::TextBox());
			   this->textBoxMailRegDo = (gcnew System::Windows::Forms::TextBox());
			   this->butSingupINRegesterDo = (gcnew System::Windows::Forms::Button());
			   this->butTologinFromRegister = (gcnew System::Windows::Forms::Button());
			   this->butBackfromSingupDo = (gcnew System::Windows::Forms::Button());
			   this->main = (gcnew System::Windows::Forms::Panel());
			   this->donoer = (gcnew System::Windows::Forms::Button());
			   this->recipient = (gcnew System::Windows::Forms::Button());
			   this->admin = (gcnew System::Windows::Forms::Button());
			   this->panelLoginRe = (gcnew System::Windows::Forms::Panel());
			   this->butSingupFormLoginRe = (gcnew System::Windows::Forms::Button());
			   this->butLoginRe = (gcnew System::Windows::Forms::Button());
			   this->textBoxPasLoginRe = (gcnew System::Windows::Forms::TextBox());
			   this->textBoxEmailLoginRe = (gcnew System::Windows::Forms::TextBox());
			   this->butBackfromRe = (gcnew System::Windows::Forms::Button());
			   this->panelSinguRe = (gcnew System::Windows::Forms::Panel());
			   this->butBackFromRegRe = (gcnew System::Windows::Forms::Button());
			   this->butSingupRefromReg = (gcnew System::Windows::Forms::Button());
			   this->butLoginReFromReg = (gcnew System::Windows::Forms::Button());
			   this->textBoxDocSingupRe = (gcnew System::Windows::Forms::TextBox());
			   this->radioButFemaleRe = (gcnew System::Windows::Forms::RadioButton());
			   this->radioButMaleRe = (gcnew System::Windows::Forms::RadioButton());
			   this->comboBoxBloodSingupRe = (gcnew System::Windows::Forms::ComboBox());
			   this->textBoxLnameSingupRe = (gcnew System::Windows::Forms::TextBox());
			   this->textBoxMailSingupRe = (gcnew System::Windows::Forms::TextBox());
			   this->textBoxPasSingupRe = (gcnew System::Windows::Forms::TextBox());
			   this->textBoxAgeSingupRe = (gcnew System::Windows::Forms::TextBox());
			   this->textBoxHosSingupRe = (gcnew System::Windows::Forms::TextBox());
			   this->textBoxFnameSingupRe = (gcnew System::Windows::Forms::TextBox());
			   this->panelLoginAdmin = (gcnew System::Windows::Forms::Panel());
			   this->butBackFromAdminLogin = (gcnew System::Windows::Forms::Button());
			   this->butLoginAdmin = (gcnew System::Windows::Forms::Button());
			   this->textBoxPassAdmin = (gcnew System::Windows::Forms::TextBox());
			   this->textBoxUsernameAdmin = (gcnew System::Windows::Forms::TextBox());
			   this->panelMassegSingup = (gcnew System::Windows::Forms::Panel());
			   this->butLogMasseg = (gcnew System::Windows::Forms::Button());
			   this->panelRoomRe = (gcnew System::Windows::Forms::Panel());
			   this->panelHomeRe = (gcnew System::Windows::Forms::Panel());
			   this->labelHosnameHomRe = (gcnew System::Windows::Forms::Label());
			   this->labelBloodeHomRe = (gcnew System::Windows::Forms::Label());
			   this->labelDocnameHomRe = (gcnew System::Windows::Forms::Label());
			   this->labelUsernameHomRe = (gcnew System::Windows::Forms::Label());
			   this->panelSettingRe = (gcnew System::Windows::Forms::Panel());
			   this->labelDocSetRe = (gcnew System::Windows::Forms::Label());
			   this->labelHosSetRe = (gcnew System::Windows::Forms::Label());
			   this->butEditLnameRe = (gcnew System::Windows::Forms::Button());
			   this->butEditFnameRe = (gcnew System::Windows::Forms::Button());
			   this->labelIdSetRe = (gcnew System::Windows::Forms::Label());
			   this->butEditPasRe = (gcnew System::Windows::Forms::Button());
			   this->butEditDocRe = (gcnew System::Windows::Forms::Button());
			   this->butEditHosRe = (gcnew System::Windows::Forms::Button());
			   this->labelLnameSetRe = (gcnew System::Windows::Forms::Label());
			   this->labelPasSetRe = (gcnew System::Windows::Forms::Label());
			   this->labelEmailSetRe = (gcnew System::Windows::Forms::Label());
			   this->labelFnameSetRe = (gcnew System::Windows::Forms::Label());
			   this->butEditMailRe = (gcnew System::Windows::Forms::Button());
			   this->butUpdataRe = (gcnew System::Windows::Forms::Button());
			   this->butDelAccRe = (gcnew System::Windows::Forms::Button());
			   this->panelMenuBarRe = (gcnew System::Windows::Forms::Panel());
			   this->butDisplayBloodRe = (gcnew System::Windows::Forms::Button());
			   this->butLogOutRe = (gcnew System::Windows::Forms::Button());
			   this->butSerchRe = (gcnew System::Windows::Forms::Button());
			   this->butSettingRe = (gcnew System::Windows::Forms::Button());
			   this->butReqRe = (gcnew System::Windows::Forms::Button());
			   this->butHomeRe = (gcnew System::Windows::Forms::Button());
			   this->panelDisplayBlood = (gcnew System::Windows::Forms::Panel());
			   this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			   this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			   this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->butDisplayBlood = (gcnew System::Windows::Forms::Button());
			   this->panelSerchRe = (gcnew System::Windows::Forms::Panel());
			   this->labelExDataBlood = (gcnew System::Windows::Forms::Label());
			   this->labelABab = (gcnew System::Windows::Forms::Label());
			   this->labelAB = (gcnew System::Windows::Forms::Label());
			   this->labelOo = (gcnew System::Windows::Forms::Label());
			   this->labelO = (gcnew System::Windows::Forms::Label());
			   this->labelBb = (gcnew System::Windows::Forms::Label());
			   this->labelB = (gcnew System::Windows::Forms::Label());
			   this->labelAa = (gcnew System::Windows::Forms::Label());
			   this->labelA = (gcnew System::Windows::Forms::Label());
			   this->butSerRe = (gcnew System::Windows::Forms::Button());
			   this->dateTimePickerSerRe = (gcnew System::Windows::Forms::DateTimePicker());
			   this->panelRequestRe = (gcnew System::Windows::Forms::Panel());
			   this->comboBoxReqBloodeRe = (gcnew System::Windows::Forms::ComboBox());
			   this->textBoxQuantityReqRe = (gcnew System::Windows::Forms::TextBox());
			   this->textBoxReqHosRe = (gcnew System::Windows::Forms::TextBox());
			   this->button8 = (gcnew System::Windows::Forms::Button());
			   this->panelDelAcconetRe = (gcnew System::Windows::Forms::Panel());
			   this->butNoDelAccoRe = (gcnew System::Windows::Forms::Button());
			   this->butYesDelAccoRe = (gcnew System::Windows::Forms::Button());
			   this->butExitDelPanel = (gcnew System::Windows::Forms::Button());
			   this->panelUpdateDateRe = (gcnew System::Windows::Forms::Panel());
			   this->butSeveUpdateRe = (gcnew System::Windows::Forms::Button());
			   this->textBoxUpdateDateRe = (gcnew System::Windows::Forms::TextBox());
			   this->butExitPanelUpRe = (gcnew System::Windows::Forms::Button());
			   this->panelRoomAdmin = (gcnew System::Windows::Forms::Panel());
			   this->panelHomeAdmin = (gcnew System::Windows::Forms::Panel());
			   this->butDisplayReDate = (gcnew System::Windows::Forms::Button());
			   this->butDisplayDoDate = (gcnew System::Windows::Forms::Button());
			   this->labelNumofAllReq = (gcnew System::Windows::Forms::Label());
			   this->labelNumofRe = (gcnew System::Windows::Forms::Label());
			   this->labelNumofDo = (gcnew System::Windows::Forms::Label());
			   this->panelMenuAdmin = (gcnew System::Windows::Forms::Panel());
			   this->button10 = (gcnew System::Windows::Forms::Button());
			   this->butAdminPageDo = (gcnew System::Windows::Forms::Button());
			   this->butAdminPageRe = (gcnew System::Windows::Forms::Button());
			   this->butAdminPageReq = (gcnew System::Windows::Forms::Button());
			   this->butAdminPageHo = (gcnew System::Windows::Forms::Button());
			   this->panelDelAccoAdmin = (gcnew System::Windows::Forms::Panel());
			   this->butNoDelAcoAdmin = (gcnew System::Windows::Forms::Button());
			   this->butYesDelAcoAdmin = (gcnew System::Windows::Forms::Button());
			   this->butExitDelAcoAdmin = (gcnew System::Windows::Forms::Button());
			   this->panelRejectReq = (gcnew System::Windows::Forms::Panel());
			   this->butExitRejectPanel = (gcnew System::Windows::Forms::Button());
			   this->butRejectReq = (gcnew System::Windows::Forms::Button());
			   this->panelDisplayDoDate = (gcnew System::Windows::Forms::Panel());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			   this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Gender = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->panelUpdateAdminRe = (gcnew System::Windows::Forms::Panel());
			   this->butSaveUpdateAdminRe = (gcnew System::Windows::Forms::Button());
			   this->textBoxUpdateAdminRe = (gcnew System::Windows::Forms::TextBox());
			   this->butExitUpdateAdminRe = (gcnew System::Windows::Forms::Button());
			   this->panelUpdateAdminDo = (gcnew System::Windows::Forms::Panel());
			   this->butSaveUpdateAdminDo = (gcnew System::Windows::Forms::Button());
			   this->textBoxUpdateAdminDo = (gcnew System::Windows::Forms::TextBox());
			   this->butExitUpdateAdminDo = (gcnew System::Windows::Forms::Button());
			   this->panelInsertRe = (gcnew System::Windows::Forms::Panel());
			   this->butAddReAdmin = (gcnew System::Windows::Forms::Button());
			   this->textBoxEmailInAdminRe = (gcnew System::Windows::Forms::TextBox());
			   this->textBoxLnameInAdminRe = (gcnew System::Windows::Forms::TextBox());
			   this->textBoxAgeInAdminRe = (gcnew System::Windows::Forms::TextBox());
			   this->textBoxHosInAdminRe = (gcnew System::Windows::Forms::TextBox());
			   this->textBoxGenderInAdminRe = (gcnew System::Windows::Forms::TextBox());
			   this->textBoxPasInAdminRe = (gcnew System::Windows::Forms::TextBox());
			   this->textBoxDocInAdminRe = (gcnew System::Windows::Forms::TextBox());
			   this->textBoxBloodInAdminRe = (gcnew System::Windows::Forms::TextBox());
			   this->textBoxFnameInAdminRe = (gcnew System::Windows::Forms::TextBox());
			   this->butExitInserRe = (gcnew System::Windows::Forms::Button());
			   this->panelInserDo = (gcnew System::Windows::Forms::Panel());
			   this->textBoxMidInAdminDo = (gcnew System::Windows::Forms::TextBox());
			   this->butAddDoAdmin = (gcnew System::Windows::Forms::Button());
			   this->textBoxEmailInAdminDo = (gcnew System::Windows::Forms::TextBox());
			   this->textBoxLnameInAdminDo = (gcnew System::Windows::Forms::TextBox());
			   this->textBoxAgeInAdminDo = (gcnew System::Windows::Forms::TextBox());
			   this->textBoxDisInAdminDo = (gcnew System::Windows::Forms::TextBox());
			   this->textBoxGendrInAdminDo = (gcnew System::Windows::Forms::TextBox());
			   this->textBoxPasInAdminDo = (gcnew System::Windows::Forms::TextBox());
			   this->textBoxLastDonInAdminDo = (gcnew System::Windows::Forms::TextBox());
			   this->textBoxBloodInAdminDo = (gcnew System::Windows::Forms::TextBox());
			   this->textBoxFnameInAdminDo = (gcnew System::Windows::Forms::TextBox());
			   this->butExitInsertDo = (gcnew System::Windows::Forms::Button());
			   this->panelDisplayReDate = (gcnew System::Windows::Forms::Panel());
			   this->butExitDisplayReDate = (gcnew System::Windows::Forms::Button());
			   this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			   this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->panelRequestAdmin = (gcnew System::Windows::Forms::Panel());
			   this->butValidReqDoAdmin = (gcnew System::Windows::Forms::Button());
			   this->butBackReqAdmin = (gcnew System::Windows::Forms::Button());
			   this->butNextReqAdmin = (gcnew System::Windows::Forms::Button());
			   this->labelAgeDoReqAdmin = (gcnew System::Windows::Forms::Label());
			   this->labelEmailDoReqAdmin = (gcnew System::Windows::Forms::Label());
			   this->labelBHosDoReqAdmin = (gcnew System::Windows::Forms::Label());
			   this->labelBloodDoReqAdmin = (gcnew System::Windows::Forms::Label());
			   this->labelDateDoReqAdmin = (gcnew System::Windows::Forms::Label());
			   this->textBoxIdDoReqAdmin = (gcnew System::Windows::Forms::TextBox());
			   this->labelLnameDoReqAdmin = (gcnew System::Windows::Forms::Label());
			   this->labelFnameDoReqAdmin = (gcnew System::Windows::Forms::Label());
			   this->panelReAdmin = (gcnew System::Windows::Forms::Panel());
			   this->labelGenderAdminRe = (gcnew System::Windows::Forms::Label());
			   this->butGenderAdminRe = (gcnew System::Windows::Forms::Button());
			   this->butBackRcoReAdmin = (gcnew System::Windows::Forms::Button());
			   this->butNextRcoReAdmin = (gcnew System::Windows::Forms::Button());
			   this->butBloodeAdminRe = (gcnew System::Windows::Forms::Button());
			   this->butHosAdminRe = (gcnew System::Windows::Forms::Button());
			   this->butDocAdminRe = (gcnew System::Windows::Forms::Button());
			   this->labelBloodeAdminRe = (gcnew System::Windows::Forms::Label());
			   this->labelDocAdminRe = (gcnew System::Windows::Forms::Label());
			   this->labelHosAdminRe = (gcnew System::Windows::Forms::Label());
			   this->labelAgeAdminRe = (gcnew System::Windows::Forms::Label());
			   this->butAgeAdminRe = (gcnew System::Windows::Forms::Button());
			   this->textBoxIdAdminRe = (gcnew System::Windows::Forms::TextBox());
			   this->butLnameAdminRe = (gcnew System::Windows::Forms::Button());
			   this->butEmailAdminRe = (gcnew System::Windows::Forms::Button());
			   this->butBPasAdminRe = (gcnew System::Windows::Forms::Button());
			   this->labelLnameAdminRe = (gcnew System::Windows::Forms::Label());
			   this->labelPasAdminRe = (gcnew System::Windows::Forms::Label());
			   this->labelEmailAdminRe = (gcnew System::Windows::Forms::Label());
			   this->labelFnameAdminRe = (gcnew System::Windows::Forms::Label());
			   this->butFnameAdminRe = (gcnew System::Windows::Forms::Button());
			   this->butInsertRe = (gcnew System::Windows::Forms::Button());
			   this->butDelAcoAdminRe = (gcnew System::Windows::Forms::Button());
			   this->panelDoAdmin = (gcnew System::Windows::Forms::Panel());
			   this->labelGenderAdminDo = (gcnew System::Windows::Forms::Label());
			   this->butGenderAdminDo = (gcnew System::Windows::Forms::Button());
			   this->butBackRcoDoAdmin = (gcnew System::Windows::Forms::Button());
			   this->butNextRcoDoAdmin = (gcnew System::Windows::Forms::Button());
			   this->butBloodeAdminDo = (gcnew System::Windows::Forms::Button());
			   this->butLastDonAdminDo = (gcnew System::Windows::Forms::Button());
			   this->butDisAdminDo = (gcnew System::Windows::Forms::Button());
			   this->labelBloodeAdminDo = (gcnew System::Windows::Forms::Label());
			   this->labelDisAdminDo = (gcnew System::Windows::Forms::Label());
			   this->labelLastDonAdminDo = (gcnew System::Windows::Forms::Label());
			   this->labelAgeAdminDo = (gcnew System::Windows::Forms::Label());
			   this->butAgeAdminDo = (gcnew System::Windows::Forms::Button());
			   this->textBoxIdAdminDo = (gcnew System::Windows::Forms::TextBox());
			   this->butLnameAdminDo = (gcnew System::Windows::Forms::Button());
			   this->butEmailnameAdminDo = (gcnew System::Windows::Forms::Button());
			   this->butPasAdminDo = (gcnew System::Windows::Forms::Button());
			   this->labelLnameAdminDo = (gcnew System::Windows::Forms::Label());
			   this->labelPasAdminDo = (gcnew System::Windows::Forms::Label());
			   this->labelEmailAdminDo = (gcnew System::Windows::Forms::Label());
			   this->labelFnameAdminDo = (gcnew System::Windows::Forms::Label());
			   this->butFnameAdminDo = (gcnew System::Windows::Forms::Button());
			   this->butInsertAdminDo = (gcnew System::Windows::Forms::Button());
			   this->butDelAcoAdminDo = (gcnew System::Windows::Forms::Button());
			   this->panelAcceptReq = (gcnew System::Windows::Forms::Panel());
			   this->butExitAcceptReqPanel = (gcnew System::Windows::Forms::Button());
			   this->butAcceptReqDoAdmin = (gcnew System::Windows::Forms::Button());
			   this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			   this->titelbar->SuspendLayout();
			   this->panelDonorLogin->SuspendLayout();
			   this->panelDonorRoom->SuspendLayout();
			   this->panelHomeDO->SuspendLayout();
			   this->panelSettingDo->SuspendLayout();
			   this->panelRequestDo->SuspendLayout();
			   this->panelNavbarDo->SuspendLayout();
			   this->panelDelAccoDo->SuspendLayout();
			   this->panelUpdateFname->SuspendLayout();
			   this->DonorSingup->SuspendLayout();
			   this->main->SuspendLayout();
			   this->panelLoginRe->SuspendLayout();
			   this->panelSinguRe->SuspendLayout();
			   this->panelLoginAdmin->SuspendLayout();
			   this->panelMassegSingup->SuspendLayout();
			   this->panelRoomRe->SuspendLayout();
			   this->panelHomeRe->SuspendLayout();
			   this->panelSettingRe->SuspendLayout();
			   this->panelMenuBarRe->SuspendLayout();
			   this->panelDisplayBlood->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			   this->panelSerchRe->SuspendLayout();
			   this->panelRequestRe->SuspendLayout();
			   this->panelDelAcconetRe->SuspendLayout();
			   this->panelUpdateDateRe->SuspendLayout();
			   this->panelRoomAdmin->SuspendLayout();
			   this->panelHomeAdmin->SuspendLayout();
			   this->panelMenuAdmin->SuspendLayout();
			   this->panelDelAccoAdmin->SuspendLayout();
			   this->panelRejectReq->SuspendLayout();
			   this->panelDisplayDoDate->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			   this->panelUpdateAdminRe->SuspendLayout();
			   this->panelUpdateAdminDo->SuspendLayout();
			   this->panelInsertRe->SuspendLayout();
			   this->panelInserDo->SuspendLayout();
			   this->panelDisplayReDate->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			   this->panelRequestAdmin->SuspendLayout();
			   this->panelReAdmin->SuspendLayout();
			   this->panelDoAdmin->SuspendLayout();
			   this->panelAcceptReq->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // titelbar
			   // 
			   this->titelbar->BackColor = System::Drawing::Color::Gainsboro;
			   this->titelbar->Controls->Add(this->panel1);
			   this->titelbar->Controls->Add(this->minScreen);
			   this->titelbar->Controls->Add(this->fullScreen);
			   this->titelbar->Controls->Add(this->exit);
			   this->titelbar->Dock = System::Windows::Forms::DockStyle::Top;
			   this->titelbar->Location = System::Drawing::Point(0, 0);
			   this->titelbar->Name = L"titelbar";
			   this->titelbar->Size = System::Drawing::Size(950, 55);
			   this->titelbar->TabIndex = 1;
			   this->titelbar->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::titelbar_MouseDown);
			   this->titelbar->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::titelbar_MouseMove);
			   this->titelbar->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::titelbar_MouseUp);
			   // 
			   // panel1
			   // 
			   this->panel1->Location = System::Drawing::Point(205, 51);
			   this->panel1->Name = L"panel1";
			   this->panel1->Size = System::Drawing::Size(745, 88);
			   this->panel1->TabIndex = 0;
			   // 
			   // minScreen
			   // 
			   this->minScreen->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			   this->minScreen->BackColor = System::Drawing::Color::Transparent;
			   this->minScreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"minScreen.BackgroundImage")));
			   this->minScreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->minScreen->FlatAppearance->BorderSize = 0;
			   this->minScreen->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->minScreen->Location = System::Drawing::Point(784, 3);
			   this->minScreen->Name = L"minScreen";
			   this->minScreen->Size = System::Drawing::Size(47, 41);
			   this->minScreen->TabIndex = 3;
			   this->minScreen->UseVisualStyleBackColor = false;
			   this->minScreen->Click += gcnew System::EventHandler(this, &Home::minScreen_Click);
			   // 
			   // fullScreen
			   // 
			   this->fullScreen->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			   this->fullScreen->BackColor = System::Drawing::Color::Transparent;
			   this->fullScreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fullScreen.BackgroundImage")));
			   this->fullScreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->fullScreen->FlatAppearance->BorderSize = 0;
			   this->fullScreen->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->fullScreen->Location = System::Drawing::Point(846, 3);
			   this->fullScreen->Name = L"fullScreen";
			   this->fullScreen->Size = System::Drawing::Size(47, 41);
			   this->fullScreen->TabIndex = 3;
			   this->fullScreen->UseVisualStyleBackColor = false;
			   this->fullScreen->Click += gcnew System::EventHandler(this, &Home::button2_Click);
			   // 
			   // exit
			   // 
			   this->exit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			   this->exit->BackColor = System::Drawing::Color::Transparent;
			   this->exit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"exit.BackgroundImage")));
			   this->exit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->exit->FlatAppearance->BorderSize = 0;
			   this->exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->exit->Location = System::Drawing::Point(899, 3);
			   this->exit->Name = L"exit";
			   this->exit->Size = System::Drawing::Size(47, 41);
			   this->exit->TabIndex = 3;
			   this->exit->UseVisualStyleBackColor = false;
			   this->exit->Click += gcnew System::EventHandler(this, &Home::button1_Click);
			   // 
			   // panelDonorLogin
			   // 
			   this->panelDonorLogin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->panelDonorLogin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelDonorLogin.BackgroundImage")));
			   this->panelDonorLogin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->panelDonorLogin->Controls->Add(this->textBoxPasLOginDO);
			   this->panelDonorLogin->Controls->Add(this->textBoxEmailLoginDo);
			   this->panelDonorLogin->Controls->Add(this->butLoginDo);
			   this->panelDonorLogin->Controls->Add(this->butLSingDo);
			   this->panelDonorLogin->Controls->Add(this->backbtn);
			   this->panelDonorLogin->Location = System::Drawing::Point(0, 52);
			   this->panelDonorLogin->Name = L"panelDonorLogin";
			   this->panelDonorLogin->Size = System::Drawing::Size(950, 599);
			   this->panelDonorLogin->TabIndex = 3;
			   // 
			   // textBoxPasLOginDO
			   // 
			   this->textBoxPasLOginDO->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxPasLOginDO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->textBoxPasLOginDO->Location = System::Drawing::Point(319, 252);
			   this->textBoxPasLOginDO->Name = L"textBoxPasLOginDO";
			   this->textBoxPasLOginDO->Size = System::Drawing::Size(332, 29);
			   this->textBoxPasLOginDO->TabIndex = 5;
			   this->textBoxPasLOginDO->UseSystemPasswordChar = true;
			   // 
			   // textBoxEmailLoginDo
			   // 
			   this->textBoxEmailLoginDo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->textBoxEmailLoginDo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxEmailLoginDo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->textBoxEmailLoginDo->Location = System::Drawing::Point(320, 164);
			   this->textBoxEmailLoginDo->Name = L"textBoxEmailLoginDo";
			   this->textBoxEmailLoginDo->Size = System::Drawing::Size(340, 29);
			   this->textBoxEmailLoginDo->TabIndex = 4;
			   // 
			   // butLoginDo
			   // 
			   this->butLoginDo->BackColor = System::Drawing::Color::Transparent;
			   this->butLoginDo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butLoginDo.BackgroundImage")));
			   this->butLoginDo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->butLoginDo->FlatAppearance->BorderSize = 0;
			   this->butLoginDo->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				   static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			   this->butLoginDo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butLoginDo->Font = (gcnew System::Drawing::Font(L"Impact", 13.8F));
			   this->butLoginDo->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->butLoginDo->Location = System::Drawing::Point(294, 326);
			   this->butLoginDo->Name = L"butLoginDo";
			   this->butLoginDo->Size = System::Drawing::Size(165, 44);
			   this->butLoginDo->TabIndex = 3;
			   this->butLoginDo->Text = L"Login";
			   this->butLoginDo->UseVisualStyleBackColor = false;
			   this->butLoginDo->Click += gcnew System::EventHandler(this, &Home::butLoginDo_Click);
			   // 
			   // butLSingDo
			   // 
			   this->butLSingDo->BackColor = System::Drawing::Color::Transparent;
			   this->butLSingDo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butLSingDo.BackgroundImage")));
			   this->butLSingDo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->butLSingDo->FlatAppearance->BorderSize = 0;
			   this->butLSingDo->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				   static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			   this->butLSingDo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butLSingDo->Font = (gcnew System::Drawing::Font(L"Impact", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->butLSingDo->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->butLSingDo->Location = System::Drawing::Point(517, 326);
			   this->butLSingDo->Name = L"butLSingDo";
			   this->butLSingDo->Size = System::Drawing::Size(165, 44);
			   this->butLSingDo->TabIndex = 2;
			   this->butLSingDo->Text = L"SIngUp";
			   this->butLSingDo->UseVisualStyleBackColor = false;
			   this->butLSingDo->Click += gcnew System::EventHandler(this, &Home::button2_Click_1);
			   // 
			   // backbtn
			   // 
			   this->backbtn->BackColor = System::Drawing::Color::Transparent;
			   this->backbtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backbtn.BackgroundImage")));
			   this->backbtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->backbtn->FlatAppearance->BorderSize = 0;
			   this->backbtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::WhiteSmoke;
			   this->backbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->backbtn->Location = System::Drawing::Point(5, 21);
			   this->backbtn->Name = L"backbtn";
			   this->backbtn->Size = System::Drawing::Size(48, 58);
			   this->backbtn->TabIndex = 1;
			   this->backbtn->UseVisualStyleBackColor = false;
			   this->backbtn->Click += gcnew System::EventHandler(this, &Home::backbtn_Click_1);
			   // 
			   // panelDonorRoom
			   // 
			   this->panelDonorRoom->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->panelDonorRoom->Controls->Add(this->panelHomeDO);
			   this->panelDonorRoom->Controls->Add(this->panelSettingDo);
			   this->panelDonorRoom->Controls->Add(this->panelRequestDo);
			   this->panelDonorRoom->Controls->Add(this->panelNavbarDo);
			   this->panelDonorRoom->Controls->Add(this->panelDelAccoDo);
			   this->panelDonorRoom->Controls->Add(this->panelUpdateFname);
			   this->panelDonorRoom->Location = System::Drawing::Point(0, 50);
			   this->panelDonorRoom->Name = L"panelDonorRoom";
			   this->panelDonorRoom->Size = System::Drawing::Size(950, 601);
			   this->panelDonorRoom->TabIndex = 2;
			   // 
			   // panelHomeDO
			   // 
			   this->panelHomeDO->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->panelHomeDO->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelHomeDO.BackgroundImage")));
			   this->panelHomeDO->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->panelHomeDO->Controls->Add(this->labelBooldTypeHDo);
			   this->panelHomeDO->Controls->Add(this->labelHomePagelaDo);
			   this->panelHomeDO->Controls->Add(this->labelHomePageDo);
			   this->panelHomeDO->Location = System::Drawing::Point(205, 0);
			   this->panelHomeDO->Name = L"panelHomeDO";
			   this->panelHomeDO->Size = System::Drawing::Size(745, 601);
			   this->panelHomeDO->TabIndex = 22;
			   // 
			   // labelBooldTypeHDo
			   // 
			   this->labelBooldTypeHDo->AutoSize = true;
			   this->labelBooldTypeHDo->BackColor = System::Drawing::Color::Transparent;
			   this->labelBooldTypeHDo->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelBooldTypeHDo->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->labelBooldTypeHDo->Location = System::Drawing::Point(630, 311);
			   this->labelBooldTypeHDo->Name = L"labelBooldTypeHDo";
			   this->labelBooldTypeHDo->Size = System::Drawing::Size(44, 25);
			   this->labelBooldTypeHDo->TabIndex = 2;
			   this->labelBooldTypeHDo->Text = L"AB-";
			   // 
			   // labelHomePagelaDo
			   // 
			   this->labelHomePagelaDo->AutoSize = true;
			   this->labelHomePagelaDo->BackColor = System::Drawing::Color::Transparent;
			   this->labelHomePagelaDo->Font = (gcnew System::Drawing::Font(L"Sitka Small", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelHomePagelaDo->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->labelHomePagelaDo->Location = System::Drawing::Point(53, 362);
			   this->labelHomePagelaDo->Name = L"labelHomePagelaDo";
			   this->labelHomePagelaDo->Size = System::Drawing::Size(0, 44);
			   this->labelHomePagelaDo->TabIndex = 1;
			   // 
			   // labelHomePageDo
			   // 
			   this->labelHomePageDo->AutoSize = true;
			   this->labelHomePageDo->BackColor = System::Drawing::Color::Transparent;
			   this->labelHomePageDo->Font = (gcnew System::Drawing::Font(L"Sitka Small", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelHomePageDo->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->labelHomePageDo->Location = System::Drawing::Point(56, 241);
			   this->labelHomePageDo->Name = L"labelHomePageDo";
			   this->labelHomePageDo->Size = System::Drawing::Size(0, 44);
			   this->labelHomePageDo->TabIndex = 0;
			   // 
			   // panelSettingDo
			   // 
			   this->panelSettingDo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->panelSettingDo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelSettingDo.BackgroundImage")));
			   this->panelSettingDo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->panelSettingDo->Controls->Add(this->labelDisSetDo);
			   this->panelSettingDo->Controls->Add(this->labelMidSetDo);
			   this->panelSettingDo->Controls->Add(this->butEditDisDonor);
			   this->panelSettingDo->Controls->Add(this->butEditMidDonor);
			   this->panelSettingDo->Controls->Add(this->labelIdSetDo);
			   this->panelSettingDo->Controls->Add(this->butEditLNameDonor);
			   this->panelSettingDo->Controls->Add(this->butEditEmailDonor);
			   this->panelSettingDo->Controls->Add(this->butEditPasDonor);
			   this->panelSettingDo->Controls->Add(this->labelLnameSetDo);
			   this->panelSettingDo->Controls->Add(this->labelPasSetDo);
			   this->panelSettingDo->Controls->Add(this->labelEmailSetDo);
			   this->panelSettingDo->Controls->Add(this->labelNameSetDO);
			   this->panelSettingDo->Controls->Add(this->butEditNameDonor);
			   this->panelSettingDo->Controls->Add(this->button6);
			   this->panelSettingDo->Controls->Add(this->button2);
			   this->panelSettingDo->Location = System::Drawing::Point(205, 0);
			   this->panelSettingDo->Name = L"panelSettingDo";
			   this->panelSettingDo->Size = System::Drawing::Size(745, 601);
			   this->panelSettingDo->TabIndex = 1;
			   // 
			   // labelDisSetDo
			   // 
			   this->labelDisSetDo->AutoSize = true;
			   this->labelDisSetDo->BackColor = System::Drawing::Color::Transparent;
			   this->labelDisSetDo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			   this->labelDisSetDo->Location = System::Drawing::Point(427, 404);
			   this->labelDisSetDo->Name = L"labelDisSetDo";
			   this->labelDisSetDo->Size = System::Drawing::Size(58, 25);
			   this->labelDisSetDo->TabIndex = 16;
			   this->labelDisSetDo->Text = L"email";
			   this->labelDisSetDo->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   // 
			   // labelMidSetDo
			   // 
			   this->labelMidSetDo->AutoSize = true;
			   this->labelMidSetDo->BackColor = System::Drawing::Color::Transparent;
			   this->labelMidSetDo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			   this->labelMidSetDo->Location = System::Drawing::Point(72, 405);
			   this->labelMidSetDo->Name = L"labelMidSetDo";
			   this->labelMidSetDo->Size = System::Drawing::Size(58, 25);
			   this->labelMidSetDo->TabIndex = 15;
			   this->labelMidSetDo->Text = L"email";
			   this->labelMidSetDo->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   // 
			   // butEditDisDonor
			   // 
			   this->butEditDisDonor->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->butEditDisDonor->BackColor = System::Drawing::Color::Transparent;
			   this->butEditDisDonor->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butEditDisDonor.BackgroundImage")));
			   this->butEditDisDonor->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butEditDisDonor->FlatAppearance->BorderSize = 0;
			   this->butEditDisDonor->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butEditDisDonor->Location = System::Drawing::Point(697, 399);
			   this->butEditDisDonor->Name = L"butEditDisDonor";
			   this->butEditDisDonor->Size = System::Drawing::Size(27, 38);
			   this->butEditDisDonor->TabIndex = 14;
			   this->butEditDisDonor->Text = L" ";
			   this->butEditDisDonor->UseVisualStyleBackColor = false;
			   this->butEditDisDonor->Click += gcnew System::EventHandler(this, &Home::butEditDisDonor_Click);
			   // 
			   // butEditMidDonor
			   // 
			   this->butEditMidDonor->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->butEditMidDonor->BackColor = System::Drawing::Color::Transparent;
			   this->butEditMidDonor->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butEditMidDonor.BackgroundImage")));
			   this->butEditMidDonor->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butEditMidDonor->FlatAppearance->BorderSize = 0;
			   this->butEditMidDonor->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butEditMidDonor->Location = System::Drawing::Point(340, 399);
			   this->butEditMidDonor->Name = L"butEditMidDonor";
			   this->butEditMidDonor->Size = System::Drawing::Size(27, 38);
			   this->butEditMidDonor->TabIndex = 13;
			   this->butEditMidDonor->Text = L" ";
			   this->butEditMidDonor->UseVisualStyleBackColor = false;
			   this->butEditMidDonor->Click += gcnew System::EventHandler(this, &Home::butEditMidDonor_Click);
			   // 
			   // labelIdSetDo
			   // 
			   this->labelIdSetDo->AutoSize = true;
			   this->labelIdSetDo->BackColor = System::Drawing::Color::Transparent;
			   this->labelIdSetDo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelIdSetDo->Location = System::Drawing::Point(71, 154);
			   this->labelIdSetDo->Name = L"labelIdSetDo";
			   this->labelIdSetDo->Size = System::Drawing::Size(27, 25);
			   this->labelIdSetDo->TabIndex = 12;
			   this->labelIdSetDo->Text = L"id";
			   // 
			   // butEditLNameDonor
			   // 
			   this->butEditLNameDonor->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->butEditLNameDonor->BackColor = System::Drawing::Color::Transparent;
			   this->butEditLNameDonor->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butEditLNameDonor.BackgroundImage")));
			   this->butEditLNameDonor->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butEditLNameDonor->FlatAppearance->BorderSize = 0;
			   this->butEditLNameDonor->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butEditLNameDonor->Location = System::Drawing::Point(690, 227);
			   this->butEditLNameDonor->Name = L"butEditLNameDonor";
			   this->butEditLNameDonor->Size = System::Drawing::Size(27, 29);
			   this->butEditLNameDonor->TabIndex = 11;
			   this->butEditLNameDonor->Text = L" ";
			   this->butEditLNameDonor->UseVisualStyleBackColor = false;
			   this->butEditLNameDonor->Click += gcnew System::EventHandler(this, &Home::butEditLNameDonor_Click);
			   // 
			   // butEditEmailDonor
			   // 
			   this->butEditEmailDonor->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->butEditEmailDonor->BackColor = System::Drawing::Color::Transparent;
			   this->butEditEmailDonor->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butEditEmailDonor.BackgroundImage")));
			   this->butEditEmailDonor->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butEditEmailDonor->FlatAppearance->BorderSize = 0;
			   this->butEditEmailDonor->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butEditEmailDonor->Location = System::Drawing::Point(337, 316);
			   this->butEditEmailDonor->Name = L"butEditEmailDonor";
			   this->butEditEmailDonor->Size = System::Drawing::Size(27, 34);
			   this->butEditEmailDonor->TabIndex = 10;
			   this->butEditEmailDonor->Text = L" ";
			   this->butEditEmailDonor->UseVisualStyleBackColor = false;
			   this->butEditEmailDonor->Click += gcnew System::EventHandler(this, &Home::butEditEmailDonor_Click);
			   // 
			   // butEditPasDonor
			   // 
			   this->butEditPasDonor->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->butEditPasDonor->BackColor = System::Drawing::Color::Transparent;
			   this->butEditPasDonor->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butEditPasDonor.BackgroundImage")));
			   this->butEditPasDonor->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butEditPasDonor->FlatAppearance->BorderSize = 0;
			   this->butEditPasDonor->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butEditPasDonor->Location = System::Drawing::Point(695, 312);
			   this->butEditPasDonor->Name = L"butEditPasDonor";
			   this->butEditPasDonor->Size = System::Drawing::Size(27, 38);
			   this->butEditPasDonor->TabIndex = 9;
			   this->butEditPasDonor->Text = L" ";
			   this->butEditPasDonor->UseVisualStyleBackColor = false;
			   this->butEditPasDonor->Click += gcnew System::EventHandler(this, &Home::butEditPasDonor_Click);
			   // 
			   // labelLnameSetDo
			   // 
			   this->labelLnameSetDo->AutoSize = true;
			   this->labelLnameSetDo->BackColor = System::Drawing::Color::Transparent;
			   this->labelLnameSetDo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			   this->labelLnameSetDo->Location = System::Drawing::Point(427, 232);
			   this->labelLnameSetDo->Name = L"labelLnameSetDo";
			   this->labelLnameSetDo->Size = System::Drawing::Size(72, 25);
			   this->labelLnameSetDo->TabIndex = 8;
			   this->labelLnameSetDo->Text = L"Lname";
			   this->labelLnameSetDo->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   // 
			   // labelPasSetDo
			   // 
			   this->labelPasSetDo->AutoSize = true;
			   this->labelPasSetDo->BackColor = System::Drawing::Color::Transparent;
			   this->labelPasSetDo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			   this->labelPasSetDo->Location = System::Drawing::Point(426, 318);
			   this->labelPasSetDo->Name = L"labelPasSetDo";
			   this->labelPasSetDo->Size = System::Drawing::Size(93, 25);
			   this->labelPasSetDo->TabIndex = 7;
			   this->labelPasSetDo->Text = L"passeord";
			   this->labelPasSetDo->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   // 
			   // labelEmailSetDo
			   // 
			   this->labelEmailSetDo->AutoSize = true;
			   this->labelEmailSetDo->BackColor = System::Drawing::Color::Transparent;
			   this->labelEmailSetDo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			   this->labelEmailSetDo->Location = System::Drawing::Point(70, 319);
			   this->labelEmailSetDo->Name = L"labelEmailSetDo";
			   this->labelEmailSetDo->Size = System::Drawing::Size(58, 25);
			   this->labelEmailSetDo->TabIndex = 6;
			   this->labelEmailSetDo->Text = L"email";
			   this->labelEmailSetDo->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   // 
			   // labelNameSetDO
			   // 
			   this->labelNameSetDO->AutoSize = true;
			   this->labelNameSetDO->BackColor = System::Drawing::Color::Transparent;
			   this->labelNameSetDO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			   this->labelNameSetDO->Location = System::Drawing::Point(71, 232);
			   this->labelNameSetDO->Name = L"labelNameSetDO";
			   this->labelNameSetDO->Size = System::Drawing::Size(73, 25);
			   this->labelNameSetDO->TabIndex = 5;
			   this->labelNameSetDO->Text = L"Fname";
			   this->labelNameSetDO->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   // 
			   // butEditNameDonor
			   // 
			   this->butEditNameDonor->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->butEditNameDonor->BackColor = System::Drawing::Color::Transparent;
			   this->butEditNameDonor->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butEditNameDonor.BackgroundImage")));
			   this->butEditNameDonor->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butEditNameDonor->FlatAppearance->BorderSize = 0;
			   this->butEditNameDonor->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butEditNameDonor->Location = System::Drawing::Point(337, 228);
			   this->butEditNameDonor->Name = L"butEditNameDonor";
			   this->butEditNameDonor->Size = System::Drawing::Size(27, 31);
			   this->butEditNameDonor->TabIndex = 4;
			   this->butEditNameDonor->Text = L" ";
			   this->butEditNameDonor->UseVisualStyleBackColor = false;
			   this->butEditNameDonor->Click += gcnew System::EventHandler(this, &Home::button7_Click);
			   // 
			   // button6
			   // 
			   this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->button6->BackColor = System::Drawing::Color::Transparent;
			   this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			   this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->button6->FlatAppearance->BorderSize = 0;
			   this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button6->Location = System::Drawing::Point(129, 538);
			   this->button6->Name = L"button6";
			   this->button6->Size = System::Drawing::Size(58, 55);
			   this->button6->TabIndex = 3;
			   this->button6->UseVisualStyleBackColor = false;
			   this->button6->Click += gcnew System::EventHandler(this, &Home::button6_Click);
			   // 
			   // button2
			   // 
			   this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->button2->BackColor = System::Drawing::Color::Transparent;
			   this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			   this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->button2->FlatAppearance->BorderSize = 0;
			   this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button2->Location = System::Drawing::Point(42, 538);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(64, 55);
			   this->button2->TabIndex = 1;
			   this->button2->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			   this->button2->UseVisualStyleBackColor = false;
			   this->button2->Click += gcnew System::EventHandler(this, &Home::button2_Click_2);
			   // 
			   // panelRequestDo
			   // 
			   this->panelRequestDo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelRequestDo.BackgroundImage")));
			   this->panelRequestDo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->panelRequestDo->Controls->Add(this->dateTimePickerDReqDo);
			   this->panelRequestDo->Controls->Add(this->dateTimePickerMReqDo);
			   this->panelRequestDo->Controls->Add(this->butSendReqDo);
			   this->panelRequestDo->Controls->Add(this->dateTimePickerYReqDo);
			   this->panelRequestDo->Controls->Add(this->textBoxHosReqDo);
			   this->panelRequestDo->Location = System::Drawing::Point(205, 0);
			   this->panelRequestDo->Name = L"panelRequestDo";
			   this->panelRequestDo->Size = System::Drawing::Size(745, 601);
			   this->panelRequestDo->TabIndex = 1;
			   // 
			   // dateTimePickerDReqDo
			   // 
			   this->dateTimePickerDReqDo->CustomFormat = L"dd";
			   this->dateTimePickerDReqDo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->dateTimePickerDReqDo->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			   this->dateTimePickerDReqDo->Location = System::Drawing::Point(208, 309);
			   this->dateTimePickerDReqDo->Name = L"dateTimePickerDReqDo";
			   this->dateTimePickerDReqDo->Size = System::Drawing::Size(69, 26);
			   this->dateTimePickerDReqDo->TabIndex = 16;
			   // 
			   // dateTimePickerMReqDo
			   // 
			   this->dateTimePickerMReqDo->CustomFormat = L"MM";
			   this->dateTimePickerMReqDo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->dateTimePickerMReqDo->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			   this->dateTimePickerMReqDo->Location = System::Drawing::Point(313, 307);
			   this->dateTimePickerMReqDo->Name = L"dateTimePickerMReqDo";
			   this->dateTimePickerMReqDo->Size = System::Drawing::Size(69, 26);
			   this->dateTimePickerMReqDo->TabIndex = 15;
			   // 
			   // butSendReqDo
			   // 
			   this->butSendReqDo->BackColor = System::Drawing::Color::Transparent;
			   this->butSendReqDo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butSendReqDo.BackgroundImage")));
			   this->butSendReqDo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butSendReqDo->FlatAppearance->BorderSize = 0;
			   this->butSendReqDo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butSendReqDo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->butSendReqDo->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->butSendReqDo->Location = System::Drawing::Point(286, 438);
			   this->butSendReqDo->Name = L"butSendReqDo";
			   this->butSendReqDo->Size = System::Drawing::Size(106, 31);
			   this->butSendReqDo->TabIndex = 14;
			   this->butSendReqDo->Text = L"Send";
			   this->butSendReqDo->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			   this->butSendReqDo->UseVisualStyleBackColor = false;
			   this->butSendReqDo->Click += gcnew System::EventHandler(this, &Home::butSendReqDo_Click);
			   // 
			   // dateTimePickerYReqDo
			   // 
			   this->dateTimePickerYReqDo->CustomFormat = L"yyyy";
			   this->dateTimePickerYReqDo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->dateTimePickerYReqDo->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			   this->dateTimePickerYReqDo->Location = System::Drawing::Point(421, 308);
			   this->dateTimePickerYReqDo->Name = L"dateTimePickerYReqDo";
			   this->dateTimePickerYReqDo->Size = System::Drawing::Size(69, 26);
			   this->dateTimePickerYReqDo->TabIndex = 13;
			   // 
			   // textBoxHosReqDo
			   // 
			   this->textBoxHosReqDo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxHosReqDo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->textBoxHosReqDo->Location = System::Drawing::Point(194, 220);
			   this->textBoxHosReqDo->Name = L"textBoxHosReqDo";
			   this->textBoxHosReqDo->Size = System::Drawing::Size(292, 23);
			   this->textBoxHosReqDo->TabIndex = 1;
			   this->textBoxHosReqDo->Text = L"hosptail";
			   // 
			   // panelNavbarDo
			   // 
			   this->panelNavbarDo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left));
			   this->panelNavbarDo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				   static_cast<System::Int32>(static_cast<System::Byte>(242)));
			   this->panelNavbarDo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelNavbarDo.BackgroundImage")));
			   this->panelNavbarDo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->panelNavbarDo->Controls->Add(this->butLogoutDo);
			   this->panelNavbarDo->Controls->Add(this->butSettingDo);
			   this->panelNavbarDo->Controls->Add(this->butReqDo);
			   this->panelNavbarDo->Controls->Add(this->butHomeDo);
			   this->panelNavbarDo->Location = System::Drawing::Point(0, 0);
			   this->panelNavbarDo->Name = L"panelNavbarDo";
			   this->panelNavbarDo->Size = System::Drawing::Size(203, 601);
			   this->panelNavbarDo->TabIndex = 21;
			   // 
			   // butLogoutDo
			   // 
			   this->butLogoutDo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->butLogoutDo->BackColor = System::Drawing::Color::Transparent;
			   this->butLogoutDo->FlatAppearance->BorderSize = 0;
			   this->butLogoutDo->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			   this->butLogoutDo->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				   static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(165)), static_cast<System::Int32>(static_cast<System::Byte>(163)));
			   this->butLogoutDo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butLogoutDo->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			   this->butLogoutDo->Location = System::Drawing::Point(0, 513);
			   this->butLogoutDo->Name = L"butLogoutDo";
			   this->butLogoutDo->Size = System::Drawing::Size(203, 77);
			   this->butLogoutDo->TabIndex = 3;
			   this->butLogoutDo->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			   this->butLogoutDo->UseVisualStyleBackColor = false;
			   this->butLogoutDo->Click += gcnew System::EventHandler(this, &Home::button4_Click);
			   // 
			   // butSettingDo
			   // 
			   this->butSettingDo->BackColor = System::Drawing::Color::Transparent;
			   this->butSettingDo->FlatAppearance->BorderSize = 0;
			   this->butSettingDo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butSettingDo->Font = (gcnew System::Drawing::Font(L"Impact", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->butSettingDo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				   static_cast<System::Int32>(static_cast<System::Byte>(83)));
			   this->butSettingDo->Location = System::Drawing::Point(3, 167);
			   this->butSettingDo->Name = L"butSettingDo";
			   this->butSettingDo->Size = System::Drawing::Size(197, 60);
			   this->butSettingDo->TabIndex = 2;
			   this->butSettingDo->Text = L"Setting";
			   this->butSettingDo->UseVisualStyleBackColor = false;
			   this->butSettingDo->Click += gcnew System::EventHandler(this, &Home::button3_Click_1);
			   // 
			   // butReqDo
			   // 
			   this->butReqDo->BackColor = System::Drawing::Color::Transparent;
			   this->butReqDo->FlatAppearance->BorderSize = 0;
			   this->butReqDo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butReqDo->Font = (gcnew System::Drawing::Font(L"Impact", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->butReqDo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				   static_cast<System::Int32>(static_cast<System::Byte>(83)));
			   this->butReqDo->Location = System::Drawing::Point(3, 89);
			   this->butReqDo->Name = L"butReqDo";
			   this->butReqDo->Size = System::Drawing::Size(197, 60);
			   this->butReqDo->TabIndex = 1;
			   this->butReqDo->Text = L"Request";
			   this->butReqDo->UseVisualStyleBackColor = false;
			   this->butReqDo->Click += gcnew System::EventHandler(this, &Home::button1_Click_2);
			   // 
			   // butHomeDo
			   // 
			   this->butHomeDo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				   static_cast<System::Int32>(static_cast<System::Byte>(83)));
			   this->butHomeDo->FlatAppearance->BorderSize = 0;
			   this->butHomeDo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butHomeDo->Font = (gcnew System::Drawing::Font(L"Impact", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->butHomeDo->ForeColor = System::Drawing::Color::White;
			   this->butHomeDo->Location = System::Drawing::Point(3, 8);
			   this->butHomeDo->Name = L"butHomeDo";
			   this->butHomeDo->Size = System::Drawing::Size(197, 67);
			   this->butHomeDo->TabIndex = 0;
			   this->butHomeDo->Text = L"Home";
			   this->butHomeDo->UseVisualStyleBackColor = false;
			   this->butHomeDo->Click += gcnew System::EventHandler(this, &Home::butHomeDo_Click);
			   // 
			   // panelDelAccoDo
			   // 
			   this->panelDelAccoDo->BackColor = System::Drawing::Color::Transparent;
			   this->panelDelAccoDo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelDelAccoDo.BackgroundImage")));
			   this->panelDelAccoDo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->panelDelAccoDo->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			   this->panelDelAccoDo->Controls->Add(this->butNoDelAccoDo);
			   this->panelDelAccoDo->Controls->Add(this->butYesDelAccoDo);
			   this->panelDelAccoDo->Controls->Add(this->butExitDelAccoPanelDo);
			   this->panelDelAccoDo->Location = System::Drawing::Point(277, 237);
			   this->panelDelAccoDo->Name = L"panelDelAccoDo";
			   this->panelDelAccoDo->Size = System::Drawing::Size(465, 210);
			   this->panelDelAccoDo->TabIndex = 26;
			   // 
			   // butNoDelAccoDo
			   // 
			   this->butNoDelAccoDo->BackColor = System::Drawing::Color::Transparent;
			   this->butNoDelAccoDo->FlatAppearance->BorderSize = 0;
			   this->butNoDelAccoDo->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(111)),
				   static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			   this->butNoDelAccoDo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butNoDelAccoDo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->butNoDelAccoDo->ForeColor = System::Drawing::Color::WhiteSmoke;
			   this->butNoDelAccoDo->Location = System::Drawing::Point(41, 140);
			   this->butNoDelAccoDo->Name = L"butNoDelAccoDo";
			   this->butNoDelAccoDo->Size = System::Drawing::Size(132, 33);
			   this->butNoDelAccoDo->TabIndex = 3;
			   this->butNoDelAccoDo->Text = L"No";
			   this->butNoDelAccoDo->UseVisualStyleBackColor = false;
			   this->butNoDelAccoDo->Click += gcnew System::EventHandler(this, &Home::butNoDelAccoDo_Click);
			   // 
			   // butYesDelAccoDo
			   // 
			   this->butYesDelAccoDo->BackColor = System::Drawing::Color::Transparent;
			   this->butYesDelAccoDo->FlatAppearance->BorderSize = 0;
			   this->butYesDelAccoDo->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(111)),
				   static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			   this->butYesDelAccoDo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butYesDelAccoDo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->butYesDelAccoDo->ForeColor = System::Drawing::Color::WhiteSmoke;
			   this->butYesDelAccoDo->Location = System::Drawing::Point(290, 140);
			   this->butYesDelAccoDo->Name = L"butYesDelAccoDo";
			   this->butYesDelAccoDo->Size = System::Drawing::Size(129, 33);
			   this->butYesDelAccoDo->TabIndex = 2;
			   this->butYesDelAccoDo->Text = L"Yes";
			   this->butYesDelAccoDo->UseVisualStyleBackColor = false;
			   this->butYesDelAccoDo->Click += gcnew System::EventHandler(this, &Home::butYesDelAccoDo_Click);
			   // 
			   // butExitDelAccoPanelDo
			   // 
			   this->butExitDelAccoPanelDo->BackColor = System::Drawing::Color::Transparent;
			   this->butExitDelAccoPanelDo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butExitDelAccoPanelDo.BackgroundImage")));
			   this->butExitDelAccoPanelDo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butExitDelAccoPanelDo->FlatAppearance->BorderSize = 0;
			   this->butExitDelAccoPanelDo->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(111)),
				   static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			   this->butExitDelAccoPanelDo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butExitDelAccoPanelDo->Location = System::Drawing::Point(430, 3);
			   this->butExitDelAccoPanelDo->Name = L"butExitDelAccoPanelDo";
			   this->butExitDelAccoPanelDo->Size = System::Drawing::Size(28, 26);
			   this->butExitDelAccoPanelDo->TabIndex = 0;
			   this->butExitDelAccoPanelDo->Text = L" ";
			   this->butExitDelAccoPanelDo->UseVisualStyleBackColor = false;
			   this->butExitDelAccoPanelDo->Click += gcnew System::EventHandler(this, &Home::butExitDelAccoPanelDo_Click);
			   // 
			   // panelUpdateFname
			   // 
			   this->panelUpdateFname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)),
				   static_cast<System::Int32>(static_cast<System::Byte>(207)), static_cast<System::Int32>(static_cast<System::Byte>(216)));
			   this->panelUpdateFname->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelUpdateFname.BackgroundImage")));
			   this->panelUpdateFname->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->panelUpdateFname->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			   this->panelUpdateFname->Controls->Add(this->butSaveFnameDo);
			   this->panelUpdateFname->Controls->Add(this->textBoxUpdateFname);
			   this->panelUpdateFname->Controls->Add(this->butExittPanelFnameDo);
			   this->panelUpdateFname->Location = System::Drawing::Point(450, 237);
			   this->panelUpdateFname->Name = L"panelUpdateFname";
			   this->panelUpdateFname->Size = System::Drawing::Size(321, 171);
			   this->panelUpdateFname->TabIndex = 5;
			   // 
			   // butSaveFnameDo
			   // 
			   this->butSaveFnameDo->BackColor = System::Drawing::Color::Transparent;
			   this->butSaveFnameDo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butSaveFnameDo.BackgroundImage")));
			   this->butSaveFnameDo->FlatAppearance->BorderSize = 0;
			   this->butSaveFnameDo->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Aqua;
			   this->butSaveFnameDo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butSaveFnameDo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->butSaveFnameDo->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->butSaveFnameDo->Location = System::Drawing::Point(116, 113);
			   this->butSaveFnameDo->Name = L"butSaveFnameDo";
			   this->butSaveFnameDo->Size = System::Drawing::Size(92, 34);
			   this->butSaveFnameDo->TabIndex = 2;
			   this->butSaveFnameDo->Text = L"Save";
			   this->butSaveFnameDo->UseVisualStyleBackColor = false;
			   this->butSaveFnameDo->Click += gcnew System::EventHandler(this, &Home::butSave_Click);
			   // 
			   // textBoxUpdateFname
			   // 
			   this->textBoxUpdateFname->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxUpdateFname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->textBoxUpdateFname->Location = System::Drawing::Point(65, 64);
			   this->textBoxUpdateFname->Name = L"textBoxUpdateFname";
			   this->textBoxUpdateFname->Size = System::Drawing::Size(192, 25);
			   this->textBoxUpdateFname->TabIndex = 1;
			   // 
			   // butExittPanelFnameDo
			   // 
			   this->butExittPanelFnameDo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butExittPanelFnameDo.BackgroundImage")));
			   this->butExittPanelFnameDo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butExittPanelFnameDo->FlatAppearance->BorderSize = 0;
			   this->butExittPanelFnameDo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butExittPanelFnameDo->Location = System::Drawing::Point(266, 15);
			   this->butExittPanelFnameDo->Name = L"butExittPanelFnameDo";
			   this->butExittPanelFnameDo->Size = System::Drawing::Size(37, 39);
			   this->butExittPanelFnameDo->TabIndex = 0;
			   this->butExittPanelFnameDo->Text = L" ";
			   this->butExittPanelFnameDo->UseVisualStyleBackColor = true;
			   this->butExittPanelFnameDo->Click += gcnew System::EventHandler(this, &Home::button8_Click);
			   // 
			   // DonorSingup
			   // 
			   this->DonorSingup->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DonorSingup.BackgroundImage")));
			   this->DonorSingup->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->DonorSingup->Controls->Add(this->textBoxMedRegDo);
			   this->DonorSingup->Controls->Add(this->textBoxDisRegDo);
			   this->DonorSingup->Controls->Add(this->textBoxNameREGDo);
			   this->DonorSingup->Controls->Add(this->textBoxLastnameReDo);
			   this->DonorSingup->Controls->Add(this->textBoxLastDataRegDo);
			   this->DonorSingup->Controls->Add(this->radioButtonFemaleRegDo);
			   this->DonorSingup->Controls->Add(this->radioButtonMaleRegDo);
			   this->DonorSingup->Controls->Add(this->comboBoxBooldTypeSingupDO);
			   this->DonorSingup->Controls->Add(this->textBoxAgeRegDo);
			   this->DonorSingup->Controls->Add(this->textBoxPasRegDo);
			   this->DonorSingup->Controls->Add(this->textBoxMailRegDo);
			   this->DonorSingup->Controls->Add(this->butSingupINRegesterDo);
			   this->DonorSingup->Controls->Add(this->butTologinFromRegister);
			   this->DonorSingup->Controls->Add(this->butBackfromSingupDo);
			   this->DonorSingup->Font = (gcnew System::Drawing::Font(L"Impact", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->DonorSingup->Location = System::Drawing::Point(0, 50);
			   this->DonorSingup->Name = L"DonorSingup";
			   this->DonorSingup->Size = System::Drawing::Size(949, 601);
			   this->DonorSingup->TabIndex = 6;
			   // 
			   // textBoxMedRegDo
			   // 
			   this->textBoxMedRegDo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxMedRegDo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			   this->textBoxMedRegDo->Location = System::Drawing::Point(743, 462);
			   this->textBoxMedRegDo->Name = L"textBoxMedRegDo";
			   this->textBoxMedRegDo->Size = System::Drawing::Size(160, 23);
			   this->textBoxMedRegDo->TabIndex = 15;
			   // 
			   // textBoxDisRegDo
			   // 
			   this->textBoxDisRegDo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxDisRegDo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			   this->textBoxDisRegDo->Location = System::Drawing::Point(524, 463);
			   this->textBoxDisRegDo->Name = L"textBoxDisRegDo";
			   this->textBoxDisRegDo->Size = System::Drawing::Size(176, 23);
			   this->textBoxDisRegDo->TabIndex = 14;
			   this->textBoxDisRegDo->MouseHover += gcnew System::EventHandler(this, &Home::textBoxDisRegDo_MouseHover);
			   // 
			   // textBoxNameREGDo
			   // 
			   this->textBoxNameREGDo->Anchor = System::Windows::Forms::AnchorStyles::None;
			   this->textBoxNameREGDo->BackColor = System::Drawing::Color::White;
			   this->textBoxNameREGDo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxNameREGDo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			   this->textBoxNameREGDo->ForeColor = System::Drawing::SystemColors::InfoText;
			   this->textBoxNameREGDo->Location = System::Drawing::Point(522, 203);
			   this->textBoxNameREGDo->Name = L"textBoxNameREGDo";
			   this->textBoxNameREGDo->Size = System::Drawing::Size(169, 23);
			   this->textBoxNameREGDo->TabIndex = 3;
			   // 
			   // textBoxLastnameReDo
			   // 
			   this->textBoxLastnameReDo->Anchor = System::Windows::Forms::AnchorStyles::None;
			   this->textBoxLastnameReDo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxLastnameReDo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			   this->textBoxLastnameReDo->Location = System::Drawing::Point(743, 203);
			   this->textBoxLastnameReDo->Name = L"textBoxLastnameReDo";
			   this->textBoxLastnameReDo->Size = System::Drawing::Size(173, 23);
			   this->textBoxLastnameReDo->TabIndex = 13;
			   // 
			   // textBoxLastDataRegDo
			   // 
			   this->textBoxLastDataRegDo->CustomFormat = L"dd-MM-yyyy";
			   this->textBoxLastDataRegDo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			   this->textBoxLastDataRegDo->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			   this->textBoxLastDataRegDo->Location = System::Drawing::Point(735, 405);
			   this->textBoxLastDataRegDo->Name = L"textBoxLastDataRegDo";
			   this->textBoxLastDataRegDo->Size = System::Drawing::Size(181, 30);
			   this->textBoxLastDataRegDo->TabIndex = 12;
			   // 
			   // radioButtonFemaleRegDo
			   // 
			   this->radioButtonFemaleRegDo->AutoSize = true;
			   this->radioButtonFemaleRegDo->BackColor = System::Drawing::Color::Transparent;
			   this->radioButtonFemaleRegDo->FlatAppearance->BorderSize = 0;
			   this->radioButtonFemaleRegDo->FlatStyle = System::Windows::Forms::FlatStyle::System;
			   this->radioButtonFemaleRegDo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			   this->radioButtonFemaleRegDo->Location = System::Drawing::Point(517, 394);
			   this->radioButtonFemaleRegDo->Name = L"radioButtonFemaleRegDo";
			   this->radioButtonFemaleRegDo->Size = System::Drawing::Size(107, 30);
			   this->radioButtonFemaleRegDo->TabIndex = 11;
			   this->radioButtonFemaleRegDo->TabStop = true;
			   this->radioButtonFemaleRegDo->Text = L"Female";
			   this->radioButtonFemaleRegDo->UseVisualStyleBackColor = false;
			   this->radioButtonFemaleRegDo->CheckedChanged += gcnew System::EventHandler(this, &Home::radioButtonFemaleRegDo_CheckedChanged);
			   // 
			   // radioButtonMaleRegDo
			   // 
			   this->radioButtonMaleRegDo->AutoSize = true;
			   this->radioButtonMaleRegDo->BackColor = System::Drawing::Color::Transparent;
			   this->radioButtonMaleRegDo->FlatStyle = System::Windows::Forms::FlatStyle::System;
			   this->radioButtonMaleRegDo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			   this->radioButtonMaleRegDo->Location = System::Drawing::Point(630, 393);
			   this->radioButtonMaleRegDo->Name = L"radioButtonMaleRegDo";
			   this->radioButtonMaleRegDo->Size = System::Drawing::Size(85, 30);
			   this->radioButtonMaleRegDo->TabIndex = 10;
			   this->radioButtonMaleRegDo->TabStop = true;
			   this->radioButtonMaleRegDo->Text = L"Male";
			   this->radioButtonMaleRegDo->UseVisualStyleBackColor = false;
			   this->radioButtonMaleRegDo->CheckedChanged += gcnew System::EventHandler(this, &Home::radioButtonMaleRegDo_CheckedChanged);
			   // 
			   // comboBoxBooldTypeSingupDO
			   // 
			   this->comboBoxBooldTypeSingupDO->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->comboBoxBooldTypeSingupDO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			   this->comboBoxBooldTypeSingupDO->FormattingEnabled = true;
			   this->comboBoxBooldTypeSingupDO->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				   L"A", L"A-", L"B", L"B-", L"O",
					   L"O-", L"AB", L"AB-"
			   });
			   this->comboBoxBooldTypeSingupDO->Location = System::Drawing::Point(746, 330);
			   this->comboBoxBooldTypeSingupDO->Name = L"comboBoxBooldTypeSingupDO";
			   this->comboBoxBooldTypeSingupDO->Size = System::Drawing::Size(170, 33);
			   this->comboBoxBooldTypeSingupDO->TabIndex = 8;
			   this->comboBoxBooldTypeSingupDO->Text = L"A";
			   // 
			   // textBoxAgeRegDo
			   // 
			   this->textBoxAgeRegDo->Anchor = System::Windows::Forms::AnchorStyles::None;
			   this->textBoxAgeRegDo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxAgeRegDo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			   this->textBoxAgeRegDo->Location = System::Drawing::Point(524, 335);
			   this->textBoxAgeRegDo->Name = L"textBoxAgeRegDo";
			   this->textBoxAgeRegDo->Size = System::Drawing::Size(177, 23);
			   this->textBoxAgeRegDo->TabIndex = 7;
			   // 
			   // textBoxPasRegDo
			   // 
			   this->textBoxPasRegDo->Anchor = System::Windows::Forms::AnchorStyles::None;
			   this->textBoxPasRegDo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxPasRegDo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			   this->textBoxPasRegDo->Location = System::Drawing::Point(743, 268);
			   this->textBoxPasRegDo->Name = L"textBoxPasRegDo";
			   this->textBoxPasRegDo->PasswordChar = '*';
			   this->textBoxPasRegDo->Size = System::Drawing::Size(173, 23);
			   this->textBoxPasRegDo->TabIndex = 5;
			   this->textBoxPasRegDo->Tag = L"";
			   // 
			   // textBoxMailRegDo
			   // 
			   this->textBoxMailRegDo->Anchor = System::Windows::Forms::AnchorStyles::None;
			   this->textBoxMailRegDo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxMailRegDo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			   this->textBoxMailRegDo->Location = System::Drawing::Point(526, 268);
			   this->textBoxMailRegDo->Name = L"textBoxMailRegDo";
			   this->textBoxMailRegDo->Size = System::Drawing::Size(168, 23);
			   this->textBoxMailRegDo->TabIndex = 4;
			   // 
			   // butSingupINRegesterDo
			   // 
			   this->butSingupINRegesterDo->BackColor = System::Drawing::Color::Transparent;
			   this->butSingupINRegesterDo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butSingupINRegesterDo.BackgroundImage")));
			   this->butSingupINRegesterDo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->butSingupINRegesterDo->FlatAppearance->BorderSize = 0;
			   this->butSingupINRegesterDo->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Aqua;
			   this->butSingupINRegesterDo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butSingupINRegesterDo->Font = (gcnew System::Drawing::Font(L"Impact", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->butSingupINRegesterDo->ForeColor = System::Drawing::Color::WhiteSmoke;
			   this->butSingupINRegesterDo->Location = System::Drawing::Point(736, 538);
			   this->butSingupINRegesterDo->Name = L"butSingupINRegesterDo";
			   this->butSingupINRegesterDo->Size = System::Drawing::Size(125, 45);
			   this->butSingupINRegesterDo->TabIndex = 2;
			   this->butSingupINRegesterDo->Text = L"Register";
			   this->butSingupINRegesterDo->UseVisualStyleBackColor = false;
			   this->butSingupINRegesterDo->Click += gcnew System::EventHandler(this, &Home::butSingupINRegesterDo_Click);
			   // 
			   // butTologinFromRegister
			   // 
			   this->butTologinFromRegister->BackColor = System::Drawing::Color::Transparent;
			   this->butTologinFromRegister->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butTologinFromRegister.BackgroundImage")));
			   this->butTologinFromRegister->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->butTologinFromRegister->FlatAppearance->BorderSize = 0;
			   this->butTologinFromRegister->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Aqua;
			   this->butTologinFromRegister->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butTologinFromRegister->Font = (gcnew System::Drawing::Font(L"Impact", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->butTologinFromRegister->ForeColor = System::Drawing::Color::WhiteSmoke;
			   this->butTologinFromRegister->Location = System::Drawing::Point(560, 538);
			   this->butTologinFromRegister->Name = L"butTologinFromRegister";
			   this->butTologinFromRegister->Size = System::Drawing::Size(125, 45);
			   this->butTologinFromRegister->TabIndex = 1;
			   this->butTologinFromRegister->Text = L"Login";
			   this->butTologinFromRegister->UseVisualStyleBackColor = false;
			   this->butTologinFromRegister->Click += gcnew System::EventHandler(this, &Home::butTologinFromRegister_Click);
			   // 
			   // butBackfromSingupDo
			   // 
			   this->butBackfromSingupDo->BackColor = System::Drawing::Color::Transparent;
			   this->butBackfromSingupDo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butBackfromSingupDo.BackgroundImage")));
			   this->butBackfromSingupDo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butBackfromSingupDo->FlatAppearance->BorderSize = 0;
			   this->butBackfromSingupDo->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			   this->butBackfromSingupDo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butBackfromSingupDo->Location = System::Drawing::Point(12, 20);
			   this->butBackfromSingupDo->Name = L"butBackfromSingupDo";
			   this->butBackfromSingupDo->Size = System::Drawing::Size(41, 52);
			   this->butBackfromSingupDo->TabIndex = 0;
			   this->butBackfromSingupDo->UseVisualStyleBackColor = false;
			   this->butBackfromSingupDo->Click += gcnew System::EventHandler(this, &Home::butBackfromSingupDo_Click);
			   // 
			   // main
			   // 
			   this->main->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->main->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"main.BackgroundImage")));
			   this->main->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->main->Controls->Add(this->donoer);
			   this->main->Controls->Add(this->recipient);
			   this->main->Controls->Add(this->admin);
			   this->main->Location = System::Drawing::Point(0, 50);
			   this->main->Name = L"main";
			   this->main->Size = System::Drawing::Size(950, 601);
			   this->main->TabIndex = 1;
			   // 
			   // donoer
			   // 
			   this->donoer->Anchor = System::Windows::Forms::AnchorStyles::Left;
			   this->donoer->BackColor = System::Drawing::Color::Transparent;
			   this->donoer->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"donoer.BackgroundImage")));
			   this->donoer->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->donoer->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->donoer->FlatAppearance->BorderSize = 0;
			   this->donoer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->donoer->Location = System::Drawing::Point(75, 229);
			   this->donoer->Margin = System::Windows::Forms::Padding(8, 20, 50, 3);
			   this->donoer->Name = L"donoer";
			   this->donoer->Size = System::Drawing::Size(196, 149);
			   this->donoer->TabIndex = 1;
			   this->donoer->UseVisualStyleBackColor = false;
			   this->donoer->Click += gcnew System::EventHandler(this, &Home::donoer_Click_1);
			   this->donoer->MouseHover += gcnew System::EventHandler(this, &Home::donoer_MouseHover);
			   // 
			   // recipient
			   // 
			   this->recipient->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->recipient->BackColor = System::Drawing::Color::Transparent;
			   this->recipient->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"recipient.BackgroundImage")));
			   this->recipient->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->recipient->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->recipient->FlatAppearance->BorderSize = 0;
			   this->recipient->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->recipient->Location = System::Drawing::Point(89, 415);
			   this->recipient->Margin = System::Windows::Forms::Padding(10, 20, 3, 3);
			   this->recipient->Name = L"recipient";
			   this->recipient->Size = System::Drawing::Size(182, 143);
			   this->recipient->TabIndex = 2;
			   this->recipient->UseVisualStyleBackColor = false;
			   this->recipient->Click += gcnew System::EventHandler(this, &Home::recipient_Click);
			   this->recipient->MouseHover += gcnew System::EventHandler(this, &Home::recipient_MouseHover);
			   // 
			   // admin
			   // 
			   this->admin->AutoSize = true;
			   this->admin->BackColor = System::Drawing::Color::Transparent;
			   this->admin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"admin.BackgroundImage")));
			   this->admin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->admin->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->admin->FlatAppearance->BorderSize = 0;
			   this->admin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->admin->Location = System::Drawing::Point(75, 50);
			   this->admin->Margin = System::Windows::Forms::Padding(40, 20, 50, 3);
			   this->admin->Name = L"admin";
			   this->admin->Size = System::Drawing::Size(181, 153);
			   this->admin->TabIndex = 3;
			   this->admin->UseVisualStyleBackColor = false;
			   this->admin->Click += gcnew System::EventHandler(this, &Home::admin_Click_1);
			   this->admin->MouseHover += gcnew System::EventHandler(this, &Home::admin_MouseHover);
			   // 
			   // panelLoginRe
			   // 
			   this->panelLoginRe->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->panelLoginRe->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelLoginRe.BackgroundImage")));
			   this->panelLoginRe->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->panelLoginRe->Controls->Add(this->butSingupFormLoginRe);
			   this->panelLoginRe->Controls->Add(this->butLoginRe);
			   this->panelLoginRe->Controls->Add(this->textBoxPasLoginRe);
			   this->panelLoginRe->Controls->Add(this->textBoxEmailLoginRe);
			   this->panelLoginRe->Controls->Add(this->butBackfromRe);
			   this->panelLoginRe->Location = System::Drawing::Point(0, 51);
			   this->panelLoginRe->Name = L"panelLoginRe";
			   this->panelLoginRe->Size = System::Drawing::Size(950, 600);
			   this->panelLoginRe->TabIndex = 4;
			   // 
			   // butSingupFormLoginRe
			   // 
			   this->butSingupFormLoginRe->BackColor = System::Drawing::Color::Transparent;
			   this->butSingupFormLoginRe->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butSingupFormLoginRe.BackgroundImage")));
			   this->butSingupFormLoginRe->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butSingupFormLoginRe->FlatAppearance->BorderSize = 0;
			   this->butSingupFormLoginRe->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Aqua;
			   this->butSingupFormLoginRe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butSingupFormLoginRe->Font = (gcnew System::Drawing::Font(L"Impact", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->butSingupFormLoginRe->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->butSingupFormLoginRe->Location = System::Drawing::Point(309, 319);
			   this->butSingupFormLoginRe->Name = L"butSingupFormLoginRe";
			   this->butSingupFormLoginRe->Size = System::Drawing::Size(171, 49);
			   this->butSingupFormLoginRe->TabIndex = 4;
			   this->butSingupFormLoginRe->Text = L"Singup";
			   this->butSingupFormLoginRe->UseVisualStyleBackColor = false;
			   this->butSingupFormLoginRe->Click += gcnew System::EventHandler(this, &Home::butSingupFormLoginRe_Click);
			   // 
			   // butLoginRe
			   // 
			   this->butLoginRe->BackColor = System::Drawing::Color::Transparent;
			   this->butLoginRe->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butLoginRe.BackgroundImage")));
			   this->butLoginRe->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butLoginRe->FlatAppearance->BorderSize = 0;
			   this->butLoginRe->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Aqua;
			   this->butLoginRe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butLoginRe->Font = (gcnew System::Drawing::Font(L"Impact", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->butLoginRe->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->butLoginRe->Location = System::Drawing::Point(105, 318);
			   this->butLoginRe->Name = L"butLoginRe";
			   this->butLoginRe->Size = System::Drawing::Size(166, 49);
			   this->butLoginRe->TabIndex = 3;
			   this->butLoginRe->Text = L"Login";
			   this->butLoginRe->UseVisualStyleBackColor = false;
			   this->butLoginRe->Click += gcnew System::EventHandler(this, &Home::butLoginRe_Click);
			   // 
			   // textBoxPasLoginRe
			   // 
			   this->textBoxPasLoginRe->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxPasLoginRe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			   this->textBoxPasLoginRe->Location = System::Drawing::Point(124, 265);
			   this->textBoxPasLoginRe->Name = L"textBoxPasLoginRe";
			   this->textBoxPasLoginRe->Size = System::Drawing::Size(335, 23);
			   this->textBoxPasLoginRe->TabIndex = 2;
			   this->textBoxPasLoginRe->UseSystemPasswordChar = true;
			   // 
			   // textBoxEmailLoginRe
			   // 
			   this->textBoxEmailLoginRe->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxEmailLoginRe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			   this->textBoxEmailLoginRe->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->textBoxEmailLoginRe->Location = System::Drawing::Point(117, 173);
			   this->textBoxEmailLoginRe->Name = L"textBoxEmailLoginRe";
			   this->textBoxEmailLoginRe->Size = System::Drawing::Size(342, 23);
			   this->textBoxEmailLoginRe->TabIndex = 1;
			   // 
			   // butBackfromRe
			   // 
			   this->butBackfromRe->BackColor = System::Drawing::Color::Transparent;
			   this->butBackfromRe->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butBackfromRe.BackgroundImage")));
			   this->butBackfromRe->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butBackfromRe->FlatAppearance->BorderSize = 0;
			   this->butBackfromRe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butBackfromRe->Location = System::Drawing::Point(8, 19);
			   this->butBackfromRe->Name = L"butBackfromRe";
			   this->butBackfromRe->Size = System::Drawing::Size(59, 50);
			   this->butBackfromRe->TabIndex = 0;
			   this->butBackfromRe->UseVisualStyleBackColor = false;
			   this->butBackfromRe->Click += gcnew System::EventHandler(this, &Home::butBackfromRe_Click);
			   // 
			   // panelSinguRe
			   // 
			   this->panelSinguRe->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->panelSinguRe->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelSinguRe.BackgroundImage")));
			   this->panelSinguRe->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->panelSinguRe->Controls->Add(this->butBackFromRegRe);
			   this->panelSinguRe->Controls->Add(this->butSingupRefromReg);
			   this->panelSinguRe->Controls->Add(this->butLoginReFromReg);
			   this->panelSinguRe->Controls->Add(this->textBoxDocSingupRe);
			   this->panelSinguRe->Controls->Add(this->radioButFemaleRe);
			   this->panelSinguRe->Controls->Add(this->radioButMaleRe);
			   this->panelSinguRe->Controls->Add(this->comboBoxBloodSingupRe);
			   this->panelSinguRe->Controls->Add(this->textBoxLnameSingupRe);
			   this->panelSinguRe->Controls->Add(this->textBoxMailSingupRe);
			   this->panelSinguRe->Controls->Add(this->textBoxPasSingupRe);
			   this->panelSinguRe->Controls->Add(this->textBoxAgeSingupRe);
			   this->panelSinguRe->Controls->Add(this->textBoxHosSingupRe);
			   this->panelSinguRe->Controls->Add(this->textBoxFnameSingupRe);
			   this->panelSinguRe->Location = System::Drawing::Point(0, 52);
			   this->panelSinguRe->Name = L"panelSinguRe";
			   this->panelSinguRe->Size = System::Drawing::Size(950, 599);
			   this->panelSinguRe->TabIndex = 5;
			   // 
			   // butBackFromRegRe
			   // 
			   this->butBackFromRegRe->BackColor = System::Drawing::Color::Transparent;
			   this->butBackFromRegRe->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butBackFromRegRe.BackgroundImage")));
			   this->butBackFromRegRe->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butBackFromRegRe->FlatAppearance->BorderSize = 0;
			   this->butBackFromRegRe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butBackFromRegRe->Location = System::Drawing::Point(12, 17);
			   this->butBackFromRegRe->Name = L"butBackFromRegRe";
			   this->butBackFromRegRe->Size = System::Drawing::Size(74, 64);
			   this->butBackFromRegRe->TabIndex = 17;
			   this->butBackFromRegRe->UseVisualStyleBackColor = false;
			   this->butBackFromRegRe->Click += gcnew System::EventHandler(this, &Home::button7_Click_1);
			   // 
			   // butSingupRefromReg
			   // 
			   this->butSingupRefromReg->BackColor = System::Drawing::Color::Transparent;
			   this->butSingupRefromReg->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butSingupRefromReg.BackgroundImage")));
			   this->butSingupRefromReg->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->butSingupRefromReg->FlatAppearance->BorderSize = 0;
			   this->butSingupRefromReg->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Aqua;
			   this->butSingupRefromReg->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butSingupRefromReg->Font = (gcnew System::Drawing::Font(L"Impact", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->butSingupRefromReg->ForeColor = System::Drawing::Color::WhiteSmoke;
			   this->butSingupRefromReg->Location = System::Drawing::Point(52, 536);
			   this->butSingupRefromReg->Name = L"butSingupRefromReg";
			   this->butSingupRefromReg->Size = System::Drawing::Size(147, 49);
			   this->butSingupRefromReg->TabIndex = 16;
			   this->butSingupRefromReg->Text = L"Register";
			   this->butSingupRefromReg->UseVisualStyleBackColor = false;
			   this->butSingupRefromReg->Click += gcnew System::EventHandler(this, &Home::butSingupRefromReg_Click);
			   // 
			   // butLoginReFromReg
			   // 
			   this->butLoginReFromReg->BackColor = System::Drawing::Color::Transparent;
			   this->butLoginReFromReg->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butLoginReFromReg.BackgroundImage")));
			   this->butLoginReFromReg->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->butLoginReFromReg->FlatAppearance->BorderSize = 0;
			   this->butLoginReFromReg->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Aqua;
			   this->butLoginReFromReg->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butLoginReFromReg->Font = (gcnew System::Drawing::Font(L"Impact", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->butLoginReFromReg->ForeColor = System::Drawing::Color::WhiteSmoke;
			   this->butLoginReFromReg->Location = System::Drawing::Point(289, 534);
			   this->butLoginReFromReg->Name = L"butLoginReFromReg";
			   this->butLoginReFromReg->Size = System::Drawing::Size(145, 49);
			   this->butLoginReFromReg->TabIndex = 15;
			   this->butLoginReFromReg->Text = L"Login";
			   this->butLoginReFromReg->UseVisualStyleBackColor = false;
			   this->butLoginReFromReg->Click += gcnew System::EventHandler(this, &Home::butLoginReFromReg_Click);
			   // 
			   // textBoxDocSingupRe
			   // 
			   this->textBoxDocSingupRe->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxDocSingupRe->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->textBoxDocSingupRe->Location = System::Drawing::Point(266, 403);
			   this->textBoxDocSingupRe->Name = L"textBoxDocSingupRe";
			   this->textBoxDocSingupRe->Size = System::Drawing::Size(195, 20);
			   this->textBoxDocSingupRe->TabIndex = 14;
			   // 
			   // radioButFemaleRe
			   // 
			   this->radioButFemaleRe->AutoSize = true;
			   this->radioButFemaleRe->BackColor = System::Drawing::Color::Transparent;
			   this->radioButFemaleRe->FlatAppearance->BorderSize = 0;
			   this->radioButFemaleRe->FlatStyle = System::Windows::Forms::FlatStyle::System;
			   this->radioButFemaleRe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			   this->radioButFemaleRe->Location = System::Drawing::Point(262, 326);
			   this->radioButFemaleRe->Name = L"radioButFemaleRe";
			   this->radioButFemaleRe->Size = System::Drawing::Size(94, 25);
			   this->radioButFemaleRe->TabIndex = 13;
			   this->radioButFemaleRe->TabStop = true;
			   this->radioButFemaleRe->Text = L"Female";
			   this->radioButFemaleRe->UseVisualStyleBackColor = false;
			   this->radioButFemaleRe->CheckedChanged += gcnew System::EventHandler(this, &Home::radioButFemaleRe_CheckedChanged);
			   // 
			   // radioButMaleRe
			   // 
			   this->radioButMaleRe->AutoSize = true;
			   this->radioButMaleRe->BackColor = System::Drawing::Color::Transparent;
			   this->radioButMaleRe->FlatStyle = System::Windows::Forms::FlatStyle::System;
			   this->radioButMaleRe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			   this->radioButMaleRe->Location = System::Drawing::Point(378, 326);
			   this->radioButMaleRe->Name = L"radioButMaleRe";
			   this->radioButMaleRe->Size = System::Drawing::Size(75, 25);
			   this->radioButMaleRe->TabIndex = 12;
			   this->radioButMaleRe->TabStop = true;
			   this->radioButMaleRe->Text = L"Male";
			   this->radioButMaleRe->UseVisualStyleBackColor = false;
			   this->radioButMaleRe->CheckedChanged += gcnew System::EventHandler(this, &Home::radioButMaleRe_CheckedChanged);
			   // 
			   // comboBoxBloodSingupRe
			   // 
			   this->comboBoxBloodSingupRe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->comboBoxBloodSingupRe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			   this->comboBoxBloodSingupRe->FormattingEnabled = true;
			   this->comboBoxBloodSingupRe->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				   L"A", L"A-", L"B", L"B-", L"O", L"O-",
					   L"AB", L"AB-"
			   });
			   this->comboBoxBloodSingupRe->Location = System::Drawing::Point(36, 482);
			   this->comboBoxBloodSingupRe->Name = L"comboBoxBloodSingupRe";
			   this->comboBoxBloodSingupRe->Size = System::Drawing::Size(241, 28);
			   this->comboBoxBloodSingupRe->TabIndex = 9;
			   this->comboBoxBloodSingupRe->Text = L"A";
			   // 
			   // textBoxLnameSingupRe
			   // 
			   this->textBoxLnameSingupRe->BackColor = System::Drawing::SystemColors::Window;
			   this->textBoxLnameSingupRe->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxLnameSingupRe->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->textBoxLnameSingupRe->Location = System::Drawing::Point(272, 160);
			   this->textBoxLnameSingupRe->Name = L"textBoxLnameSingupRe";
			   this->textBoxLnameSingupRe->Size = System::Drawing::Size(162, 20);
			   this->textBoxLnameSingupRe->TabIndex = 6;
			   // 
			   // textBoxMailSingupRe
			   // 
			   this->textBoxMailSingupRe->BackColor = System::Drawing::SystemColors::Window;
			   this->textBoxMailSingupRe->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxMailSingupRe->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->textBoxMailSingupRe->Location = System::Drawing::Point(44, 241);
			   this->textBoxMailSingupRe->Name = L"textBoxMailSingupRe";
			   this->textBoxMailSingupRe->Size = System::Drawing::Size(170, 20);
			   this->textBoxMailSingupRe->TabIndex = 5;
			   // 
			   // textBoxPasSingupRe
			   // 
			   this->textBoxPasSingupRe->BackColor = System::Drawing::SystemColors::Window;
			   this->textBoxPasSingupRe->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxPasSingupRe->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->textBoxPasSingupRe->Location = System::Drawing::Point(266, 237);
			   this->textBoxPasSingupRe->Name = L"textBoxPasSingupRe";
			   this->textBoxPasSingupRe->Size = System::Drawing::Size(175, 20);
			   this->textBoxPasSingupRe->TabIndex = 4;
			   this->textBoxPasSingupRe->UseSystemPasswordChar = true;
			   // 
			   // textBoxAgeSingupRe
			   // 
			   this->textBoxAgeSingupRe->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxAgeSingupRe->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->textBoxAgeSingupRe->Location = System::Drawing::Point(44, 321);
			   this->textBoxAgeSingupRe->Name = L"textBoxAgeSingupRe";
			   this->textBoxAgeSingupRe->Size = System::Drawing::Size(170, 20);
			   this->textBoxAgeSingupRe->TabIndex = 3;
			   // 
			   // textBoxHosSingupRe
			   // 
			   this->textBoxHosSingupRe->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxHosSingupRe->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->textBoxHosSingupRe->Location = System::Drawing::Point(44, 403);
			   this->textBoxHosSingupRe->Name = L"textBoxHosSingupRe";
			   this->textBoxHosSingupRe->Size = System::Drawing::Size(170, 20);
			   this->textBoxHosSingupRe->TabIndex = 2;
			   // 
			   // textBoxFnameSingupRe
			   // 
			   this->textBoxFnameSingupRe->BackColor = System::Drawing::SystemColors::Window;
			   this->textBoxFnameSingupRe->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxFnameSingupRe->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->textBoxFnameSingupRe->Location = System::Drawing::Point(41, 157);
			   this->textBoxFnameSingupRe->Name = L"textBoxFnameSingupRe";
			   this->textBoxFnameSingupRe->Size = System::Drawing::Size(173, 20);
			   this->textBoxFnameSingupRe->TabIndex = 0;
			   // 
			   // panelLoginAdmin
			   // 
			   this->panelLoginAdmin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelLoginAdmin.BackgroundImage")));
			   this->panelLoginAdmin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->panelLoginAdmin->Controls->Add(this->butBackFromAdminLogin);
			   this->panelLoginAdmin->Controls->Add(this->butLoginAdmin);
			   this->panelLoginAdmin->Controls->Add(this->textBoxPassAdmin);
			   this->panelLoginAdmin->Controls->Add(this->textBoxUsernameAdmin);
			   this->panelLoginAdmin->Location = System::Drawing::Point(0, 51);
			   this->panelLoginAdmin->Name = L"panelLoginAdmin";
			   this->panelLoginAdmin->Size = System::Drawing::Size(950, 600);
			   this->panelLoginAdmin->TabIndex = 5;
			   // 
			   // butBackFromAdminLogin
			   // 
			   this->butBackFromAdminLogin->BackColor = System::Drawing::Color::Transparent;
			   this->butBackFromAdminLogin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butBackFromAdminLogin.BackgroundImage")));
			   this->butBackFromAdminLogin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butBackFromAdminLogin->FlatAppearance->BorderSize = 0;
			   this->butBackFromAdminLogin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butBackFromAdminLogin->Location = System::Drawing::Point(12, 14);
			   this->butBackFromAdminLogin->Name = L"butBackFromAdminLogin";
			   this->butBackFromAdminLogin->Size = System::Drawing::Size(48, 50);
			   this->butBackFromAdminLogin->TabIndex = 18;
			   this->butBackFromAdminLogin->UseVisualStyleBackColor = false;
			   this->butBackFromAdminLogin->Click += gcnew System::EventHandler(this, &Home::butBackFromAdminLogin_Click);
			   // 
			   // butLoginAdmin
			   // 
			   this->butLoginAdmin->BackColor = System::Drawing::Color::Transparent;
			   this->butLoginAdmin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butLoginAdmin.BackgroundImage")));
			   this->butLoginAdmin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butLoginAdmin->FlatAppearance->BorderSize = 0;
			   this->butLoginAdmin->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Aqua;
			   this->butLoginAdmin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butLoginAdmin->Font = (gcnew System::Drawing::Font(L"Impact", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->butLoginAdmin->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->butLoginAdmin->Location = System::Drawing::Point(161, 453);
			   this->butLoginAdmin->Name = L"butLoginAdmin";
			   this->butLoginAdmin->Size = System::Drawing::Size(161, 50);
			   this->butLoginAdmin->TabIndex = 6;
			   this->butLoginAdmin->Text = L"Login";
			   this->butLoginAdmin->UseVisualStyleBackColor = false;
			   this->butLoginAdmin->Click += gcnew System::EventHandler(this, &Home::butLoginAdmin_Click);
			   // 
			   // textBoxPassAdmin
			   // 
			   this->textBoxPassAdmin->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxPassAdmin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			   this->textBoxPassAdmin->Location = System::Drawing::Point(91, 372);
			   this->textBoxPassAdmin->Name = L"textBoxPassAdmin";
			   this->textBoxPassAdmin->Size = System::Drawing::Size(317, 23);
			   this->textBoxPassAdmin->TabIndex = 5;
			   this->textBoxPassAdmin->UseSystemPasswordChar = true;
			   // 
			   // textBoxUsernameAdmin
			   // 
			   this->textBoxUsernameAdmin->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxUsernameAdmin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			   this->textBoxUsernameAdmin->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->textBoxUsernameAdmin->Location = System::Drawing::Point(89, 298);
			   this->textBoxUsernameAdmin->Name = L"textBoxUsernameAdmin";
			   this->textBoxUsernameAdmin->Size = System::Drawing::Size(317, 23);
			   this->textBoxUsernameAdmin->TabIndex = 4;
			   // 
			   // panelMassegSingup
			   // 
			   this->panelMassegSingup->BackColor = System::Drawing::Color::Transparent;
			   this->panelMassegSingup->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelMassegSingup.BackgroundImage")));
			   this->panelMassegSingup->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->panelMassegSingup->Controls->Add(this->butLogMasseg);
			   this->panelMassegSingup->Location = System::Drawing::Point(294, 200);
			   this->panelMassegSingup->Name = L"panelMassegSingup";
			   this->panelMassegSingup->Size = System::Drawing::Size(357, 359);
			   this->panelMassegSingup->TabIndex = 14;
			   // 
			   // butLogMasseg
			   // 
			   this->butLogMasseg->FlatAppearance->BorderSize = 0;
			   this->butLogMasseg->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			   this->butLogMasseg->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			   this->butLogMasseg->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butLogMasseg->Location = System::Drawing::Point(119, 309);
			   this->butLogMasseg->Name = L"butLogMasseg";
			   this->butLogMasseg->Size = System::Drawing::Size(116, 32);
			   this->butLogMasseg->TabIndex = 0;
			   this->butLogMasseg->UseVisualStyleBackColor = true;
			   this->butLogMasseg->Click += gcnew System::EventHandler(this, &Home::butLogMasseg_Click);
			   // 
			   // panelRoomRe
			   // 
			   this->panelRoomRe->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->panelRoomRe->Controls->Add(this->panelHomeRe);
			   this->panelRoomRe->Controls->Add(this->panelSettingRe);
			   this->panelRoomRe->Controls->Add(this->panelMenuBarRe);
			   this->panelRoomRe->Controls->Add(this->panelDisplayBlood);
			   this->panelRoomRe->Controls->Add(this->panelSerchRe);
			   this->panelRoomRe->Controls->Add(this->panelRequestRe);
			   this->panelRoomRe->Controls->Add(this->panelDelAcconetRe);
			   this->panelRoomRe->Controls->Add(this->panelUpdateDateRe);
			   this->panelRoomRe->Location = System::Drawing::Point(0, 50);
			   this->panelRoomRe->Name = L"panelRoomRe";
			   this->panelRoomRe->Size = System::Drawing::Size(950, 598);
			   this->panelRoomRe->TabIndex = 15;
			   // 
			   // panelHomeRe
			   // 
			   this->panelHomeRe->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->panelHomeRe->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelHomeRe.BackgroundImage")));
			   this->panelHomeRe->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->panelHomeRe->Controls->Add(this->labelHosnameHomRe);
			   this->panelHomeRe->Controls->Add(this->labelBloodeHomRe);
			   this->panelHomeRe->Controls->Add(this->labelDocnameHomRe);
			   this->panelHomeRe->Controls->Add(this->labelUsernameHomRe);
			   this->panelHomeRe->Location = System::Drawing::Point(205, 3);
			   this->panelHomeRe->Name = L"panelHomeRe";
			   this->panelHomeRe->Size = System::Drawing::Size(745, 603);
			   this->panelHomeRe->TabIndex = 22;
			   // 
			   // labelHosnameHomRe
			   // 
			   this->labelHosnameHomRe->AutoSize = true;
			   this->labelHosnameHomRe->BackColor = System::Drawing::Color::Transparent;
			   this->labelHosnameHomRe->Font = (gcnew System::Drawing::Font(L"Eras Medium ITC", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelHosnameHomRe->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->labelHosnameHomRe->Location = System::Drawing::Point(56, 320);
			   this->labelHosnameHomRe->Name = L"labelHosnameHomRe";
			   this->labelHosnameHomRe->Size = System::Drawing::Size(73, 27);
			   this->labelHosnameHomRe->TabIndex = 3;
			   this->labelHosnameHomRe->Text = L"name";
			   // 
			   // labelBloodeHomRe
			   // 
			   this->labelBloodeHomRe->AutoSize = true;
			   this->labelBloodeHomRe->BackColor = System::Drawing::Color::Transparent;
			   this->labelBloodeHomRe->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelBloodeHomRe->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->labelBloodeHomRe->Location = System::Drawing::Point(626, 307);
			   this->labelBloodeHomRe->Name = L"labelBloodeHomRe";
			   this->labelBloodeHomRe->Size = System::Drawing::Size(48, 27);
			   this->labelBloodeHomRe->TabIndex = 2;
			   this->labelBloodeHomRe->Text = L"AB-";
			   // 
			   // labelDocnameHomRe
			   // 
			   this->labelDocnameHomRe->AutoSize = true;
			   this->labelDocnameHomRe->BackColor = System::Drawing::Color::Transparent;
			   this->labelDocnameHomRe->Font = (gcnew System::Drawing::Font(L"Eras Medium ITC", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelDocnameHomRe->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->labelDocnameHomRe->Location = System::Drawing::Point(59, 401);
			   this->labelDocnameHomRe->Name = L"labelDocnameHomRe";
			   this->labelDocnameHomRe->Size = System::Drawing::Size(51, 27);
			   this->labelDocnameHomRe->TabIndex = 1;
			   this->labelDocnameHomRe->Text = L"hos";
			   // 
			   // labelUsernameHomRe
			   // 
			   this->labelUsernameHomRe->AutoSize = true;
			   this->labelUsernameHomRe->BackColor = System::Drawing::Color::Transparent;
			   this->labelUsernameHomRe->Font = (gcnew System::Drawing::Font(L"Eras Medium ITC", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelUsernameHomRe->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->labelUsernameHomRe->Location = System::Drawing::Point(55, 226);
			   this->labelUsernameHomRe->Name = L"labelUsernameHomRe";
			   this->labelUsernameHomRe->Size = System::Drawing::Size(73, 27);
			   this->labelUsernameHomRe->TabIndex = 0;
			   this->labelUsernameHomRe->Text = L"name";
			   // 
			   // panelSettingRe
			   // 
			   this->panelSettingRe->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->panelSettingRe->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelSettingRe.BackgroundImage")));
			   this->panelSettingRe->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->panelSettingRe->Controls->Add(this->labelDocSetRe);
			   this->panelSettingRe->Controls->Add(this->labelHosSetRe);
			   this->panelSettingRe->Controls->Add(this->butEditLnameRe);
			   this->panelSettingRe->Controls->Add(this->butEditFnameRe);
			   this->panelSettingRe->Controls->Add(this->labelIdSetRe);
			   this->panelSettingRe->Controls->Add(this->butEditPasRe);
			   this->panelSettingRe->Controls->Add(this->butEditDocRe);
			   this->panelSettingRe->Controls->Add(this->butEditHosRe);
			   this->panelSettingRe->Controls->Add(this->labelLnameSetRe);
			   this->panelSettingRe->Controls->Add(this->labelPasSetRe);
			   this->panelSettingRe->Controls->Add(this->labelEmailSetRe);
			   this->panelSettingRe->Controls->Add(this->labelFnameSetRe);
			   this->panelSettingRe->Controls->Add(this->butEditMailRe);
			   this->panelSettingRe->Controls->Add(this->butUpdataRe);
			   this->panelSettingRe->Controls->Add(this->butDelAccRe);
			   this->panelSettingRe->Location = System::Drawing::Point(203, 2);
			   this->panelSettingRe->Name = L"panelSettingRe";
			   this->panelSettingRe->Size = System::Drawing::Size(747, 599);
			   this->panelSettingRe->TabIndex = 1;
			   // 
			   // labelDocSetRe
			   // 
			   this->labelDocSetRe->AutoSize = true;
			   this->labelDocSetRe->BackColor = System::Drawing::Color::Transparent;
			   this->labelDocSetRe->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelDocSetRe->Location = System::Drawing::Point(63, 385);
			   this->labelDocSetRe->Name = L"labelDocSetRe";
			   this->labelDocSetRe->Size = System::Drawing::Size(0, 27);
			   this->labelDocSetRe->TabIndex = 16;
			   // 
			   // labelHosSetRe
			   // 
			   this->labelHosSetRe->AutoSize = true;
			   this->labelHosSetRe->BackColor = System::Drawing::Color::Transparent;
			   this->labelHosSetRe->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelHosSetRe->Location = System::Drawing::Point(64, 474);
			   this->labelHosSetRe->Name = L"labelHosSetRe";
			   this->labelHosSetRe->Size = System::Drawing::Size(0, 27);
			   this->labelHosSetRe->TabIndex = 15;
			   // 
			   // butEditLnameRe
			   // 
			   this->butEditLnameRe->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->butEditLnameRe->BackColor = System::Drawing::Color::Transparent;
			   this->butEditLnameRe->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butEditLnameRe.BackgroundImage")));
			   this->butEditLnameRe->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butEditLnameRe->FlatAppearance->BorderSize = 0;
			   this->butEditLnameRe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butEditLnameRe->Location = System::Drawing::Point(634, 146);
			   this->butEditLnameRe->Name = L"butEditLnameRe";
			   this->butEditLnameRe->Size = System::Drawing::Size(27, 38);
			   this->butEditLnameRe->TabIndex = 14;
			   this->butEditLnameRe->Text = L" ";
			   this->butEditLnameRe->UseVisualStyleBackColor = false;
			   this->butEditLnameRe->Click += gcnew System::EventHandler(this, &Home::butEditLnameRe_Click);
			   // 
			   // butEditFnameRe
			   // 
			   this->butEditFnameRe->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->butEditFnameRe->BackColor = System::Drawing::Color::Transparent;
			   this->butEditFnameRe->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butEditFnameRe.BackgroundImage")));
			   this->butEditFnameRe->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butEditFnameRe->FlatAppearance->BorderSize = 0;
			   this->butEditFnameRe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butEditFnameRe->Location = System::Drawing::Point(365, 143);
			   this->butEditFnameRe->Name = L"butEditFnameRe";
			   this->butEditFnameRe->Size = System::Drawing::Size(27, 38);
			   this->butEditFnameRe->TabIndex = 13;
			   this->butEditFnameRe->Text = L" ";
			   this->butEditFnameRe->UseVisualStyleBackColor = false;
			   this->butEditFnameRe->Click += gcnew System::EventHandler(this, &Home::butEditFnameRe_Click);
			   // 
			   // labelIdSetRe
			   // 
			   this->labelIdSetRe->AutoSize = true;
			   this->labelIdSetRe->BackColor = System::Drawing::Color::Transparent;
			   this->labelIdSetRe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelIdSetRe->Location = System::Drawing::Point(71, 154);
			   this->labelIdSetRe->Name = L"labelIdSetRe";
			   this->labelIdSetRe->Size = System::Drawing::Size(0, 25);
			   this->labelIdSetRe->TabIndex = 12;
			   // 
			   // butEditPasRe
			   // 
			   this->butEditPasRe->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->butEditPasRe->BackColor = System::Drawing::Color::Transparent;
			   this->butEditPasRe->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butEditPasRe.BackgroundImage")));
			   this->butEditPasRe->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butEditPasRe->FlatAppearance->BorderSize = 0;
			   this->butEditPasRe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butEditPasRe->Location = System::Drawing::Point(365, 310);
			   this->butEditPasRe->Name = L"butEditPasRe";
			   this->butEditPasRe->Size = System::Drawing::Size(27, 29);
			   this->butEditPasRe->TabIndex = 11;
			   this->butEditPasRe->Text = L" ";
			   this->butEditPasRe->UseVisualStyleBackColor = false;
			   this->butEditPasRe->Click += gcnew System::EventHandler(this, &Home::butEditPasRe_Click);
			   // 
			   // butEditDocRe
			   // 
			   this->butEditDocRe->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->butEditDocRe->BackColor = System::Drawing::Color::Transparent;
			   this->butEditDocRe->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butEditDocRe.BackgroundImage")));
			   this->butEditDocRe->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butEditDocRe->FlatAppearance->BorderSize = 0;
			   this->butEditDocRe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butEditDocRe->Location = System::Drawing::Point(365, 382);
			   this->butEditDocRe->Name = L"butEditDocRe";
			   this->butEditDocRe->Size = System::Drawing::Size(27, 34);
			   this->butEditDocRe->TabIndex = 10;
			   this->butEditDocRe->Text = L" ";
			   this->butEditDocRe->UseVisualStyleBackColor = false;
			   this->butEditDocRe->Click += gcnew System::EventHandler(this, &Home::butEditDocRe_Click);
			   // 
			   // butEditHosRe
			   // 
			   this->butEditHosRe->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->butEditHosRe->BackColor = System::Drawing::Color::Transparent;
			   this->butEditHosRe->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butEditHosRe.BackgroundImage")));
			   this->butEditHosRe->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butEditHosRe->FlatAppearance->BorderSize = 0;
			   this->butEditHosRe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butEditHosRe->Location = System::Drawing::Point(366, 467);
			   this->butEditHosRe->Name = L"butEditHosRe";
			   this->butEditHosRe->Size = System::Drawing::Size(27, 38);
			   this->butEditHosRe->TabIndex = 9;
			   this->butEditHosRe->Text = L" ";
			   this->butEditHosRe->UseVisualStyleBackColor = false;
			   this->butEditHosRe->Click += gcnew System::EventHandler(this, &Home::butEditHosRe_Click);
			   // 
			   // labelLnameSetRe
			   // 
			   this->labelLnameSetRe->AutoSize = true;
			   this->labelLnameSetRe->BackColor = System::Drawing::Color::Transparent;
			   this->labelLnameSetRe->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelLnameSetRe->Location = System::Drawing::Point(435, 151);
			   this->labelLnameSetRe->Name = L"labelLnameSetRe";
			   this->labelLnameSetRe->Size = System::Drawing::Size(0, 27);
			   this->labelLnameSetRe->TabIndex = 8;
			   // 
			   // labelPasSetRe
			   // 
			   this->labelPasSetRe->AutoSize = true;
			   this->labelPasSetRe->BackColor = System::Drawing::Color::Transparent;
			   this->labelPasSetRe->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelPasSetRe->Location = System::Drawing::Point(63, 309);
			   this->labelPasSetRe->Name = L"labelPasSetRe";
			   this->labelPasSetRe->Size = System::Drawing::Size(0, 27);
			   this->labelPasSetRe->TabIndex = 7;
			   // 
			   // labelEmailSetRe
			   // 
			   this->labelEmailSetRe->AutoSize = true;
			   this->labelEmailSetRe->BackColor = System::Drawing::Color::Transparent;
			   this->labelEmailSetRe->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelEmailSetRe->Location = System::Drawing::Point(63, 229);
			   this->labelEmailSetRe->Name = L"labelEmailSetRe";
			   this->labelEmailSetRe->Size = System::Drawing::Size(0, 27);
			   this->labelEmailSetRe->TabIndex = 6;
			   // 
			   // labelFnameSetRe
			   // 
			   this->labelFnameSetRe->AutoSize = true;
			   this->labelFnameSetRe->BackColor = System::Drawing::Color::Transparent;
			   this->labelFnameSetRe->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelFnameSetRe->Location = System::Drawing::Point(179, 149);
			   this->labelFnameSetRe->Name = L"labelFnameSetRe";
			   this->labelFnameSetRe->Size = System::Drawing::Size(0, 27);
			   this->labelFnameSetRe->TabIndex = 5;
			   // 
			   // butEditMailRe
			   // 
			   this->butEditMailRe->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->butEditMailRe->BackColor = System::Drawing::Color::Transparent;
			   this->butEditMailRe->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butEditMailRe.BackgroundImage")));
			   this->butEditMailRe->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butEditMailRe->FlatAppearance->BorderSize = 0;
			   this->butEditMailRe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butEditMailRe->Location = System::Drawing::Point(367, 226);
			   this->butEditMailRe->Name = L"butEditMailRe";
			   this->butEditMailRe->Size = System::Drawing::Size(27, 31);
			   this->butEditMailRe->TabIndex = 4;
			   this->butEditMailRe->Text = L" ";
			   this->butEditMailRe->UseVisualStyleBackColor = false;
			   this->butEditMailRe->Click += gcnew System::EventHandler(this, &Home::butEditMailRe_Click);
			   // 
			   // butUpdataRe
			   // 
			   this->butUpdataRe->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->butUpdataRe->BackColor = System::Drawing::Color::Transparent;
			   this->butUpdataRe->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butUpdataRe.BackgroundImage")));
			   this->butUpdataRe->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butUpdataRe->FlatAppearance->BorderSize = 0;
			   this->butUpdataRe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butUpdataRe->Location = System::Drawing::Point(86, 540);
			   this->butUpdataRe->Name = L"butUpdataRe";
			   this->butUpdataRe->Size = System::Drawing::Size(58, 51);
			   this->butUpdataRe->TabIndex = 3;
			   this->butUpdataRe->UseVisualStyleBackColor = false;
			   this->butUpdataRe->Click += gcnew System::EventHandler(this, &Home::butUpdataRe_Click);
			   // 
			   // butDelAccRe
			   // 
			   this->butDelAccRe->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->butDelAccRe->BackColor = System::Drawing::Color::Transparent;
			   this->butDelAccRe->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butDelAccRe.BackgroundImage")));
			   this->butDelAccRe->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butDelAccRe->FlatAppearance->BorderSize = 0;
			   this->butDelAccRe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butDelAccRe->Location = System::Drawing::Point(17, 538);
			   this->butDelAccRe->Name = L"butDelAccRe";
			   this->butDelAccRe->Size = System::Drawing::Size(51, 55);
			   this->butDelAccRe->TabIndex = 1;
			   this->butDelAccRe->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			   this->butDelAccRe->UseVisualStyleBackColor = false;
			   this->butDelAccRe->Click += gcnew System::EventHandler(this, &Home::butDelAccRe_Click);
			   // 
			   // panelMenuBarRe
			   // 
			   this->panelMenuBarRe->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left));
			   this->panelMenuBarRe->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				   static_cast<System::Int32>(static_cast<System::Byte>(242)));
			   this->panelMenuBarRe->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelMenuBarRe.BackgroundImage")));
			   this->panelMenuBarRe->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->panelMenuBarRe->Controls->Add(this->butDisplayBloodRe);
			   this->panelMenuBarRe->Controls->Add(this->butLogOutRe);
			   this->panelMenuBarRe->Controls->Add(this->butSerchRe);
			   this->panelMenuBarRe->Controls->Add(this->butSettingRe);
			   this->panelMenuBarRe->Controls->Add(this->butReqRe);
			   this->panelMenuBarRe->Controls->Add(this->butHomeRe);
			   this->panelMenuBarRe->Location = System::Drawing::Point(0, 0);
			   this->panelMenuBarRe->Name = L"panelMenuBarRe";
			   this->panelMenuBarRe->Size = System::Drawing::Size(203, 601);
			   this->panelMenuBarRe->TabIndex = 21;
			   // 
			   // butDisplayBloodRe
			   // 
			   this->butDisplayBloodRe->BackColor = System::Drawing::Color::Transparent;
			   this->butDisplayBloodRe->FlatAppearance->BorderSize = 0;
			   this->butDisplayBloodRe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butDisplayBloodRe->Font = (gcnew System::Drawing::Font(L"Impact", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->butDisplayBloodRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				   static_cast<System::Int32>(static_cast<System::Byte>(85)));
			   this->butDisplayBloodRe->Location = System::Drawing::Point(8, 246);
			   this->butDisplayBloodRe->Name = L"butDisplayBloodRe";
			   this->butDisplayBloodRe->Size = System::Drawing::Size(191, 63);
			   this->butDisplayBloodRe->TabIndex = 5;
			   this->butDisplayBloodRe->Text = L"Display";
			   this->butDisplayBloodRe->UseVisualStyleBackColor = false;
			   this->butDisplayBloodRe->Click += gcnew System::EventHandler(this, &Home::butDisplayBloodRe_Click);
			   // 
			   // butLogOutRe
			   // 
			   this->butLogOutRe->BackColor = System::Drawing::Color::Transparent;
			   this->butLogOutRe->FlatAppearance->BorderSize = 0;
			   this->butLogOutRe->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				   static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(165)), static_cast<System::Int32>(static_cast<System::Byte>(163)));
			   this->butLogOutRe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butLogOutRe->ForeColor = System::Drawing::Color::Transparent;
			   this->butLogOutRe->Location = System::Drawing::Point(12, 515);
			   this->butLogOutRe->Name = L"butLogOutRe";
			   this->butLogOutRe->Size = System::Drawing::Size(176, 73);
			   this->butLogOutRe->TabIndex = 4;
			   this->butLogOutRe->UseVisualStyleBackColor = false;
			   this->butLogOutRe->Click += gcnew System::EventHandler(this, &Home::button1_Click_1);
			   // 
			   // butSerchRe
			   // 
			   this->butSerchRe->BackColor = System::Drawing::Color::Transparent;
			   this->butSerchRe->FlatAppearance->BorderSize = 0;
			   this->butSerchRe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butSerchRe->Font = (gcnew System::Drawing::Font(L"Impact", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->butSerchRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				   static_cast<System::Int32>(static_cast<System::Byte>(85)));
			   this->butSerchRe->Location = System::Drawing::Point(8, 167);
			   this->butSerchRe->Name = L"butSerchRe";
			   this->butSerchRe->Size = System::Drawing::Size(191, 60);
			   this->butSerchRe->TabIndex = 3;
			   this->butSerchRe->Text = L"Search";
			   this->butSerchRe->UseVisualStyleBackColor = false;
			   this->butSerchRe->Click += gcnew System::EventHandler(this, &Home::butSerchRe_Click);
			   // 
			   // butSettingRe
			   // 
			   this->butSettingRe->BackColor = System::Drawing::Color::Transparent;
			   this->butSettingRe->FlatAppearance->BorderSize = 0;
			   this->butSettingRe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butSettingRe->Font = (gcnew System::Drawing::Font(L"Impact", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->butSettingRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				   static_cast<System::Int32>(static_cast<System::Byte>(85)));
			   this->butSettingRe->Location = System::Drawing::Point(8, 326);
			   this->butSettingRe->Name = L"butSettingRe";
			   this->butSettingRe->Size = System::Drawing::Size(191, 63);
			   this->butSettingRe->TabIndex = 2;
			   this->butSettingRe->Text = L"Setting";
			   this->butSettingRe->UseVisualStyleBackColor = false;
			   this->butSettingRe->Click += gcnew System::EventHandler(this, &Home::butSettingRe_Click);
			   // 
			   // butReqRe
			   // 
			   this->butReqRe->BackColor = System::Drawing::Color::Transparent;
			   this->butReqRe->FlatAppearance->BorderSize = 0;
			   this->butReqRe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butReqRe->Font = (gcnew System::Drawing::Font(L"Impact", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->butReqRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				   static_cast<System::Int32>(static_cast<System::Byte>(85)));
			   this->butReqRe->Location = System::Drawing::Point(0, 89);
			   this->butReqRe->Name = L"butReqRe";
			   this->butReqRe->Size = System::Drawing::Size(200, 60);
			   this->butReqRe->TabIndex = 1;
			   this->butReqRe->Text = L"Request";
			   this->butReqRe->UseVisualStyleBackColor = false;
			   this->butReqRe->Click += gcnew System::EventHandler(this, &Home::butReqRe_Click);
			   // 
			   // butHomeRe
			   // 
			   this->butHomeRe->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				   static_cast<System::Int32>(static_cast<System::Byte>(85)));
			   this->butHomeRe->FlatAppearance->BorderSize = 0;
			   this->butHomeRe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butHomeRe->Font = (gcnew System::Drawing::Font(L"Impact", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->butHomeRe->ForeColor = System::Drawing::Color::White;
			   this->butHomeRe->Location = System::Drawing::Point(8, 11);
			   this->butHomeRe->Name = L"butHomeRe";
			   this->butHomeRe->Size = System::Drawing::Size(189, 64);
			   this->butHomeRe->TabIndex = 0;
			   this->butHomeRe->Text = L"Home";
			   this->butHomeRe->UseVisualStyleBackColor = false;
			   this->butHomeRe->Click += gcnew System::EventHandler(this, &Home::butHomeRe_Click);
			   // 
			   // panelDisplayBlood
			   // 
			   this->panelDisplayBlood->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->panelDisplayBlood->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelDisplayBlood.BackgroundImage")));
			   this->panelDisplayBlood->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->panelDisplayBlood->Controls->Add(this->dataGridView3);
			   this->panelDisplayBlood->Controls->Add(this->dataGridView1);
			   this->panelDisplayBlood->Controls->Add(this->butDisplayBlood);
			   this->panelDisplayBlood->Location = System::Drawing::Point(203, 2);
			   this->panelDisplayBlood->Name = L"panelDisplayBlood";
			   this->panelDisplayBlood->Size = System::Drawing::Size(747, 599);
			   this->panelDisplayBlood->TabIndex = 26;
			   // 
			   // dataGridView3
			   // 
			   this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				   this->Column15,
					   this->Column16
			   });
			   this->dataGridView3->Location = System::Drawing::Point(413, 114);
			   this->dataGridView3->Name = L"dataGridView3";
			   this->dataGridView3->RowHeadersWidth = 51;
			   this->dataGridView3->RowTemplate->Height = 24;
			   this->dataGridView3->Size = System::Drawing::Size(311, 328);
			   this->dataGridView3->TabIndex = 6;
			   // 
			   // Column15
			   // 
			   this->Column15->HeaderText = L"Blood Type";
			   this->Column15->MinimumWidth = 6;
			   this->Column15->Name = L"Column15";
			   this->Column15->Width = 125;
			   // 
			   // Column16
			   // 
			   this->Column16->HeaderText = L"Quntity";
			   this->Column16->MinimumWidth = 6;
			   this->Column16->Name = L"Column16";
			   this->Column16->Width = 125;
			   // 
			   // dataGridView1
			   // 
			   this->dataGridView1->AllowUserToOrderColumns = true;
			   this->dataGridView1->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			   this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				   this->Column1,
					   this->Column4, this->Column2, this->Column3, this->Column5
			   });
			   this->dataGridView1->Location = System::Drawing::Point(0, 87);
			   this->dataGridView1->Name = L"dataGridView1";
			   this->dataGridView1->RowHeadersWidth = 51;
			   this->dataGridView1->RowTemplate->Height = 24;
			   this->dataGridView1->Size = System::Drawing::Size(384, 420);
			   this->dataGridView1->TabIndex = 5;
			   // 
			   // Column1
			   // 
			   this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			   this->Column1->Frozen = true;
			   this->Column1->HeaderText = L"Index";
			   this->Column1->MinimumWidth = 6;
			   this->Column1->Name = L"Column1";
			   this->Column1->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			   this->Column1->Width = 47;
			   // 
			   // Column4
			   // 
			   this->Column4->HeaderText = L"Id";
			   this->Column4->MinimumWidth = 6;
			   this->Column4->Name = L"Column4";
			   this->Column4->Width = 40;
			   // 
			   // Column2
			   // 
			   this->Column2->HeaderText = L"Blood Type";
			   this->Column2->MinimumWidth = 6;
			   this->Column2->Name = L"Column2";
			   this->Column2->Width = 40;
			   // 
			   // Column3
			   // 
			   this->Column3->HeaderText = L"Received Data";
			   this->Column3->MinimumWidth = 6;
			   this->Column3->Name = L"Column3";
			   this->Column3->Width = 50;
			   // 
			   // Column5
			   // 
			   this->Column5->HeaderText = L" Expiry dates";
			   this->Column5->MinimumWidth = 6;
			   this->Column5->Name = L"Column5";
			   this->Column5->Width = 50;
			   // 
			   // butDisplayBlood
			   // 
			   this->butDisplayBlood->Location = System::Drawing::Point(315, 519);
			   this->butDisplayBlood->Name = L"butDisplayBlood";
			   this->butDisplayBlood->Size = System::Drawing::Size(112, 55);
			   this->butDisplayBlood->TabIndex = 4;
			   this->butDisplayBlood->Text = L"Display";
			   this->butDisplayBlood->UseVisualStyleBackColor = true;
			   this->butDisplayBlood->Click += gcnew System::EventHandler(this, &Home::butDisplayBlood_Click);
			   // 
			   // panelSerchRe
			   // 
			   this->panelSerchRe->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->panelSerchRe->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelSerchRe.BackgroundImage")));
			   this->panelSerchRe->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->panelSerchRe->Controls->Add(this->labelExDataBlood);
			   this->panelSerchRe->Controls->Add(this->labelABab);
			   this->panelSerchRe->Controls->Add(this->labelAB);
			   this->panelSerchRe->Controls->Add(this->labelOo);
			   this->panelSerchRe->Controls->Add(this->labelO);
			   this->panelSerchRe->Controls->Add(this->labelBb);
			   this->panelSerchRe->Controls->Add(this->labelB);
			   this->panelSerchRe->Controls->Add(this->labelAa);
			   this->panelSerchRe->Controls->Add(this->labelA);
			   this->panelSerchRe->Controls->Add(this->butSerRe);
			   this->panelSerchRe->Controls->Add(this->dateTimePickerSerRe);
			   this->panelSerchRe->Location = System::Drawing::Point(203, 2);
			   this->panelSerchRe->Name = L"panelSerchRe";
			   this->panelSerchRe->Size = System::Drawing::Size(747, 599);
			   this->panelSerchRe->TabIndex = 24;
			   // 
			   // labelExDataBlood
			   // 
			   this->labelExDataBlood->AutoSize = true;
			   this->labelExDataBlood->BackColor = System::Drawing::Color::Transparent;
			   this->labelExDataBlood->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelExDataBlood->Location = System::Drawing::Point(205, 513);
			   this->labelExDataBlood->Name = L"labelExDataBlood";
			   this->labelExDataBlood->Size = System::Drawing::Size(0, 32);
			   this->labelExDataBlood->TabIndex = 24;
			   // 
			   // labelABab
			   // 
			   this->labelABab->AutoSize = true;
			   this->labelABab->BackColor = System::Drawing::Color::Transparent;
			   this->labelABab->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelABab->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->labelABab->Location = System::Drawing::Point(636, 365);
			   this->labelABab->Name = L"labelABab";
			   this->labelABab->Size = System::Drawing::Size(26, 30);
			   this->labelABab->TabIndex = 23;
			   this->labelABab->Text = L"0";
			   // 
			   // labelAB
			   // 
			   this->labelAB->AutoSize = true;
			   this->labelAB->BackColor = System::Drawing::Color::Transparent;
			   this->labelAB->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelAB->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->labelAB->Location = System::Drawing::Point(480, 261);
			   this->labelAB->Name = L"labelAB";
			   this->labelAB->Size = System::Drawing::Size(26, 30);
			   this->labelAB->TabIndex = 22;
			   this->labelAB->Text = L"0";
			   // 
			   // labelOo
			   // 
			   this->labelOo->AutoSize = true;
			   this->labelOo->BackColor = System::Drawing::Color::Transparent;
			   this->labelOo->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelOo->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->labelOo->Location = System::Drawing::Point(636, 262);
			   this->labelOo->Name = L"labelOo";
			   this->labelOo->Size = System::Drawing::Size(26, 30);
			   this->labelOo->TabIndex = 21;
			   this->labelOo->Text = L"0";
			   // 
			   // labelO
			   // 
			   this->labelO->AutoSize = true;
			   this->labelO->BackColor = System::Drawing::Color::Transparent;
			   this->labelO->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelO->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->labelO->Location = System::Drawing::Point(480, 363);
			   this->labelO->Name = L"labelO";
			   this->labelO->Size = System::Drawing::Size(26, 30);
			   this->labelO->TabIndex = 20;
			   this->labelO->Text = L"0";
			   // 
			   // labelBb
			   // 
			   this->labelBb->AutoSize = true;
			   this->labelBb->BackColor = System::Drawing::Color::Transparent;
			   this->labelBb->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelBb->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->labelBb->Location = System::Drawing::Point(323, 260);
			   this->labelBb->Name = L"labelBb";
			   this->labelBb->Size = System::Drawing::Size(26, 30);
			   this->labelBb->TabIndex = 19;
			   this->labelBb->Text = L"0";
			   // 
			   // labelB
			   // 
			   this->labelB->AutoSize = true;
			   this->labelB->BackColor = System::Drawing::Color::Transparent;
			   this->labelB->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelB->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->labelB->Location = System::Drawing::Point(323, 363);
			   this->labelB->Name = L"labelB";
			   this->labelB->Size = System::Drawing::Size(26, 30);
			   this->labelB->TabIndex = 18;
			   this->labelB->Text = L"0";
			   // 
			   // labelAa
			   // 
			   this->labelAa->AutoSize = true;
			   this->labelAa->BackColor = System::Drawing::Color::Transparent;
			   this->labelAa->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelAa->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->labelAa->Location = System::Drawing::Point(156, 262);
			   this->labelAa->Name = L"labelAa";
			   this->labelAa->Size = System::Drawing::Size(26, 30);
			   this->labelAa->TabIndex = 17;
			   this->labelAa->Text = L"0";
			   // 
			   // labelA
			   // 
			   this->labelA->AutoSize = true;
			   this->labelA->BackColor = System::Drawing::Color::Transparent;
			   this->labelA->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelA->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->labelA->Location = System::Drawing::Point(156, 363);
			   this->labelA->Name = L"labelA";
			   this->labelA->Size = System::Drawing::Size(26, 30);
			   this->labelA->TabIndex = 16;
			   this->labelA->Text = L"0";
			   // 
			   // butSerRe
			   // 
			   this->butSerRe->BackColor = System::Drawing::Color::Transparent;
			   this->butSerRe->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butSerRe.BackgroundImage")));
			   this->butSerRe->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butSerRe->FlatAppearance->BorderSize = 0;
			   this->butSerRe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butSerRe->Font = (gcnew System::Drawing::Font(L"Impact", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->butSerRe->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->butSerRe->Location = System::Drawing::Point(316, 178);
			   this->butSerRe->Name = L"butSerRe";
			   this->butSerRe->Size = System::Drawing::Size(132, 41);
			   this->butSerRe->TabIndex = 15;
			   this->butSerRe->Text = L"Serch";
			   this->butSerRe->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			   this->butSerRe->UseVisualStyleBackColor = false;
			   this->butSerRe->Click += gcnew System::EventHandler(this, &Home::butSerRe_Click);
			   // 
			   // dateTimePickerSerRe
			   // 
			   this->dateTimePickerSerRe->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->dateTimePickerSerRe->CustomFormat = L"dd-MM-yyyy";
			   this->dateTimePickerSerRe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->dateTimePickerSerRe->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			   this->dateTimePickerSerRe->Location = System::Drawing::Point(237, 135);
			   this->dateTimePickerSerRe->Name = L"dateTimePickerSerRe";
			   this->dateTimePickerSerRe->Size = System::Drawing::Size(290, 30);
			   this->dateTimePickerSerRe->TabIndex = 13;
			   // 
			   // panelRequestRe
			   // 
			   this->panelRequestRe->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelRequestRe.BackgroundImage")));
			   this->panelRequestRe->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->panelRequestRe->Controls->Add(this->comboBoxReqBloodeRe);
			   this->panelRequestRe->Controls->Add(this->textBoxQuantityReqRe);
			   this->panelRequestRe->Controls->Add(this->textBoxReqHosRe);
			   this->panelRequestRe->Controls->Add(this->button8);
			   this->panelRequestRe->Location = System::Drawing::Point(205, 4);
			   this->panelRequestRe->Name = L"panelRequestRe";
			   this->panelRequestRe->Size = System::Drawing::Size(745, 597);
			   this->panelRequestRe->TabIndex = 1;
			   // 
			   // comboBoxReqBloodeRe
			   // 
			   this->comboBoxReqBloodeRe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->comboBoxReqBloodeRe->FormattingEnabled = true;
			   this->comboBoxReqBloodeRe->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				   L"A", L"A-", L"B", L"B-", L"O", L"O-",
					   L"AB", L"AB-"
			   });
			   this->comboBoxReqBloodeRe->Location = System::Drawing::Point(194, 218);
			   this->comboBoxReqBloodeRe->Name = L"comboBoxReqBloodeRe";
			   this->comboBoxReqBloodeRe->Size = System::Drawing::Size(296, 24);
			   this->comboBoxReqBloodeRe->TabIndex = 18;
			   this->comboBoxReqBloodeRe->Text = L"A";
			   // 
			   // textBoxQuantityReqRe
			   // 
			   this->textBoxQuantityReqRe->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxQuantityReqRe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->textBoxQuantityReqRe->Location = System::Drawing::Point(194, 402);
			   this->textBoxQuantityReqRe->Name = L"textBoxQuantityReqRe";
			   this->textBoxQuantityReqRe->Size = System::Drawing::Size(296, 23);
			   this->textBoxQuantityReqRe->TabIndex = 17;
			   // 
			   // textBoxReqHosRe
			   // 
			   this->textBoxReqHosRe->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxReqHosRe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->textBoxReqHosRe->Location = System::Drawing::Point(197, 310);
			   this->textBoxReqHosRe->Name = L"textBoxReqHosRe";
			   this->textBoxReqHosRe->Size = System::Drawing::Size(293, 23);
			   this->textBoxReqHosRe->TabIndex = 16;
			   // 
			   // button8
			   // 
			   this->button8->BackColor = System::Drawing::Color::Transparent;
			   this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
			   this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->button8->FlatAppearance->BorderSize = 0;
			   this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button8->Font = (gcnew System::Drawing::Font(L"Impact", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->button8->Location = System::Drawing::Point(303, 478);
			   this->button8->Name = L"button8";
			   this->button8->Size = System::Drawing::Size(132, 41);
			   this->button8->TabIndex = 14;
			   this->button8->Text = L"Send";
			   this->button8->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			   this->button8->UseVisualStyleBackColor = false;
			   this->button8->Click += gcnew System::EventHandler(this, &Home::button8_Click_1);
			   // 
			   // panelDelAcconetRe
			   // 
			   this->panelDelAcconetRe->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)),
				   static_cast<System::Int32>(static_cast<System::Byte>(207)), static_cast<System::Int32>(static_cast<System::Byte>(216)));
			   this->panelDelAcconetRe->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelDelAcconetRe.BackgroundImage")));
			   this->panelDelAcconetRe->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->panelDelAcconetRe->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			   this->panelDelAcconetRe->Controls->Add(this->butNoDelAccoRe);
			   this->panelDelAcconetRe->Controls->Add(this->butYesDelAccoRe);
			   this->panelDelAcconetRe->Controls->Add(this->butExitDelPanel);
			   this->panelDelAcconetRe->Location = System::Drawing::Point(315, 224);
			   this->panelDelAcconetRe->Name = L"panelDelAcconetRe";
			   this->panelDelAcconetRe->Size = System::Drawing::Size(456, 208);
			   this->panelDelAcconetRe->TabIndex = 25;
			   // 
			   // butNoDelAccoRe
			   // 
			   this->butNoDelAccoRe->BackColor = System::Drawing::Color::Transparent;
			   this->butNoDelAccoRe->FlatAppearance->BorderSize = 0;
			   this->butNoDelAccoRe->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(111)),
				   static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			   this->butNoDelAccoRe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butNoDelAccoRe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->butNoDelAccoRe->ForeColor = System::Drawing::Color::WhiteSmoke;
			   this->butNoDelAccoRe->Location = System::Drawing::Point(42, 138);
			   this->butNoDelAccoRe->Name = L"butNoDelAccoRe";
			   this->butNoDelAccoRe->Size = System::Drawing::Size(132, 33);
			   this->butNoDelAccoRe->TabIndex = 3;
			   this->butNoDelAccoRe->Text = L"No";
			   this->butNoDelAccoRe->UseVisualStyleBackColor = false;
			   this->butNoDelAccoRe->Click += gcnew System::EventHandler(this, &Home::butNoDelAccoRe_Click);
			   // 
			   // butYesDelAccoRe
			   // 
			   this->butYesDelAccoRe->BackColor = System::Drawing::Color::Transparent;
			   this->butYesDelAccoRe->FlatAppearance->BorderSize = 0;
			   this->butYesDelAccoRe->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(111)),
				   static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			   this->butYesDelAccoRe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butYesDelAccoRe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->butYesDelAccoRe->ForeColor = System::Drawing::Color::WhiteSmoke;
			   this->butYesDelAccoRe->Location = System::Drawing::Point(280, 137);
			   this->butYesDelAccoRe->Name = L"butYesDelAccoRe";
			   this->butYesDelAccoRe->Size = System::Drawing::Size(130, 33);
			   this->butYesDelAccoRe->TabIndex = 2;
			   this->butYesDelAccoRe->Text = L"Yes";
			   this->butYesDelAccoRe->UseVisualStyleBackColor = false;
			   this->butYesDelAccoRe->Click += gcnew System::EventHandler(this, &Home::butYesDelAccoRe_Click);
			   // 
			   // butExitDelPanel
			   // 
			   this->butExitDelPanel->BackColor = System::Drawing::Color::Transparent;
			   this->butExitDelPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butExitDelPanel.BackgroundImage")));
			   this->butExitDelPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butExitDelPanel->FlatAppearance->BorderSize = 0;
			   this->butExitDelPanel->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(111)),
				   static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			   this->butExitDelPanel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butExitDelPanel->Location = System::Drawing::Point(419, -1);
			   this->butExitDelPanel->Name = L"butExitDelPanel";
			   this->butExitDelPanel->Size = System::Drawing::Size(28, 30);
			   this->butExitDelPanel->TabIndex = 0;
			   this->butExitDelPanel->Text = L" ";
			   this->butExitDelPanel->UseVisualStyleBackColor = false;
			   this->butExitDelPanel->Click += gcnew System::EventHandler(this, &Home::butExitDelPanel_Click);
			   // 
			   // panelUpdateDateRe
			   // 
			   this->panelUpdateDateRe->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)),
				   static_cast<System::Int32>(static_cast<System::Byte>(207)), static_cast<System::Int32>(static_cast<System::Byte>(216)));
			   this->panelUpdateDateRe->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelUpdateDateRe.BackgroundImage")));
			   this->panelUpdateDateRe->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->panelUpdateDateRe->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			   this->panelUpdateDateRe->Controls->Add(this->butSeveUpdateRe);
			   this->panelUpdateDateRe->Controls->Add(this->textBoxUpdateDateRe);
			   this->panelUpdateDateRe->Controls->Add(this->butExitPanelUpRe);
			   this->panelUpdateDateRe->Location = System::Drawing::Point(450, 237);
			   this->panelUpdateDateRe->Name = L"panelUpdateDateRe";
			   this->panelUpdateDateRe->Size = System::Drawing::Size(321, 171);
			   this->panelUpdateDateRe->TabIndex = 5;
			   // 
			   // butSeveUpdateRe
			   // 
			   this->butSeveUpdateRe->BackColor = System::Drawing::Color::Transparent;
			   this->butSeveUpdateRe->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butSeveUpdateRe.BackgroundImage")));
			   this->butSeveUpdateRe->FlatAppearance->BorderSize = 0;
			   this->butSeveUpdateRe->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Aqua;
			   this->butSeveUpdateRe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butSeveUpdateRe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->butSeveUpdateRe->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->butSeveUpdateRe->Location = System::Drawing::Point(126, 113);
			   this->butSeveUpdateRe->Name = L"butSeveUpdateRe";
			   this->butSeveUpdateRe->Size = System::Drawing::Size(84, 33);
			   this->butSeveUpdateRe->TabIndex = 2;
			   this->butSeveUpdateRe->Text = L"Save";
			   this->butSeveUpdateRe->UseVisualStyleBackColor = false;
			   this->butSeveUpdateRe->Click += gcnew System::EventHandler(this, &Home::butSeveUpdateRe_Click);
			   // 
			   // textBoxUpdateDateRe
			   // 
			   this->textBoxUpdateDateRe->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxUpdateDateRe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->textBoxUpdateDateRe->Location = System::Drawing::Point(41, 64);
			   this->textBoxUpdateDateRe->Name = L"textBoxUpdateDateRe";
			   this->textBoxUpdateDateRe->Size = System::Drawing::Size(220, 25);
			   this->textBoxUpdateDateRe->TabIndex = 1;
			   this->textBoxUpdateDateRe->Text = L" ";
			   // 
			   // butExitPanelUpRe
			   // 
			   this->butExitPanelUpRe->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butExitPanelUpRe.BackgroundImage")));
			   this->butExitPanelUpRe->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butExitPanelUpRe->FlatAppearance->BorderSize = 0;
			   this->butExitPanelUpRe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butExitPanelUpRe->Location = System::Drawing::Point(266, 10);
			   this->butExitPanelUpRe->Name = L"butExitPanelUpRe";
			   this->butExitPanelUpRe->Size = System::Drawing::Size(37, 39);
			   this->butExitPanelUpRe->TabIndex = 0;
			   this->butExitPanelUpRe->Text = L" ";
			   this->butExitPanelUpRe->UseVisualStyleBackColor = true;
			   this->butExitPanelUpRe->Click += gcnew System::EventHandler(this, &Home::butExitPanelUpRe_Click);
			   // 
			   // panelRoomAdmin
			   // 
			   this->panelRoomAdmin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->panelRoomAdmin->Controls->Add(this->panelHomeAdmin);
			   this->panelRoomAdmin->Controls->Add(this->panelMenuAdmin);
			   this->panelRoomAdmin->Controls->Add(this->panelDelAccoAdmin);
			   this->panelRoomAdmin->Controls->Add(this->panelRejectReq);
			   this->panelRoomAdmin->Controls->Add(this->panelDisplayDoDate);
			   this->panelRoomAdmin->Controls->Add(this->panelUpdateAdminRe);
			   this->panelRoomAdmin->Controls->Add(this->panelUpdateAdminDo);
			   this->panelRoomAdmin->Controls->Add(this->panelInsertRe);
			   this->panelRoomAdmin->Controls->Add(this->panelInserDo);
			   this->panelRoomAdmin->Controls->Add(this->panelDisplayReDate);
			   this->panelRoomAdmin->Controls->Add(this->panelRequestAdmin);
			   this->panelRoomAdmin->Controls->Add(this->panelReAdmin);
			   this->panelRoomAdmin->Controls->Add(this->panelDoAdmin);
			   this->panelRoomAdmin->Controls->Add(this->panelAcceptReq);
			   this->panelRoomAdmin->Location = System::Drawing::Point(0, 50);
			   this->panelRoomAdmin->Name = L"panelRoomAdmin";
			   this->panelRoomAdmin->Size = System::Drawing::Size(950, 601);
			   this->panelRoomAdmin->TabIndex = 16;
			   // 
			   // panelHomeAdmin
			   // 
			   this->panelHomeAdmin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->panelHomeAdmin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelHomeAdmin.BackgroundImage")));
			   this->panelHomeAdmin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->panelHomeAdmin->Controls->Add(this->butDisplayReDate);
			   this->panelHomeAdmin->Controls->Add(this->butDisplayDoDate);
			   this->panelHomeAdmin->Controls->Add(this->labelNumofAllReq);
			   this->panelHomeAdmin->Controls->Add(this->labelNumofRe);
			   this->panelHomeAdmin->Controls->Add(this->labelNumofDo);
			   this->panelHomeAdmin->Location = System::Drawing::Point(203, 1);
			   this->panelHomeAdmin->Name = L"panelHomeAdmin";
			   this->panelHomeAdmin->Size = System::Drawing::Size(747, 600);
			   this->panelHomeAdmin->TabIndex = 22;
			   // 
			   // butDisplayReDate
			   // 
			   this->butDisplayReDate->BackColor = System::Drawing::Color::Transparent;
			   this->butDisplayReDate->FlatAppearance->BorderSize = 0;
			   this->butDisplayReDate->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)),
				   static_cast<System::Int32>(static_cast<System::Byte>(175)), static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->butDisplayReDate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butDisplayReDate->Location = System::Drawing::Point(293, 236);
			   this->butDisplayReDate->Name = L"butDisplayReDate";
			   this->butDisplayReDate->Size = System::Drawing::Size(179, 62);
			   this->butDisplayReDate->TabIndex = 4;
			   this->butDisplayReDate->UseVisualStyleBackColor = false;
			   this->butDisplayReDate->Click += gcnew System::EventHandler(this, &Home::butDisplayReDate_Click_1);
			   this->butDisplayReDate->MouseHover += gcnew System::EventHandler(this, &Home::butDisplayReDate_MouseHover);
			   // 
			   // butDisplayDoDate
			   // 
			   this->butDisplayDoDate->BackColor = System::Drawing::Color::Transparent;
			   this->butDisplayDoDate->FlatAppearance->BorderSize = 0;
			   this->butDisplayDoDate->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)),
				   static_cast<System::Int32>(static_cast<System::Byte>(175)), static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->butDisplayDoDate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butDisplayDoDate->Location = System::Drawing::Point(77, 234);
			   this->butDisplayDoDate->Name = L"butDisplayDoDate";
			   this->butDisplayDoDate->Size = System::Drawing::Size(157, 64);
			   this->butDisplayDoDate->TabIndex = 3;
			   this->butDisplayDoDate->UseVisualStyleBackColor = false;
			   this->butDisplayDoDate->Click += gcnew System::EventHandler(this, &Home::butDisplayDoDate_Click);
			   this->butDisplayDoDate->MouseHover += gcnew System::EventHandler(this, &Home::butDisplayDoDate_MouseHover);
			   // 
			   // labelNumofAllReq
			   // 
			   this->labelNumofAllReq->AutoSize = true;
			   this->labelNumofAllReq->BackColor = System::Drawing::Color::Transparent;
			   this->labelNumofAllReq->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 20.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelNumofAllReq->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(222)),
				   static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(55)));
			   this->labelNumofAllReq->Location = System::Drawing::Point(640, 407);
			   this->labelNumofAllReq->Name = L"labelNumofAllReq";
			   this->labelNumofAllReq->Size = System::Drawing::Size(34, 40);
			   this->labelNumofAllReq->TabIndex = 2;
			   this->labelNumofAllReq->Text = L"0";
			   // 
			   // labelNumofRe
			   // 
			   this->labelNumofRe->AutoSize = true;
			   this->labelNumofRe->BackColor = System::Drawing::Color::Transparent;
			   this->labelNumofRe->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 20.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelNumofRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(222)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				   static_cast<System::Int32>(static_cast<System::Byte>(55)));
			   this->labelNumofRe->Location = System::Drawing::Point(409, 405);
			   this->labelNumofRe->Name = L"labelNumofRe";
			   this->labelNumofRe->Size = System::Drawing::Size(34, 40);
			   this->labelNumofRe->TabIndex = 1;
			   this->labelNumofRe->Text = L"0";
			   // 
			   // labelNumofDo
			   // 
			   this->labelNumofDo->AutoSize = true;
			   this->labelNumofDo->BackColor = System::Drawing::Color::Transparent;
			   this->labelNumofDo->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 20.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelNumofDo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(222)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				   static_cast<System::Int32>(static_cast<System::Byte>(55)));
			   this->labelNumofDo->Location = System::Drawing::Point(190, 407);
			   this->labelNumofDo->Name = L"labelNumofDo";
			   this->labelNumofDo->Size = System::Drawing::Size(34, 40);
			   this->labelNumofDo->TabIndex = 0;
			   this->labelNumofDo->Text = L"0";
			   // 
			   // panelMenuAdmin
			   // 
			   this->panelMenuAdmin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left));
			   this->panelMenuAdmin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				   static_cast<System::Int32>(static_cast<System::Byte>(242)));
			   this->panelMenuAdmin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelMenuAdmin.BackgroundImage")));
			   this->panelMenuAdmin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->panelMenuAdmin->Controls->Add(this->button10);
			   this->panelMenuAdmin->Controls->Add(this->butAdminPageDo);
			   this->panelMenuAdmin->Controls->Add(this->butAdminPageRe);
			   this->panelMenuAdmin->Controls->Add(this->butAdminPageReq);
			   this->panelMenuAdmin->Controls->Add(this->butAdminPageHo);
			   this->panelMenuAdmin->Location = System::Drawing::Point(0, -2);
			   this->panelMenuAdmin->Name = L"panelMenuAdmin";
			   this->panelMenuAdmin->Size = System::Drawing::Size(203, 603);
			   this->panelMenuAdmin->TabIndex = 21;
			   // 
			   // button10
			   // 
			   this->button10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->button10->BackColor = System::Drawing::Color::Transparent;
			   this->button10->FlatAppearance->BorderSize = 0;
			   this->button10->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			   this->button10->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				   static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(165)), static_cast<System::Int32>(static_cast<System::Byte>(163)));
			   this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button10->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			   this->button10->Location = System::Drawing::Point(0, 515);
			   this->button10->Name = L"button10";
			   this->button10->Size = System::Drawing::Size(203, 77);
			   this->button10->TabIndex = 3;
			   this->button10->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			   this->button10->UseVisualStyleBackColor = false;
			   this->button10->Click += gcnew System::EventHandler(this, &Home::button10_Click);
			   // 
			   // butAdminPageDo
			   // 
			   this->butAdminPageDo->BackColor = System::Drawing::Color::Transparent;
			   this->butAdminPageDo->FlatAppearance->BorderSize = 0;
			   this->butAdminPageDo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butAdminPageDo->Font = (gcnew System::Drawing::Font(L"Impact", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->butAdminPageDo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				   static_cast<System::Int32>(static_cast<System::Byte>(83)));
			   this->butAdminPageDo->Location = System::Drawing::Point(0, 168);
			   this->butAdminPageDo->Name = L"butAdminPageDo";
			   this->butAdminPageDo->Size = System::Drawing::Size(197, 60);
			   this->butAdminPageDo->TabIndex = 2;
			   this->butAdminPageDo->Text = L"Donor";
			   this->butAdminPageDo->UseVisualStyleBackColor = false;
			   this->butAdminPageDo->Click += gcnew System::EventHandler(this, &Home::butAdminPageDo_Click);
			   // 
			   // butAdminPageRe
			   // 
			   this->butAdminPageRe->BackColor = System::Drawing::Color::Transparent;
			   this->butAdminPageRe->FlatAppearance->BorderSize = 0;
			   this->butAdminPageRe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butAdminPageRe->Font = (gcnew System::Drawing::Font(L"Impact", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->butAdminPageRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				   static_cast<System::Int32>(static_cast<System::Byte>(83)));
			   this->butAdminPageRe->Location = System::Drawing::Point(5, 244);
			   this->butAdminPageRe->Name = L"butAdminPageRe";
			   this->butAdminPageRe->Size = System::Drawing::Size(197, 60);
			   this->butAdminPageRe->TabIndex = 2;
			   this->butAdminPageRe->Text = L"Recipient";
			   this->butAdminPageRe->UseVisualStyleBackColor = false;
			   this->butAdminPageRe->Click += gcnew System::EventHandler(this, &Home::butAdminPageRe_Click);
			   // 
			   // butAdminPageReq
			   // 
			   this->butAdminPageReq->BackColor = System::Drawing::Color::Transparent;
			   this->butAdminPageReq->FlatAppearance->BorderSize = 0;
			   this->butAdminPageReq->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butAdminPageReq->Font = (gcnew System::Drawing::Font(L"Impact", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->butAdminPageReq->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				   static_cast<System::Int32>(static_cast<System::Byte>(83)));
			   this->butAdminPageReq->Location = System::Drawing::Point(3, 89);
			   this->butAdminPageReq->Name = L"butAdminPageReq";
			   this->butAdminPageReq->Size = System::Drawing::Size(197, 60);
			   this->butAdminPageReq->TabIndex = 1;
			   this->butAdminPageReq->Text = L"Request";
			   this->butAdminPageReq->UseVisualStyleBackColor = false;
			   this->butAdminPageReq->Click += gcnew System::EventHandler(this, &Home::butAdminPageReq_Click);
			   // 
			   // butAdminPageHo
			   // 
			   this->butAdminPageHo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				   static_cast<System::Int32>(static_cast<System::Byte>(83)));
			   this->butAdminPageHo->FlatAppearance->BorderSize = 0;
			   this->butAdminPageHo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butAdminPageHo->Font = (gcnew System::Drawing::Font(L"Overpass", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->butAdminPageHo->ForeColor = System::Drawing::Color::White;
			   this->butAdminPageHo->Location = System::Drawing::Point(3, 8);
			   this->butAdminPageHo->Name = L"butAdminPageHo";
			   this->butAdminPageHo->Size = System::Drawing::Size(197, 67);
			   this->butAdminPageHo->TabIndex = 0;
			   this->butAdminPageHo->Text = L"Home";
			   this->butAdminPageHo->UseVisualStyleBackColor = false;
			   this->butAdminPageHo->Click += gcnew System::EventHandler(this, &Home::butAdminPageHo_Click);
			   // 
			   // panelDelAccoAdmin
			   // 
			   this->panelDelAccoAdmin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)),
				   static_cast<System::Int32>(static_cast<System::Byte>(207)), static_cast<System::Int32>(static_cast<System::Byte>(216)));
			   this->panelDelAccoAdmin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelDelAccoAdmin.BackgroundImage")));
			   this->panelDelAccoAdmin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->panelDelAccoAdmin->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			   this->panelDelAccoAdmin->Controls->Add(this->butNoDelAcoAdmin);
			   this->panelDelAccoAdmin->Controls->Add(this->butYesDelAcoAdmin);
			   this->panelDelAccoAdmin->Controls->Add(this->butExitDelAcoAdmin);
			   this->panelDelAccoAdmin->Location = System::Drawing::Point(247, 197);
			   this->panelDelAccoAdmin->Name = L"panelDelAccoAdmin";
			   this->panelDelAccoAdmin->Size = System::Drawing::Size(456, 208);
			   this->panelDelAccoAdmin->TabIndex = 26;
			   // 
			   // butNoDelAcoAdmin
			   // 
			   this->butNoDelAcoAdmin->BackColor = System::Drawing::Color::Transparent;
			   this->butNoDelAcoAdmin->FlatAppearance->BorderSize = 0;
			   this->butNoDelAcoAdmin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butNoDelAcoAdmin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->butNoDelAcoAdmin->ForeColor = System::Drawing::Color::WhiteSmoke;
			   this->butNoDelAcoAdmin->Location = System::Drawing::Point(40, 139);
			   this->butNoDelAcoAdmin->Name = L"butNoDelAcoAdmin";
			   this->butNoDelAcoAdmin->Size = System::Drawing::Size(130, 33);
			   this->butNoDelAcoAdmin->TabIndex = 3;
			   this->butNoDelAcoAdmin->Text = L"No";
			   this->butNoDelAcoAdmin->UseVisualStyleBackColor = false;
			   this->butNoDelAcoAdmin->Click += gcnew System::EventHandler(this, &Home::butNoDelAcoAdminDo_Click);
			   // 
			   // butYesDelAcoAdmin
			   // 
			   this->butYesDelAcoAdmin->BackColor = System::Drawing::Color::Transparent;
			   this->butYesDelAcoAdmin->FlatAppearance->BorderSize = 0;
			   this->butYesDelAcoAdmin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butYesDelAcoAdmin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->butYesDelAcoAdmin->ForeColor = System::Drawing::Color::WhiteSmoke;
			   this->butYesDelAcoAdmin->Location = System::Drawing::Point(283, 137);
			   this->butYesDelAcoAdmin->Name = L"butYesDelAcoAdmin";
			   this->butYesDelAcoAdmin->Size = System::Drawing::Size(129, 33);
			   this->butYesDelAcoAdmin->TabIndex = 2;
			   this->butYesDelAcoAdmin->Text = L"Yes";
			   this->butYesDelAcoAdmin->UseVisualStyleBackColor = false;
			   this->butYesDelAcoAdmin->Click += gcnew System::EventHandler(this, &Home::butYesDelAcoAdminDo_Click);
			   // 
			   // butExitDelAcoAdmin
			   // 
			   this->butExitDelAcoAdmin->BackColor = System::Drawing::Color::Transparent;
			   this->butExitDelAcoAdmin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butExitDelAcoAdmin.BackgroundImage")));
			   this->butExitDelAcoAdmin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butExitDelAcoAdmin->FlatAppearance->BorderSize = 0;
			   this->butExitDelAcoAdmin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butExitDelAcoAdmin->Location = System::Drawing::Point(424, -2);
			   this->butExitDelAcoAdmin->Name = L"butExitDelAcoAdmin";
			   this->butExitDelAcoAdmin->Size = System::Drawing::Size(28, 34);
			   this->butExitDelAcoAdmin->TabIndex = 0;
			   this->butExitDelAcoAdmin->Text = L" ";
			   this->butExitDelAcoAdmin->UseVisualStyleBackColor = false;
			   this->butExitDelAcoAdmin->Click += gcnew System::EventHandler(this, &Home::butExitDelAcoAdminDo_Click);
			   // 
			   // panelRejectReq
			   // 
			   this->panelRejectReq->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelRejectReq.BackgroundImage")));
			   this->panelRejectReq->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->panelRejectReq->Controls->Add(this->butExitRejectPanel);
			   this->panelRejectReq->Controls->Add(this->butRejectReq);
			   this->panelRejectReq->Location = System::Drawing::Point(379, 141);
			   this->panelRejectReq->Name = L"panelRejectReq";
			   this->panelRejectReq->Size = System::Drawing::Size(324, 321);
			   this->panelRejectReq->TabIndex = 30;
			   // 
			   // butExitRejectPanel
			   // 
			   this->butExitRejectPanel->BackColor = System::Drawing::Color::Transparent;
			   this->butExitRejectPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butExitRejectPanel.BackgroundImage")));
			   this->butExitRejectPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butExitRejectPanel->FlatAppearance->BorderSize = 0;
			   this->butExitRejectPanel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butExitRejectPanel->Location = System::Drawing::Point(294, 0);
			   this->butExitRejectPanel->Name = L"butExitRejectPanel";
			   this->butExitRejectPanel->Size = System::Drawing::Size(27, 30);
			   this->butExitRejectPanel->TabIndex = 25;
			   this->butExitRejectPanel->Text = L" ";
			   this->butExitRejectPanel->UseVisualStyleBackColor = false;
			   this->butExitRejectPanel->Click += gcnew System::EventHandler(this, &Home::butExitRejectPanel_Click);
			   // 
			   // butRejectReq
			   // 
			   this->butRejectReq->BackColor = System::Drawing::Color::Transparent;
			   this->butRejectReq->FlatAppearance->BorderSize = 0;
			   this->butRejectReq->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butRejectReq->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->butRejectReq->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->butRejectReq->Location = System::Drawing::Point(108, 274);
			   this->butRejectReq->Name = L"butRejectReq";
			   this->butRejectReq->Size = System::Drawing::Size(109, 34);
			   this->butRejectReq->TabIndex = 24;
			   this->butRejectReq->Text = L"Reject";
			   this->butRejectReq->UseVisualStyleBackColor = false;
			   this->butRejectReq->Click += gcnew System::EventHandler(this, &Home::butRejectReq_Click);
			   // 
			   // panelDisplayDoDate
			   // 
			   this->panelDisplayDoDate->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->panelDisplayDoDate->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelDisplayDoDate.BackgroundImage")));
			   this->panelDisplayDoDate->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->panelDisplayDoDate->Controls->Add(this->button1);
			   this->panelDisplayDoDate->Controls->Add(this->dataGridView2);
			   this->panelDisplayDoDate->Location = System::Drawing::Point(0, 0);
			   this->panelDisplayDoDate->Name = L"panelDisplayDoDate";
			   this->panelDisplayDoDate->Size = System::Drawing::Size(950, 601);
			   this->panelDisplayDoDate->TabIndex = 31;
			   // 
			   // button1
			   // 
			   this->button1->BackColor = System::Drawing::Color::Transparent;
			   this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			   this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->button1->FlatAppearance->BorderSize = 0;
			   this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button1->Location = System::Drawing::Point(8, 20);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(59, 56);
			   this->button1->TabIndex = 18;
			   this->button1->UseVisualStyleBackColor = false;
			   this->button1->Click += gcnew System::EventHandler(this, &Home::button1_Click_3);
			   // 
			   // dataGridView2
			   // 
			   this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				   this->ID, this->Column6,
					   this->Column7, this->Column8, this->Column9, this->Column10, this->Gender, this->Column11, this->Column12, this->Column13, this->Column14
			   });
			   this->dataGridView2->Location = System::Drawing::Point(5, 90);
			   this->dataGridView2->Name = L"dataGridView2";
			   this->dataGridView2->RowHeadersWidth = 10;
			   this->dataGridView2->RowTemplate->Height = 24;
			   this->dataGridView2->Size = System::Drawing::Size(939, 495);
			   this->dataGridView2->TabIndex = 0;
			   // 
			   // ID
			   // 
			   this->ID->FillWeight = 10;
			   this->ID->HeaderText = L"ID";
			   this->ID->MinimumWidth = 6;
			   this->ID->Name = L"ID";
			   this->ID->Width = 50;
			   // 
			   // Column6
			   // 
			   this->Column6->HeaderText = L"Fname";
			   this->Column6->MinimumWidth = 6;
			   this->Column6->Name = L"Column6";
			   this->Column6->Width = 125;
			   // 
			   // Column7
			   // 
			   this->Column7->HeaderText = L"Lname";
			   this->Column7->MinimumWidth = 6;
			   this->Column7->Name = L"Column7";
			   this->Column7->Width = 125;
			   // 
			   // Column8
			   // 
			   this->Column8->HeaderText = L"Age";
			   this->Column8->MinimumWidth = 6;
			   this->Column8->Name = L"Column8";
			   this->Column8->Width = 50;
			   // 
			   // Column9
			   // 
			   this->Column9->HeaderText = L"Email";
			   this->Column9->MinimumWidth = 6;
			   this->Column9->Name = L"Column9";
			   this->Column9->Width = 125;
			   // 
			   // Column10
			   // 
			   this->Column10->HeaderText = L"Password";
			   this->Column10->MinimumWidth = 6;
			   this->Column10->Name = L"Column10";
			   this->Column10->Width = 125;
			   // 
			   // Gender
			   // 
			   this->Gender->HeaderText = L"Gender";
			   this->Gender->MinimumWidth = 6;
			   this->Gender->Name = L"Gender";
			   this->Gender->Width = 50;
			   // 
			   // Column11
			   // 
			   this->Column11->HeaderText = L"Blood Type";
			   this->Column11->MinimumWidth = 6;
			   this->Column11->Name = L"Column11";
			   this->Column11->Width = 50;
			   // 
			   // Column12
			   // 
			   this->Column12->HeaderText = L"Disease";
			   this->Column12->MinimumWidth = 6;
			   this->Column12->Name = L"Column12";
			   this->Column12->Width = 125;
			   // 
			   // Column13
			   // 
			   this->Column13->HeaderText = L"Medicine";
			   this->Column13->MinimumWidth = 6;
			   this->Column13->Name = L"Column13";
			   this->Column13->Width = 125;
			   // 
			   // Column14
			   // 
			   this->Column14->HeaderText = L"Last Don";
			   this->Column14->MinimumWidth = 6;
			   this->Column14->Name = L"Column14";
			   this->Column14->Width = 125;
			   // 
			   // panelUpdateAdminRe
			   // 
			   this->panelUpdateAdminRe->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)),
				   static_cast<System::Int32>(static_cast<System::Byte>(207)), static_cast<System::Int32>(static_cast<System::Byte>(216)));
			   this->panelUpdateAdminRe->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelUpdateAdminRe.BackgroundImage")));
			   this->panelUpdateAdminRe->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->panelUpdateAdminRe->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			   this->panelUpdateAdminRe->Controls->Add(this->butSaveUpdateAdminRe);
			   this->panelUpdateAdminRe->Controls->Add(this->textBoxUpdateAdminRe);
			   this->panelUpdateAdminRe->Controls->Add(this->butExitUpdateAdminRe);
			   this->panelUpdateAdminRe->Location = System::Drawing::Point(315, 216);
			   this->panelUpdateAdminRe->Name = L"panelUpdateAdminRe";
			   this->panelUpdateAdminRe->Size = System::Drawing::Size(321, 171);
			   this->panelUpdateAdminRe->TabIndex = 24;
			   // 
			   // butSaveUpdateAdminRe
			   // 
			   this->butSaveUpdateAdminRe->BackColor = System::Drawing::Color::Transparent;
			   this->butSaveUpdateAdminRe->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butSaveUpdateAdminRe.BackgroundImage")));
			   this->butSaveUpdateAdminRe->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->butSaveUpdateAdminRe->FlatAppearance->BorderSize = 0;
			   this->butSaveUpdateAdminRe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butSaveUpdateAdminRe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->butSaveUpdateAdminRe->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->butSaveUpdateAdminRe->Location = System::Drawing::Point(120, 109);
			   this->butSaveUpdateAdminRe->Name = L"butSaveUpdateAdminRe";
			   this->butSaveUpdateAdminRe->Size = System::Drawing::Size(81, 30);
			   this->butSaveUpdateAdminRe->TabIndex = 2;
			   this->butSaveUpdateAdminRe->Text = L"Save";
			   this->butSaveUpdateAdminRe->UseVisualStyleBackColor = false;
			   this->butSaveUpdateAdminRe->Click += gcnew System::EventHandler(this, &Home::butSaveUpdateAdminRe_Click);
			   // 
			   // textBoxUpdateAdminRe
			   // 
			   this->textBoxUpdateAdminRe->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxUpdateAdminRe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->textBoxUpdateAdminRe->Location = System::Drawing::Point(74, 65);
			   this->textBoxUpdateAdminRe->Name = L"textBoxUpdateAdminRe";
			   this->textBoxUpdateAdminRe->Size = System::Drawing::Size(161, 19);
			   this->textBoxUpdateAdminRe->TabIndex = 1;
			   // 
			   // butExitUpdateAdminRe
			   // 
			   this->butExitUpdateAdminRe->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butExitUpdateAdminRe.BackgroundImage")));
			   this->butExitUpdateAdminRe->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butExitUpdateAdminRe->FlatAppearance->BorderSize = 0;
			   this->butExitUpdateAdminRe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butExitUpdateAdminRe->Location = System::Drawing::Point(275, 15);
			   this->butExitUpdateAdminRe->Name = L"butExitUpdateAdminRe";
			   this->butExitUpdateAdminRe->Size = System::Drawing::Size(28, 38);
			   this->butExitUpdateAdminRe->TabIndex = 0;
			   this->butExitUpdateAdminRe->Text = L" ";
			   this->butExitUpdateAdminRe->UseVisualStyleBackColor = true;
			   this->butExitUpdateAdminRe->Click += gcnew System::EventHandler(this, &Home::butExitUpdateAdminRe_Click);
			   // 
			   // panelUpdateAdminDo
			   // 
			   this->panelUpdateAdminDo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)),
				   static_cast<System::Int32>(static_cast<System::Byte>(207)), static_cast<System::Int32>(static_cast<System::Byte>(216)));
			   this->panelUpdateAdminDo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelUpdateAdminDo.BackgroundImage")));
			   this->panelUpdateAdminDo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->panelUpdateAdminDo->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			   this->panelUpdateAdminDo->Controls->Add(this->butSaveUpdateAdminDo);
			   this->panelUpdateAdminDo->Controls->Add(this->textBoxUpdateAdminDo);
			   this->panelUpdateAdminDo->Controls->Add(this->butExitUpdateAdminDo);
			   this->panelUpdateAdminDo->Location = System::Drawing::Point(450, 237);
			   this->panelUpdateAdminDo->Name = L"panelUpdateAdminDo";
			   this->panelUpdateAdminDo->Size = System::Drawing::Size(321, 171);
			   this->panelUpdateAdminDo->TabIndex = 5;
			   // 
			   // butSaveUpdateAdminDo
			   // 
			   this->butSaveUpdateAdminDo->BackColor = System::Drawing::Color::Transparent;
			   this->butSaveUpdateAdminDo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butSaveUpdateAdminDo.BackgroundImage")));
			   this->butSaveUpdateAdminDo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->butSaveUpdateAdminDo->FlatAppearance->BorderSize = 0;
			   this->butSaveUpdateAdminDo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butSaveUpdateAdminDo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->butSaveUpdateAdminDo->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->butSaveUpdateAdminDo->Location = System::Drawing::Point(117, 118);
			   this->butSaveUpdateAdminDo->Name = L"butSaveUpdateAdminDo";
			   this->butSaveUpdateAdminDo->Size = System::Drawing::Size(82, 31);
			   this->butSaveUpdateAdminDo->TabIndex = 2;
			   this->butSaveUpdateAdminDo->Text = L"Save";
			   this->butSaveUpdateAdminDo->UseVisualStyleBackColor = false;
			   this->butSaveUpdateAdminDo->Click += gcnew System::EventHandler(this, &Home::butSaveUpdateAdminDo_Click);
			   // 
			   // textBoxUpdateAdminDo
			   // 
			   this->textBoxUpdateAdminDo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxUpdateAdminDo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->textBoxUpdateAdminDo->Location = System::Drawing::Point(74, 66);
			   this->textBoxUpdateAdminDo->Name = L"textBoxUpdateAdminDo";
			   this->textBoxUpdateAdminDo->Size = System::Drawing::Size(165, 19);
			   this->textBoxUpdateAdminDo->TabIndex = 1;
			   // 
			   // butExitUpdateAdminDo
			   // 
			   this->butExitUpdateAdminDo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butExitUpdateAdminDo.BackgroundImage")));
			   this->butExitUpdateAdminDo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butExitUpdateAdminDo->FlatAppearance->BorderSize = 0;
			   this->butExitUpdateAdminDo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butExitUpdateAdminDo->Location = System::Drawing::Point(266, 15);
			   this->butExitUpdateAdminDo->Name = L"butExitUpdateAdminDo";
			   this->butExitUpdateAdminDo->Size = System::Drawing::Size(37, 40);
			   this->butExitUpdateAdminDo->TabIndex = 0;
			   this->butExitUpdateAdminDo->Text = L" ";
			   this->butExitUpdateAdminDo->UseVisualStyleBackColor = true;
			   this->butExitUpdateAdminDo->Click += gcnew System::EventHandler(this, &Home::butExitUpdateAdminDo_Click);
			   // 
			   // panelInsertRe
			   // 
			   this->panelInsertRe->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
				   static_cast<System::Int32>(static_cast<System::Byte>(216)));
			   this->panelInsertRe->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelInsertRe.BackgroundImage")));
			   this->panelInsertRe->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->panelInsertRe->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			   this->panelInsertRe->Controls->Add(this->butAddReAdmin);
			   this->panelInsertRe->Controls->Add(this->textBoxEmailInAdminRe);
			   this->panelInsertRe->Controls->Add(this->textBoxLnameInAdminRe);
			   this->panelInsertRe->Controls->Add(this->textBoxAgeInAdminRe);
			   this->panelInsertRe->Controls->Add(this->textBoxHosInAdminRe);
			   this->panelInsertRe->Controls->Add(this->textBoxGenderInAdminRe);
			   this->panelInsertRe->Controls->Add(this->textBoxPasInAdminRe);
			   this->panelInsertRe->Controls->Add(this->textBoxDocInAdminRe);
			   this->panelInsertRe->Controls->Add(this->textBoxBloodInAdminRe);
			   this->panelInsertRe->Controls->Add(this->textBoxFnameInAdminRe);
			   this->panelInsertRe->Controls->Add(this->butExitInserRe);
			   this->panelInsertRe->Location = System::Drawing::Point(220, 101);
			   this->panelInsertRe->Name = L"panelInsertRe";
			   this->panelInsertRe->Size = System::Drawing::Size(702, 419);
			   this->panelInsertRe->TabIndex = 28;
			   // 
			   // butAddReAdmin
			   // 
			   this->butAddReAdmin->BackColor = System::Drawing::Color::Transparent;
			   this->butAddReAdmin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butAddReAdmin.BackgroundImage")));
			   this->butAddReAdmin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butAddReAdmin->FlatAppearance->BorderSize = 0;
			   this->butAddReAdmin->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Aqua;
			   this->butAddReAdmin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butAddReAdmin->ForeColor = System::Drawing::Color::White;
			   this->butAddReAdmin->Location = System::Drawing::Point(276, 338);
			   this->butAddReAdmin->Name = L"butAddReAdmin";
			   this->butAddReAdmin->Size = System::Drawing::Size(138, 38);
			   this->butAddReAdmin->TabIndex = 2;
			   this->butAddReAdmin->Text = L"Add";
			   this->butAddReAdmin->UseVisualStyleBackColor = false;
			   this->butAddReAdmin->Click += gcnew System::EventHandler(this, &Home::butAddReAdmin_Click);
			   // 
			   // textBoxEmailInAdminRe
			   // 
			   this->textBoxEmailInAdminRe->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxEmailInAdminRe->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->textBoxEmailInAdminRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)),
				   static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(81)));
			   this->textBoxEmailInAdminRe->Location = System::Drawing::Point(488, 108);
			   this->textBoxEmailInAdminRe->Name = L"textBoxEmailInAdminRe";
			   this->textBoxEmailInAdminRe->Size = System::Drawing::Size(181, 26);
			   this->textBoxEmailInAdminRe->TabIndex = 1;
			   // 
			   // textBoxLnameInAdminRe
			   // 
			   this->textBoxLnameInAdminRe->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxLnameInAdminRe->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->textBoxLnameInAdminRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)),
				   static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(81)));
			   this->textBoxLnameInAdminRe->Location = System::Drawing::Point(263, 104);
			   this->textBoxLnameInAdminRe->Name = L"textBoxLnameInAdminRe";
			   this->textBoxLnameInAdminRe->Size = System::Drawing::Size(182, 26);
			   this->textBoxLnameInAdminRe->TabIndex = 1;
			   // 
			   // textBoxAgeInAdminRe
			   // 
			   this->textBoxAgeInAdminRe->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxAgeInAdminRe->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->textBoxAgeInAdminRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)),
				   static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(81)));
			   this->textBoxAgeInAdminRe->Location = System::Drawing::Point(488, 193);
			   this->textBoxAgeInAdminRe->Name = L"textBoxAgeInAdminRe";
			   this->textBoxAgeInAdminRe->Size = System::Drawing::Size(181, 26);
			   this->textBoxAgeInAdminRe->TabIndex = 1;
			   // 
			   // textBoxHosInAdminRe
			   // 
			   this->textBoxHosInAdminRe->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxHosInAdminRe->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->textBoxHosInAdminRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)),
				   static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(81)));
			   this->textBoxHosInAdminRe->Location = System::Drawing::Point(484, 277);
			   this->textBoxHosInAdminRe->Name = L"textBoxHosInAdminRe";
			   this->textBoxHosInAdminRe->Size = System::Drawing::Size(185, 26);
			   this->textBoxHosInAdminRe->TabIndex = 1;
			   // 
			   // textBoxGenderInAdminRe
			   // 
			   this->textBoxGenderInAdminRe->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxGenderInAdminRe->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->textBoxGenderInAdminRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)),
				   static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(81)));
			   this->textBoxGenderInAdminRe->Location = System::Drawing::Point(263, 277);
			   this->textBoxGenderInAdminRe->Name = L"textBoxGenderInAdminRe";
			   this->textBoxGenderInAdminRe->Size = System::Drawing::Size(177, 26);
			   this->textBoxGenderInAdminRe->TabIndex = 1;
			   // 
			   // textBoxPasInAdminRe
			   // 
			   this->textBoxPasInAdminRe->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxPasInAdminRe->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->textBoxPasInAdminRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)),
				   static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(81)));
			   this->textBoxPasInAdminRe->Location = System::Drawing::Point(264, 193);
			   this->textBoxPasInAdminRe->Name = L"textBoxPasInAdminRe";
			   this->textBoxPasInAdminRe->Size = System::Drawing::Size(181, 26);
			   this->textBoxPasInAdminRe->TabIndex = 1;
			   // 
			   // textBoxDocInAdminRe
			   // 
			   this->textBoxDocInAdminRe->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxDocInAdminRe->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->textBoxDocInAdminRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)),
				   static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(81)));
			   this->textBoxDocInAdminRe->Location = System::Drawing::Point(38, 277);
			   this->textBoxDocInAdminRe->Name = L"textBoxDocInAdminRe";
			   this->textBoxDocInAdminRe->Size = System::Drawing::Size(183, 26);
			   this->textBoxDocInAdminRe->TabIndex = 1;
			   // 
			   // textBoxBloodInAdminRe
			   // 
			   this->textBoxBloodInAdminRe->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxBloodInAdminRe->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->textBoxBloodInAdminRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)),
				   static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(81)));
			   this->textBoxBloodInAdminRe->Location = System::Drawing::Point(36, 193);
			   this->textBoxBloodInAdminRe->Name = L"textBoxBloodInAdminRe";
			   this->textBoxBloodInAdminRe->Size = System::Drawing::Size(181, 26);
			   this->textBoxBloodInAdminRe->TabIndex = 1;
			   // 
			   // textBoxFnameInAdminRe
			   // 
			   this->textBoxFnameInAdminRe->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxFnameInAdminRe->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->textBoxFnameInAdminRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)),
				   static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(81)));
			   this->textBoxFnameInAdminRe->Location = System::Drawing::Point(36, 109);
			   this->textBoxFnameInAdminRe->Name = L"textBoxFnameInAdminRe";
			   this->textBoxFnameInAdminRe->Size = System::Drawing::Size(183, 26);
			   this->textBoxFnameInAdminRe->TabIndex = 1;
			   // 
			   // butExitInserRe
			   // 
			   this->butExitInserRe->BackColor = System::Drawing::Color::Transparent;
			   this->butExitInserRe->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butExitInserRe.BackgroundImage")));
			   this->butExitInserRe->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->butExitInserRe->FlatAppearance->BorderSize = 0;
			   this->butExitInserRe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butExitInserRe->Location = System::Drawing::Point(658, 3);
			   this->butExitInserRe->Name = L"butExitInserRe";
			   this->butExitInserRe->Size = System::Drawing::Size(37, 34);
			   this->butExitInserRe->TabIndex = 0;
			   this->butExitInserRe->Text = L" ";
			   this->butExitInserRe->UseVisualStyleBackColor = false;
			   this->butExitInserRe->Click += gcnew System::EventHandler(this, &Home::butExitInserRe_Click);
			   // 
			   // panelInserDo
			   // 
			   this->panelInserDo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
				   static_cast<System::Int32>(static_cast<System::Byte>(216)));
			   this->panelInserDo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelInserDo.BackgroundImage")));
			   this->panelInserDo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->panelInserDo->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			   this->panelInserDo->Controls->Add(this->textBoxMidInAdminDo);
			   this->panelInserDo->Controls->Add(this->butAddDoAdmin);
			   this->panelInserDo->Controls->Add(this->textBoxEmailInAdminDo);
			   this->panelInserDo->Controls->Add(this->textBoxLnameInAdminDo);
			   this->panelInserDo->Controls->Add(this->textBoxAgeInAdminDo);
			   this->panelInserDo->Controls->Add(this->textBoxDisInAdminDo);
			   this->panelInserDo->Controls->Add(this->textBoxGendrInAdminDo);
			   this->panelInserDo->Controls->Add(this->textBoxPasInAdminDo);
			   this->panelInserDo->Controls->Add(this->textBoxLastDonInAdminDo);
			   this->panelInserDo->Controls->Add(this->textBoxBloodInAdminDo);
			   this->panelInserDo->Controls->Add(this->textBoxFnameInAdminDo);
			   this->panelInserDo->Controls->Add(this->butExitInsertDo);
			   this->panelInserDo->Location = System::Drawing::Point(220, 106);
			   this->panelInserDo->Name = L"panelInserDo";
			   this->panelInserDo->Size = System::Drawing::Size(702, 414);
			   this->panelInserDo->TabIndex = 27;
			   // 
			   // textBoxMidInAdminDo
			   // 
			   this->textBoxMidInAdminDo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxMidInAdminDo->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->textBoxMidInAdminDo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)),
				   static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(81)));
			   this->textBoxMidInAdminDo->Location = System::Drawing::Point(36, 360);
			   this->textBoxMidInAdminDo->Name = L"textBoxMidInAdminDo";
			   this->textBoxMidInAdminDo->Size = System::Drawing::Size(181, 26);
			   this->textBoxMidInAdminDo->TabIndex = 3;
			   // 
			   // butAddDoAdmin
			   // 
			   this->butAddDoAdmin->BackColor = System::Drawing::Color::Transparent;
			   this->butAddDoAdmin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butAddDoAdmin.BackgroundImage")));
			   this->butAddDoAdmin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butAddDoAdmin->FlatAppearance->BorderSize = 0;
			   this->butAddDoAdmin->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Aqua;
			   this->butAddDoAdmin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butAddDoAdmin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->butAddDoAdmin->ForeColor = System::Drawing::Color::White;
			   this->butAddDoAdmin->Location = System::Drawing::Point(448, 362);
			   this->butAddDoAdmin->Name = L"butAddDoAdmin";
			   this->butAddDoAdmin->Size = System::Drawing::Size(130, 38);
			   this->butAddDoAdmin->TabIndex = 2;
			   this->butAddDoAdmin->Text = L"Add";
			   this->butAddDoAdmin->UseVisualStyleBackColor = false;
			   this->butAddDoAdmin->Click += gcnew System::EventHandler(this, &Home::butAddDoAdmin_Click);
			   // 
			   // textBoxEmailInAdminDo
			   // 
			   this->textBoxEmailInAdminDo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxEmailInAdminDo->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->textBoxEmailInAdminDo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)),
				   static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(81)));
			   this->textBoxEmailInAdminDo->Location = System::Drawing::Point(488, 104);
			   this->textBoxEmailInAdminDo->Name = L"textBoxEmailInAdminDo";
			   this->textBoxEmailInAdminDo->Size = System::Drawing::Size(184, 26);
			   this->textBoxEmailInAdminDo->TabIndex = 1;
			   // 
			   // textBoxLnameInAdminDo
			   // 
			   this->textBoxLnameInAdminDo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxLnameInAdminDo->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->textBoxLnameInAdminDo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)),
				   static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(81)));
			   this->textBoxLnameInAdminDo->Location = System::Drawing::Point(268, 103);
			   this->textBoxLnameInAdminDo->Name = L"textBoxLnameInAdminDo";
			   this->textBoxLnameInAdminDo->Size = System::Drawing::Size(180, 26);
			   this->textBoxLnameInAdminDo->TabIndex = 1;
			   // 
			   // textBoxAgeInAdminDo
			   // 
			   this->textBoxAgeInAdminDo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxAgeInAdminDo->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->textBoxAgeInAdminDo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)),
				   static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(81)));
			   this->textBoxAgeInAdminDo->Location = System::Drawing::Point(487, 188);
			   this->textBoxAgeInAdminDo->Name = L"textBoxAgeInAdminDo";
			   this->textBoxAgeInAdminDo->Size = System::Drawing::Size(185, 26);
			   this->textBoxAgeInAdminDo->TabIndex = 1;
			   // 
			   // textBoxDisInAdminDo
			   // 
			   this->textBoxDisInAdminDo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxDisInAdminDo->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->textBoxDisInAdminDo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)),
				   static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(81)));
			   this->textBoxDisInAdminDo->Location = System::Drawing::Point(487, 272);
			   this->textBoxDisInAdminDo->Name = L"textBoxDisInAdminDo";
			   this->textBoxDisInAdminDo->Size = System::Drawing::Size(185, 26);
			   this->textBoxDisInAdminDo->TabIndex = 1;
			   // 
			   // textBoxGendrInAdminDo
			   // 
			   this->textBoxGendrInAdminDo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxGendrInAdminDo->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->textBoxGendrInAdminDo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)),
				   static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(81)));
			   this->textBoxGendrInAdminDo->Location = System::Drawing::Point(265, 274);
			   this->textBoxGendrInAdminDo->Name = L"textBoxGendrInAdminDo";
			   this->textBoxGendrInAdminDo->Size = System::Drawing::Size(177, 26);
			   this->textBoxGendrInAdminDo->TabIndex = 1;
			   // 
			   // textBoxPasInAdminDo
			   // 
			   this->textBoxPasInAdminDo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxPasInAdminDo->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->textBoxPasInAdminDo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)),
				   static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(81)));
			   this->textBoxPasInAdminDo->Location = System::Drawing::Point(266, 187);
			   this->textBoxPasInAdminDo->Name = L"textBoxPasInAdminDo";
			   this->textBoxPasInAdminDo->Size = System::Drawing::Size(180, 26);
			   this->textBoxPasInAdminDo->TabIndex = 1;
			   // 
			   // textBoxLastDonInAdminDo
			   // 
			   this->textBoxLastDonInAdminDo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxLastDonInAdminDo->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->textBoxLastDonInAdminDo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)),
				   static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(81)));
			   this->textBoxLastDonInAdminDo->Location = System::Drawing::Point(39, 272);
			   this->textBoxLastDonInAdminDo->Name = L"textBoxLastDonInAdminDo";
			   this->textBoxLastDonInAdminDo->Size = System::Drawing::Size(181, 26);
			   this->textBoxLastDonInAdminDo->TabIndex = 1;
			   // 
			   // textBoxBloodInAdminDo
			   // 
			   this->textBoxBloodInAdminDo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxBloodInAdminDo->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->textBoxBloodInAdminDo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)),
				   static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(81)));
			   this->textBoxBloodInAdminDo->Location = System::Drawing::Point(36, 187);
			   this->textBoxBloodInAdminDo->Name = L"textBoxBloodInAdminDo";
			   this->textBoxBloodInAdminDo->Size = System::Drawing::Size(184, 26);
			   this->textBoxBloodInAdminDo->TabIndex = 1;
			   // 
			   // textBoxFnameInAdminDo
			   // 
			   this->textBoxFnameInAdminDo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxFnameInAdminDo->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->textBoxFnameInAdminDo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)),
				   static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(81)));
			   this->textBoxFnameInAdminDo->Location = System::Drawing::Point(36, 103);
			   this->textBoxFnameInAdminDo->Name = L"textBoxFnameInAdminDo";
			   this->textBoxFnameInAdminDo->Size = System::Drawing::Size(181, 26);
			   this->textBoxFnameInAdminDo->TabIndex = 1;
			   // 
			   // butExitInsertDo
			   // 
			   this->butExitInsertDo->BackColor = System::Drawing::Color::Transparent;
			   this->butExitInsertDo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butExitInsertDo.BackgroundImage")));
			   this->butExitInsertDo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->butExitInsertDo->FlatAppearance->BorderSize = 0;
			   this->butExitInsertDo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butExitInsertDo->Location = System::Drawing::Point(645, 1);
			   this->butExitInsertDo->Name = L"butExitInsertDo";
			   this->butExitInsertDo->Size = System::Drawing::Size(37, 39);
			   this->butExitInsertDo->TabIndex = 0;
			   this->butExitInsertDo->Text = L" ";
			   this->butExitInsertDo->UseVisualStyleBackColor = false;
			   this->butExitInsertDo->Click += gcnew System::EventHandler(this, &Home::butExitInsertDo_Click);
			   // 
			   // panelDisplayReDate
			   // 
			   this->panelDisplayReDate->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->panelDisplayReDate->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelDisplayReDate.BackgroundImage")));
			   this->panelDisplayReDate->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->panelDisplayReDate->Controls->Add(this->butExitDisplayReDate);
			   this->panelDisplayReDate->Controls->Add(this->dataGridView4);
			   this->panelDisplayReDate->Location = System::Drawing::Point(0, -3);
			   this->panelDisplayReDate->Name = L"panelDisplayReDate";
			   this->panelDisplayReDate->Size = System::Drawing::Size(958, 612);
			   this->panelDisplayReDate->TabIndex = 32;
			   // 
			   // butExitDisplayReDate
			   // 
			   this->butExitDisplayReDate->BackColor = System::Drawing::Color::Transparent;
			   this->butExitDisplayReDate->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butExitDisplayReDate.BackgroundImage")));
			   this->butExitDisplayReDate->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butExitDisplayReDate->FlatAppearance->BorderSize = 0;
			   this->butExitDisplayReDate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butExitDisplayReDate->Location = System::Drawing::Point(8, 20);
			   this->butExitDisplayReDate->Name = L"butExitDisplayReDate";
			   this->butExitDisplayReDate->Size = System::Drawing::Size(59, 56);
			   this->butExitDisplayReDate->TabIndex = 18;
			   this->butExitDisplayReDate->UseVisualStyleBackColor = false;
			   this->butExitDisplayReDate->Click += gcnew System::EventHandler(this, &Home::butExitDisplayReDate_Click);
			   // 
			   // dataGridView4
			   // 
			   this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				   this->dataGridViewTextBoxColumn1,
					   this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5,
					   this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8, this->dataGridViewTextBoxColumn9,
					   this->dataGridViewTextBoxColumn10
			   });
			   this->dataGridView4->Location = System::Drawing::Point(0, 98);
			   this->dataGridView4->Name = L"dataGridView4";
			   this->dataGridView4->RowHeadersWidth = 10;
			   this->dataGridView4->RowTemplate->Height = 24;
			   this->dataGridView4->Size = System::Drawing::Size(946, 487);
			   this->dataGridView4->TabIndex = 0;
			   // 
			   // dataGridViewTextBoxColumn1
			   // 
			   this->dataGridViewTextBoxColumn1->FillWeight = 10;
			   this->dataGridViewTextBoxColumn1->HeaderText = L"ID";
			   this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			   this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			   this->dataGridViewTextBoxColumn1->Width = 50;
			   // 
			   // dataGridViewTextBoxColumn2
			   // 
			   this->dataGridViewTextBoxColumn2->HeaderText = L"Fname";
			   this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			   this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			   this->dataGridViewTextBoxColumn2->Width = 125;
			   // 
			   // dataGridViewTextBoxColumn3
			   // 
			   this->dataGridViewTextBoxColumn3->HeaderText = L"Lname";
			   this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			   this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			   this->dataGridViewTextBoxColumn3->Width = 125;
			   // 
			   // dataGridViewTextBoxColumn4
			   // 
			   this->dataGridViewTextBoxColumn4->HeaderText = L"Age";
			   this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			   this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			   this->dataGridViewTextBoxColumn4->Width = 50;
			   // 
			   // dataGridViewTextBoxColumn5
			   // 
			   this->dataGridViewTextBoxColumn5->HeaderText = L"Email";
			   this->dataGridViewTextBoxColumn5->MinimumWidth = 6;
			   this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			   this->dataGridViewTextBoxColumn5->Width = 125;
			   // 
			   // dataGridViewTextBoxColumn6
			   // 
			   this->dataGridViewTextBoxColumn6->HeaderText = L"Password";
			   this->dataGridViewTextBoxColumn6->MinimumWidth = 6;
			   this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			   this->dataGridViewTextBoxColumn6->Width = 125;
			   // 
			   // dataGridViewTextBoxColumn7
			   // 
			   this->dataGridViewTextBoxColumn7->HeaderText = L"Gender";
			   this->dataGridViewTextBoxColumn7->MinimumWidth = 6;
			   this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			   this->dataGridViewTextBoxColumn7->Width = 50;
			   // 
			   // dataGridViewTextBoxColumn8
			   // 
			   this->dataGridViewTextBoxColumn8->HeaderText = L"Blood Type";
			   this->dataGridViewTextBoxColumn8->MinimumWidth = 6;
			   this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			   this->dataGridViewTextBoxColumn8->Width = 50;
			   // 
			   // dataGridViewTextBoxColumn9
			   // 
			   this->dataGridViewTextBoxColumn9->HeaderText = L"Doctor";
			   this->dataGridViewTextBoxColumn9->MinimumWidth = 6;
			   this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			   this->dataGridViewTextBoxColumn9->Width = 125;
			   // 
			   // dataGridViewTextBoxColumn10
			   // 
			   this->dataGridViewTextBoxColumn10->HeaderText = L"Hospital";
			   this->dataGridViewTextBoxColumn10->MinimumWidth = 6;
			   this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			   this->dataGridViewTextBoxColumn10->Width = 125;
			   // 
			   // panelRequestAdmin
			   // 
			   this->panelRequestAdmin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->panelRequestAdmin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelRequestAdmin.BackgroundImage")));
			   this->panelRequestAdmin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->panelRequestAdmin->Controls->Add(this->butValidReqDoAdmin);
			   this->panelRequestAdmin->Controls->Add(this->butBackReqAdmin);
			   this->panelRequestAdmin->Controls->Add(this->butNextReqAdmin);
			   this->panelRequestAdmin->Controls->Add(this->labelAgeDoReqAdmin);
			   this->panelRequestAdmin->Controls->Add(this->labelEmailDoReqAdmin);
			   this->panelRequestAdmin->Controls->Add(this->labelBHosDoReqAdmin);
			   this->panelRequestAdmin->Controls->Add(this->labelBloodDoReqAdmin);
			   this->panelRequestAdmin->Controls->Add(this->labelDateDoReqAdmin);
			   this->panelRequestAdmin->Controls->Add(this->textBoxIdDoReqAdmin);
			   this->panelRequestAdmin->Controls->Add(this->labelLnameDoReqAdmin);
			   this->panelRequestAdmin->Controls->Add(this->labelFnameDoReqAdmin);
			   this->panelRequestAdmin->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->panelRequestAdmin->Location = System::Drawing::Point(203, 1);
			   this->panelRequestAdmin->Name = L"panelRequestAdmin";
			   this->panelRequestAdmin->Size = System::Drawing::Size(747, 600);
			   this->panelRequestAdmin->TabIndex = 29;
			   // 
			   // butValidReqDoAdmin
			   // 
			   this->butValidReqDoAdmin->BackColor = System::Drawing::Color::Transparent;
			   this->butValidReqDoAdmin->FlatAppearance->BorderSize = 0;
			   this->butValidReqDoAdmin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butValidReqDoAdmin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->butValidReqDoAdmin->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->butValidReqDoAdmin->Location = System::Drawing::Point(129, 506);
			   this->butValidReqDoAdmin->Name = L"butValidReqDoAdmin";
			   this->butValidReqDoAdmin->Size = System::Drawing::Size(112, 37);
			   this->butValidReqDoAdmin->TabIndex = 23;
			   this->butValidReqDoAdmin->Text = L"Valid";
			   this->butValidReqDoAdmin->UseVisualStyleBackColor = false;
			   this->butValidReqDoAdmin->Click += gcnew System::EventHandler(this, &Home::butValidReqDoAdmin_Click);
			   // 
			   // butBackReqAdmin
			   // 
			   this->butBackReqAdmin->BackColor = System::Drawing::Color::Transparent;
			   this->butBackReqAdmin->FlatAppearance->BorderSize = 0;
			   this->butBackReqAdmin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butBackReqAdmin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->butBackReqAdmin->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->butBackReqAdmin->Location = System::Drawing::Point(305, 505);
			   this->butBackReqAdmin->Name = L"butBackReqAdmin";
			   this->butBackReqAdmin->Size = System::Drawing::Size(112, 36);
			   this->butBackReqAdmin->TabIndex = 22;
			   this->butBackReqAdmin->Text = L"Back";
			   this->butBackReqAdmin->UseVisualStyleBackColor = false;
			   this->butBackReqAdmin->Click += gcnew System::EventHandler(this, &Home::butBackReqAdmin_Click);
			   // 
			   // butNextReqAdmin
			   // 
			   this->butNextReqAdmin->BackColor = System::Drawing::Color::Transparent;
			   this->butNextReqAdmin->FlatAppearance->BorderColor = System::Drawing::Color::Aqua;
			   this->butNextReqAdmin->FlatAppearance->BorderSize = 0;
			   this->butNextReqAdmin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butNextReqAdmin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->butNextReqAdmin->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->butNextReqAdmin->Location = System::Drawing::Point(488, 507);
			   this->butNextReqAdmin->Name = L"butNextReqAdmin";
			   this->butNextReqAdmin->Size = System::Drawing::Size(108, 36);
			   this->butNextReqAdmin->TabIndex = 21;
			   this->butNextReqAdmin->Text = L"Next";
			   this->butNextReqAdmin->UseVisualStyleBackColor = false;
			   this->butNextReqAdmin->Click += gcnew System::EventHandler(this, &Home::butNextReqAdmin_Click);
			   // 
			   // labelAgeDoReqAdmin
			   // 
			   this->labelAgeDoReqAdmin->AutoSize = true;
			   this->labelAgeDoReqAdmin->BackColor = System::Drawing::Color::Transparent;
			   this->labelAgeDoReqAdmin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			   this->labelAgeDoReqAdmin->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				   static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(97)));
			   this->labelAgeDoReqAdmin->Location = System::Drawing::Point(53, 335);
			   this->labelAgeDoReqAdmin->Name = L"labelAgeDoReqAdmin";
			   this->labelAgeDoReqAdmin->Size = System::Drawing::Size(0, 25);
			   this->labelAgeDoReqAdmin->TabIndex = 17;
			   // 
			   // labelEmailDoReqAdmin
			   // 
			   this->labelEmailDoReqAdmin->AutoSize = true;
			   this->labelEmailDoReqAdmin->BackColor = System::Drawing::Color::Transparent;
			   this->labelEmailDoReqAdmin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			   this->labelEmailDoReqAdmin->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				   static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(97)));
			   this->labelEmailDoReqAdmin->Location = System::Drawing::Point(396, 183);
			   this->labelEmailDoReqAdmin->Name = L"labelEmailDoReqAdmin";
			   this->labelEmailDoReqAdmin->Size = System::Drawing::Size(0, 25);
			   this->labelEmailDoReqAdmin->TabIndex = 17;
			   // 
			   // labelBHosDoReqAdmin
			   // 
			   this->labelBHosDoReqAdmin->AutoSize = true;
			   this->labelBHosDoReqAdmin->BackColor = System::Drawing::Color::Transparent;
			   this->labelBHosDoReqAdmin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			   this->labelBHosDoReqAdmin->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				   static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(97)));
			   this->labelBHosDoReqAdmin->Location = System::Drawing::Point(53, 409);
			   this->labelBHosDoReqAdmin->Name = L"labelBHosDoReqAdmin";
			   this->labelBHosDoReqAdmin->Size = System::Drawing::Size(0, 25);
			   this->labelBHosDoReqAdmin->TabIndex = 17;
			   // 
			   // labelBloodDoReqAdmin
			   // 
			   this->labelBloodDoReqAdmin->AutoSize = true;
			   this->labelBloodDoReqAdmin->BackColor = System::Drawing::Color::Transparent;
			   this->labelBloodDoReqAdmin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			   this->labelBloodDoReqAdmin->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				   static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(97)));
			   this->labelBloodDoReqAdmin->Location = System::Drawing::Point(390, 338);
			   this->labelBloodDoReqAdmin->Name = L"labelBloodDoReqAdmin";
			   this->labelBloodDoReqAdmin->Size = System::Drawing::Size(0, 25);
			   this->labelBloodDoReqAdmin->TabIndex = 17;
			   // 
			   // labelDateDoReqAdmin
			   // 
			   this->labelDateDoReqAdmin->AutoSize = true;
			   this->labelDateDoReqAdmin->BackColor = System::Drawing::Color::Transparent;
			   this->labelDateDoReqAdmin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			   this->labelDateDoReqAdmin->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				   static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(97)));
			   this->labelDateDoReqAdmin->Location = System::Drawing::Point(396, 411);
			   this->labelDateDoReqAdmin->Name = L"labelDateDoReqAdmin";
			   this->labelDateDoReqAdmin->Size = System::Drawing::Size(0, 25);
			   this->labelDateDoReqAdmin->TabIndex = 14;
			   // 
			   // textBoxIdDoReqAdmin
			   // 
			   this->textBoxIdDoReqAdmin->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxIdDoReqAdmin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->textBoxIdDoReqAdmin->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				   static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(97)));
			   this->textBoxIdDoReqAdmin->Location = System::Drawing::Point(59, 183);
			   this->textBoxIdDoReqAdmin->Name = L"textBoxIdDoReqAdmin";
			   this->textBoxIdDoReqAdmin->Size = System::Drawing::Size(72, 23);
			   this->textBoxIdDoReqAdmin->TabIndex = 12;
			   // 
			   // labelLnameDoReqAdmin
			   // 
			   this->labelLnameDoReqAdmin->AutoSize = true;
			   this->labelLnameDoReqAdmin->BackColor = System::Drawing::Color::Transparent;
			   this->labelLnameDoReqAdmin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			   this->labelLnameDoReqAdmin->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				   static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(97)));
			   this->labelLnameDoReqAdmin->Location = System::Drawing::Point(396, 262);
			   this->labelLnameDoReqAdmin->Name = L"labelLnameDoReqAdmin";
			   this->labelLnameDoReqAdmin->Size = System::Drawing::Size(0, 25);
			   this->labelLnameDoReqAdmin->TabIndex = 8;
			   // 
			   // labelFnameDoReqAdmin
			   // 
			   this->labelFnameDoReqAdmin->AutoSize = true;
			   this->labelFnameDoReqAdmin->BackColor = System::Drawing::Color::Transparent;
			   this->labelFnameDoReqAdmin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			   this->labelFnameDoReqAdmin->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				   static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(97)));
			   this->labelFnameDoReqAdmin->Location = System::Drawing::Point(49, 261);
			   this->labelFnameDoReqAdmin->Name = L"labelFnameDoReqAdmin";
			   this->labelFnameDoReqAdmin->Size = System::Drawing::Size(0, 25);
			   this->labelFnameDoReqAdmin->TabIndex = 5;
			   // 
			   // panelReAdmin
			   // 
			   this->panelReAdmin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->panelReAdmin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelReAdmin.BackgroundImage")));
			   this->panelReAdmin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->panelReAdmin->Controls->Add(this->labelGenderAdminRe);
			   this->panelReAdmin->Controls->Add(this->butGenderAdminRe);
			   this->panelReAdmin->Controls->Add(this->butBackRcoReAdmin);
			   this->panelReAdmin->Controls->Add(this->butNextRcoReAdmin);
			   this->panelReAdmin->Controls->Add(this->butBloodeAdminRe);
			   this->panelReAdmin->Controls->Add(this->butHosAdminRe);
			   this->panelReAdmin->Controls->Add(this->butDocAdminRe);
			   this->panelReAdmin->Controls->Add(this->labelBloodeAdminRe);
			   this->panelReAdmin->Controls->Add(this->labelDocAdminRe);
			   this->panelReAdmin->Controls->Add(this->labelHosAdminRe);
			   this->panelReAdmin->Controls->Add(this->labelAgeAdminRe);
			   this->panelReAdmin->Controls->Add(this->butAgeAdminRe);
			   this->panelReAdmin->Controls->Add(this->textBoxIdAdminRe);
			   this->panelReAdmin->Controls->Add(this->butLnameAdminRe);
			   this->panelReAdmin->Controls->Add(this->butEmailAdminRe);
			   this->panelReAdmin->Controls->Add(this->butBPasAdminRe);
			   this->panelReAdmin->Controls->Add(this->labelLnameAdminRe);
			   this->panelReAdmin->Controls->Add(this->labelPasAdminRe);
			   this->panelReAdmin->Controls->Add(this->labelEmailAdminRe);
			   this->panelReAdmin->Controls->Add(this->labelFnameAdminRe);
			   this->panelReAdmin->Controls->Add(this->butFnameAdminRe);
			   this->panelReAdmin->Controls->Add(this->butInsertRe);
			   this->panelReAdmin->Controls->Add(this->butDelAcoAdminRe);
			   this->panelReAdmin->Location = System::Drawing::Point(203, 1);
			   this->panelReAdmin->Name = L"panelReAdmin";
			   this->panelReAdmin->Size = System::Drawing::Size(747, 600);
			   this->panelReAdmin->TabIndex = 23;
			   // 
			   // labelGenderAdminRe
			   // 
			   this->labelGenderAdminRe->AutoSize = true;
			   this->labelGenderAdminRe->BackColor = System::Drawing::Color::Transparent;
			   this->labelGenderAdminRe->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelGenderAdminRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				   static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(97)));
			   this->labelGenderAdminRe->Location = System::Drawing::Point(388, 160);
			   this->labelGenderAdminRe->Name = L"labelGenderAdminRe";
			   this->labelGenderAdminRe->Size = System::Drawing::Size(0, 27);
			   this->labelGenderAdminRe->TabIndex = 24;
			   // 
			   // butGenderAdminRe
			   // 
			   this->butGenderAdminRe->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->butGenderAdminRe->BackColor = System::Drawing::Color::Transparent;
			   this->butGenderAdminRe->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butGenderAdminRe.BackgroundImage")));
			   this->butGenderAdminRe->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butGenderAdminRe->FlatAppearance->BorderSize = 0;
			   this->butGenderAdminRe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butGenderAdminRe->Location = System::Drawing::Point(441, 156);
			   this->butGenderAdminRe->Name = L"butGenderAdminRe";
			   this->butGenderAdminRe->Size = System::Drawing::Size(27, 31);
			   this->butGenderAdminRe->TabIndex = 23;
			   this->butGenderAdminRe->Text = L" ";
			   this->butGenderAdminRe->UseVisualStyleBackColor = false;
			   this->butGenderAdminRe->Click += gcnew System::EventHandler(this, &Home::butGenderAdminRe_Click);
			   // 
			   // butBackRcoReAdmin
			   // 
			   this->butBackRcoReAdmin->BackColor = System::Drawing::Color::Transparent;
			   this->butBackRcoReAdmin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butBackRcoReAdmin.BackgroundImage")));
			   this->butBackRcoReAdmin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->butBackRcoReAdmin->FlatAppearance->BorderSize = 0;
			   this->butBackRcoReAdmin->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Aqua;
			   this->butBackRcoReAdmin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butBackRcoReAdmin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->butBackRcoReAdmin->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->butBackRcoReAdmin->Location = System::Drawing::Point(365, 549);
			   this->butBackRcoReAdmin->Name = L"butBackRcoReAdmin";
			   this->butBackRcoReAdmin->Size = System::Drawing::Size(75, 36);
			   this->butBackRcoReAdmin->TabIndex = 22;
			   this->butBackRcoReAdmin->Text = L"Back";
			   this->butBackRcoReAdmin->UseVisualStyleBackColor = false;
			   this->butBackRcoReAdmin->Click += gcnew System::EventHandler(this, &Home::butBackRcoReAdmin_Click);
			   // 
			   // butNextRcoReAdmin
			   // 
			   this->butNextRcoReAdmin->BackColor = System::Drawing::Color::Transparent;
			   this->butNextRcoReAdmin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butNextRcoReAdmin.BackgroundImage")));
			   this->butNextRcoReAdmin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->butNextRcoReAdmin->FlatAppearance->BorderSize = 0;
			   this->butNextRcoReAdmin->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Aqua;
			   this->butNextRcoReAdmin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butNextRcoReAdmin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->butNextRcoReAdmin->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->butNextRcoReAdmin->Location = System::Drawing::Point(522, 549);
			   this->butNextRcoReAdmin->Name = L"butNextRcoReAdmin";
			   this->butNextRcoReAdmin->Size = System::Drawing::Size(75, 36);
			   this->butNextRcoReAdmin->TabIndex = 21;
			   this->butNextRcoReAdmin->Text = L"Next";
			   this->butNextRcoReAdmin->UseVisualStyleBackColor = false;
			   this->butNextRcoReAdmin->Click += gcnew System::EventHandler(this, &Home::butNextRcoReAdmin_Click);
			   // 
			   // butBloodeAdminRe
			   // 
			   this->butBloodeAdminRe->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->butBloodeAdminRe->BackColor = System::Drawing::Color::Transparent;
			   this->butBloodeAdminRe->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butBloodeAdminRe.BackgroundImage")));
			   this->butBloodeAdminRe->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butBloodeAdminRe->FlatAppearance->BorderSize = 0;
			   this->butBloodeAdminRe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butBloodeAdminRe->Location = System::Drawing::Point(666, 314);
			   this->butBloodeAdminRe->Name = L"butBloodeAdminRe";
			   this->butBloodeAdminRe->Size = System::Drawing::Size(27, 29);
			   this->butBloodeAdminRe->TabIndex = 20;
			   this->butBloodeAdminRe->Text = L" ";
			   this->butBloodeAdminRe->UseVisualStyleBackColor = false;
			   this->butBloodeAdminRe->Click += gcnew System::EventHandler(this, &Home::butBloodeAdminRe_Click);
			   // 
			   // butHosAdminRe
			   // 
			   this->butHosAdminRe->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->butHosAdminRe->BackColor = System::Drawing::Color::Transparent;
			   this->butHosAdminRe->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butHosAdminRe.BackgroundImage")));
			   this->butHosAdminRe->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butHosAdminRe->FlatAppearance->BorderSize = 0;
			   this->butHosAdminRe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butHosAdminRe->Location = System::Drawing::Point(666, 384);
			   this->butHosAdminRe->Name = L"butHosAdminRe";
			   this->butHosAdminRe->Size = System::Drawing::Size(27, 34);
			   this->butHosAdminRe->TabIndex = 19;
			   this->butHosAdminRe->Text = L" ";
			   this->butHosAdminRe->UseVisualStyleBackColor = false;
			   this->butHosAdminRe->Click += gcnew System::EventHandler(this, &Home::butHosAdminRe_Click);
			   // 
			   // butDocAdminRe
			   // 
			   this->butDocAdminRe->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->butDocAdminRe->BackColor = System::Drawing::Color::Transparent;
			   this->butDocAdminRe->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butDocAdminRe.BackgroundImage")));
			   this->butDocAdminRe->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butDocAdminRe->FlatAppearance->BorderSize = 0;
			   this->butDocAdminRe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butDocAdminRe->Location = System::Drawing::Point(666, 462);
			   this->butDocAdminRe->Name = L"butDocAdminRe";
			   this->butDocAdminRe->Size = System::Drawing::Size(27, 38);
			   this->butDocAdminRe->TabIndex = 18;
			   this->butDocAdminRe->Text = L" ";
			   this->butDocAdminRe->UseVisualStyleBackColor = false;
			   this->butDocAdminRe->Click += gcnew System::EventHandler(this, &Home::butDocAdminRe_Click);
			   // 
			   // labelBloodeAdminRe
			   // 
			   this->labelBloodeAdminRe->AutoSize = true;
			   this->labelBloodeAdminRe->BackColor = System::Drawing::Color::Transparent;
			   this->labelBloodeAdminRe->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelBloodeAdminRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				   static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(97)));
			   this->labelBloodeAdminRe->Location = System::Drawing::Point(393, 318);
			   this->labelBloodeAdminRe->Name = L"labelBloodeAdminRe";
			   this->labelBloodeAdminRe->Size = System::Drawing::Size(0, 27);
			   this->labelBloodeAdminRe->TabIndex = 17;
			   // 
			   // labelDocAdminRe
			   // 
			   this->labelDocAdminRe->AutoSize = true;
			   this->labelDocAdminRe->BackColor = System::Drawing::Color::Transparent;
			   this->labelDocAdminRe->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelDocAdminRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				   static_cast<System::Int32>(static_cast<System::Byte>(97)));
			   this->labelDocAdminRe->Location = System::Drawing::Point(393, 471);
			   this->labelDocAdminRe->Name = L"labelDocAdminRe";
			   this->labelDocAdminRe->Size = System::Drawing::Size(0, 27);
			   this->labelDocAdminRe->TabIndex = 16;
			   // 
			   // labelHosAdminRe
			   // 
			   this->labelHosAdminRe->AutoSize = true;
			   this->labelHosAdminRe->BackColor = System::Drawing::Color::Transparent;
			   this->labelHosAdminRe->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelHosAdminRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				   static_cast<System::Int32>(static_cast<System::Byte>(97)));
			   this->labelHosAdminRe->Location = System::Drawing::Point(391, 393);
			   this->labelHosAdminRe->Name = L"labelHosAdminRe";
			   this->labelHosAdminRe->Size = System::Drawing::Size(0, 27);
			   this->labelHosAdminRe->TabIndex = 15;
			   // 
			   // labelAgeAdminRe
			   // 
			   this->labelAgeAdminRe->AutoSize = true;
			   this->labelAgeAdminRe->BackColor = System::Drawing::Color::Transparent;
			   this->labelAgeAdminRe->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelAgeAdminRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				   static_cast<System::Int32>(static_cast<System::Byte>(97)));
			   this->labelAgeAdminRe->Location = System::Drawing::Point(393, 240);
			   this->labelAgeAdminRe->Name = L"labelAgeAdminRe";
			   this->labelAgeAdminRe->Size = System::Drawing::Size(0, 27);
			   this->labelAgeAdminRe->TabIndex = 14;
			   // 
			   // butAgeAdminRe
			   // 
			   this->butAgeAdminRe->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->butAgeAdminRe->BackColor = System::Drawing::Color::Transparent;
			   this->butAgeAdminRe->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butAgeAdminRe.BackgroundImage")));
			   this->butAgeAdminRe->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butAgeAdminRe->FlatAppearance->BorderSize = 0;
			   this->butAgeAdminRe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butAgeAdminRe->Location = System::Drawing::Point(666, 238);
			   this->butAgeAdminRe->Name = L"butAgeAdminRe";
			   this->butAgeAdminRe->Size = System::Drawing::Size(27, 31);
			   this->butAgeAdminRe->TabIndex = 13;
			   this->butAgeAdminRe->Text = L" ";
			   this->butAgeAdminRe->UseVisualStyleBackColor = false;
			   this->butAgeAdminRe->Click += gcnew System::EventHandler(this, &Home::butAgeAdminRe_Click);
			   // 
			   // textBoxIdAdminRe
			   // 
			   this->textBoxIdAdminRe->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxIdAdminRe->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->textBoxIdAdminRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				   static_cast<System::Int32>(static_cast<System::Byte>(97)));
			   this->textBoxIdAdminRe->Location = System::Drawing::Point(57, 150);
			   this->textBoxIdAdminRe->Name = L"textBoxIdAdminRe";
			   this->textBoxIdAdminRe->Size = System::Drawing::Size(38, 26);
			   this->textBoxIdAdminRe->TabIndex = 12;
			   // 
			   // butLnameAdminRe
			   // 
			   this->butLnameAdminRe->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->butLnameAdminRe->BackColor = System::Drawing::Color::Transparent;
			   this->butLnameAdminRe->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butLnameAdminRe.BackgroundImage")));
			   this->butLnameAdminRe->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butLnameAdminRe->FlatAppearance->BorderSize = 0;
			   this->butLnameAdminRe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butLnameAdminRe->Location = System::Drawing::Point(322, 311);
			   this->butLnameAdminRe->Name = L"butLnameAdminRe";
			   this->butLnameAdminRe->Size = System::Drawing::Size(27, 29);
			   this->butLnameAdminRe->TabIndex = 11;
			   this->butLnameAdminRe->Text = L" ";
			   this->butLnameAdminRe->UseVisualStyleBackColor = false;
			   this->butLnameAdminRe->Click += gcnew System::EventHandler(this, &Home::butLnameAdminRe_Click);
			   // 
			   // butEmailAdminRe
			   // 
			   this->butEmailAdminRe->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->butEmailAdminRe->BackColor = System::Drawing::Color::Transparent;
			   this->butEmailAdminRe->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butEmailAdminRe.BackgroundImage")));
			   this->butEmailAdminRe->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butEmailAdminRe->FlatAppearance->BorderSize = 0;
			   this->butEmailAdminRe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butEmailAdminRe->Location = System::Drawing::Point(322, 387);
			   this->butEmailAdminRe->Name = L"butEmailAdminRe";
			   this->butEmailAdminRe->Size = System::Drawing::Size(27, 34);
			   this->butEmailAdminRe->TabIndex = 10;
			   this->butEmailAdminRe->Text = L" ";
			   this->butEmailAdminRe->UseVisualStyleBackColor = false;
			   this->butEmailAdminRe->Click += gcnew System::EventHandler(this, &Home::butEmailAdminRe_Click);
			   // 
			   // butBPasAdminRe
			   // 
			   this->butBPasAdminRe->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->butBPasAdminRe->BackColor = System::Drawing::Color::Transparent;
			   this->butBPasAdminRe->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butBPasAdminRe.BackgroundImage")));
			   this->butBPasAdminRe->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butBPasAdminRe->FlatAppearance->BorderSize = 0;
			   this->butBPasAdminRe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butBPasAdminRe->Location = System::Drawing::Point(322, 462);
			   this->butBPasAdminRe->Name = L"butBPasAdminRe";
			   this->butBPasAdminRe->Size = System::Drawing::Size(27, 38);
			   this->butBPasAdminRe->TabIndex = 9;
			   this->butBPasAdminRe->Text = L" ";
			   this->butBPasAdminRe->UseVisualStyleBackColor = false;
			   this->butBPasAdminRe->Click += gcnew System::EventHandler(this, &Home::butBPasAdminRe_Click);
			   // 
			   // labelLnameAdminRe
			   // 
			   this->labelLnameAdminRe->AutoSize = true;
			   this->labelLnameAdminRe->BackColor = System::Drawing::Color::Transparent;
			   this->labelLnameAdminRe->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelLnameAdminRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				   static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(97)));
			   this->labelLnameAdminRe->Location = System::Drawing::Point(53, 314);
			   this->labelLnameAdminRe->Name = L"labelLnameAdminRe";
			   this->labelLnameAdminRe->Size = System::Drawing::Size(0, 27);
			   this->labelLnameAdminRe->TabIndex = 8;
			   // 
			   // labelPasAdminRe
			   // 
			   this->labelPasAdminRe->AutoSize = true;
			   this->labelPasAdminRe->BackColor = System::Drawing::Color::Transparent;
			   this->labelPasAdminRe->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelPasAdminRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				   static_cast<System::Int32>(static_cast<System::Byte>(97)));
			   this->labelPasAdminRe->Location = System::Drawing::Point(54, 469);
			   this->labelPasAdminRe->Name = L"labelPasAdminRe";
			   this->labelPasAdminRe->Size = System::Drawing::Size(0, 27);
			   this->labelPasAdminRe->TabIndex = 7;
			   // 
			   // labelEmailAdminRe
			   // 
			   this->labelEmailAdminRe->AutoSize = true;
			   this->labelEmailAdminRe->BackColor = System::Drawing::Color::Transparent;
			   this->labelEmailAdminRe->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelEmailAdminRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				   static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(97)));
			   this->labelEmailAdminRe->Location = System::Drawing::Point(54, 394);
			   this->labelEmailAdminRe->Name = L"labelEmailAdminRe";
			   this->labelEmailAdminRe->Size = System::Drawing::Size(0, 27);
			   this->labelEmailAdminRe->TabIndex = 6;
			   // 
			   // labelFnameAdminRe
			   // 
			   this->labelFnameAdminRe->AutoSize = true;
			   this->labelFnameAdminRe->BackColor = System::Drawing::Color::Transparent;
			   this->labelFnameAdminRe->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelFnameAdminRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				   static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(97)));
			   this->labelFnameAdminRe->Location = System::Drawing::Point(54, 240);
			   this->labelFnameAdminRe->Name = L"labelFnameAdminRe";
			   this->labelFnameAdminRe->Size = System::Drawing::Size(0, 27);
			   this->labelFnameAdminRe->TabIndex = 5;
			   // 
			   // butFnameAdminRe
			   // 
			   this->butFnameAdminRe->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->butFnameAdminRe->BackColor = System::Drawing::Color::Transparent;
			   this->butFnameAdminRe->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butFnameAdminRe.BackgroundImage")));
			   this->butFnameAdminRe->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butFnameAdminRe->FlatAppearance->BorderSize = 0;
			   this->butFnameAdminRe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butFnameAdminRe->Location = System::Drawing::Point(322, 237);
			   this->butFnameAdminRe->Name = L"butFnameAdminRe";
			   this->butFnameAdminRe->Size = System::Drawing::Size(27, 31);
			   this->butFnameAdminRe->TabIndex = 4;
			   this->butFnameAdminRe->Text = L" ";
			   this->butFnameAdminRe->UseVisualStyleBackColor = false;
			   this->butFnameAdminRe->Click += gcnew System::EventHandler(this, &Home::butFnameAdminRe_Click);
			   // 
			   // butInsertRe
			   // 
			   this->butInsertRe->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->butInsertRe->BackColor = System::Drawing::Color::Transparent;
			   this->butInsertRe->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butInsertRe.BackgroundImage")));
			   this->butInsertRe->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butInsertRe->FlatAppearance->BorderSize = 0;
			   this->butInsertRe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butInsertRe->Location = System::Drawing::Point(91, 549);
			   this->butInsertRe->Name = L"butInsertRe";
			   this->butInsertRe->Size = System::Drawing::Size(40, 43);
			   this->butInsertRe->TabIndex = 2;
			   this->butInsertRe->UseVisualStyleBackColor = false;
			   this->butInsertRe->Click += gcnew System::EventHandler(this, &Home::butInsertRe_Click);
			   // 
			   // butDelAcoAdminRe
			   // 
			   this->butDelAcoAdminRe->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->butDelAcoAdminRe->BackColor = System::Drawing::Color::Transparent;
			   this->butDelAcoAdminRe->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butDelAcoAdminRe.BackgroundImage")));
			   this->butDelAcoAdminRe->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butDelAcoAdminRe->FlatAppearance->BorderSize = 0;
			   this->butDelAcoAdminRe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butDelAcoAdminRe->Location = System::Drawing::Point(27, 548);
			   this->butDelAcoAdminRe->Name = L"butDelAcoAdminRe";
			   this->butDelAcoAdminRe->Size = System::Drawing::Size(53, 44);
			   this->butDelAcoAdminRe->TabIndex = 1;
			   this->butDelAcoAdminRe->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			   this->butDelAcoAdminRe->UseVisualStyleBackColor = false;
			   this->butDelAcoAdminRe->Click += gcnew System::EventHandler(this, &Home::butDelAcoAdminDo_Click);
			   // 
			   // panelDoAdmin
			   // 
			   this->panelDoAdmin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->panelDoAdmin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelDoAdmin.BackgroundImage")));
			   this->panelDoAdmin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->panelDoAdmin->Controls->Add(this->labelGenderAdminDo);
			   this->panelDoAdmin->Controls->Add(this->butGenderAdminDo);
			   this->panelDoAdmin->Controls->Add(this->butBackRcoDoAdmin);
			   this->panelDoAdmin->Controls->Add(this->butNextRcoDoAdmin);
			   this->panelDoAdmin->Controls->Add(this->butBloodeAdminDo);
			   this->panelDoAdmin->Controls->Add(this->butLastDonAdminDo);
			   this->panelDoAdmin->Controls->Add(this->butDisAdminDo);
			   this->panelDoAdmin->Controls->Add(this->labelBloodeAdminDo);
			   this->panelDoAdmin->Controls->Add(this->labelDisAdminDo);
			   this->panelDoAdmin->Controls->Add(this->labelLastDonAdminDo);
			   this->panelDoAdmin->Controls->Add(this->labelAgeAdminDo);
			   this->panelDoAdmin->Controls->Add(this->butAgeAdminDo);
			   this->panelDoAdmin->Controls->Add(this->textBoxIdAdminDo);
			   this->panelDoAdmin->Controls->Add(this->butLnameAdminDo);
			   this->panelDoAdmin->Controls->Add(this->butEmailnameAdminDo);
			   this->panelDoAdmin->Controls->Add(this->butPasAdminDo);
			   this->panelDoAdmin->Controls->Add(this->labelLnameAdminDo);
			   this->panelDoAdmin->Controls->Add(this->labelPasAdminDo);
			   this->panelDoAdmin->Controls->Add(this->labelEmailAdminDo);
			   this->panelDoAdmin->Controls->Add(this->labelFnameAdminDo);
			   this->panelDoAdmin->Controls->Add(this->butFnameAdminDo);
			   this->panelDoAdmin->Controls->Add(this->butInsertAdminDo);
			   this->panelDoAdmin->Controls->Add(this->butDelAcoAdminDo);
			   this->panelDoAdmin->Location = System::Drawing::Point(205, 0);
			   this->panelDoAdmin->Name = L"panelDoAdmin";
			   this->panelDoAdmin->Size = System::Drawing::Size(745, 601);
			   this->panelDoAdmin->TabIndex = 1;
			   // 
			   // labelGenderAdminDo
			   // 
			   this->labelGenderAdminDo->AutoSize = true;
			   this->labelGenderAdminDo->BackColor = System::Drawing::Color::Transparent;
			   this->labelGenderAdminDo->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelGenderAdminDo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				   static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(97)));
			   this->labelGenderAdminDo->Location = System::Drawing::Point(382, 159);
			   this->labelGenderAdminDo->Name = L"labelGenderAdminDo";
			   this->labelGenderAdminDo->Size = System::Drawing::Size(0, 27);
			   this->labelGenderAdminDo->TabIndex = 24;
			   // 
			   // butGenderAdminDo
			   // 
			   this->butGenderAdminDo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->butGenderAdminDo->BackColor = System::Drawing::Color::Transparent;
			   this->butGenderAdminDo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butGenderAdminDo.BackgroundImage")));
			   this->butGenderAdminDo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butGenderAdminDo->FlatAppearance->BorderSize = 0;
			   this->butGenderAdminDo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butGenderAdminDo->Location = System::Drawing::Point(441, 157);
			   this->butGenderAdminDo->Name = L"butGenderAdminDo";
			   this->butGenderAdminDo->Size = System::Drawing::Size(27, 31);
			   this->butGenderAdminDo->TabIndex = 23;
			   this->butGenderAdminDo->Text = L" ";
			   this->butGenderAdminDo->UseVisualStyleBackColor = false;
			   this->butGenderAdminDo->Click += gcnew System::EventHandler(this, &Home::butGenderAdminDo_Click);
			   // 
			   // butBackRcoDoAdmin
			   // 
			   this->butBackRcoDoAdmin->BackColor = System::Drawing::Color::Transparent;
			   this->butBackRcoDoAdmin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butBackRcoDoAdmin.BackgroundImage")));
			   this->butBackRcoDoAdmin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->butBackRcoDoAdmin->FlatAppearance->BorderSize = 0;
			   this->butBackRcoDoAdmin->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Aqua;
			   this->butBackRcoDoAdmin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butBackRcoDoAdmin->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->butBackRcoDoAdmin->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->butBackRcoDoAdmin->Location = System::Drawing::Point(282, 541);
			   this->butBackRcoDoAdmin->Name = L"butBackRcoDoAdmin";
			   this->butBackRcoDoAdmin->Size = System::Drawing::Size(120, 38);
			   this->butBackRcoDoAdmin->TabIndex = 22;
			   this->butBackRcoDoAdmin->Text = L"Back";
			   this->butBackRcoDoAdmin->UseVisualStyleBackColor = false;
			   this->butBackRcoDoAdmin->Click += gcnew System::EventHandler(this, &Home::butBackRcoDoAdmin_Click);
			   // 
			   // butNextRcoDoAdmin
			   // 
			   this->butNextRcoDoAdmin->BackColor = System::Drawing::Color::Transparent;
			   this->butNextRcoDoAdmin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butNextRcoDoAdmin.BackgroundImage")));
			   this->butNextRcoDoAdmin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->butNextRcoDoAdmin->FlatAppearance->BorderSize = 0;
			   this->butNextRcoDoAdmin->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Aqua;
			   this->butNextRcoDoAdmin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butNextRcoDoAdmin->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->butNextRcoDoAdmin->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->butNextRcoDoAdmin->Location = System::Drawing::Point(468, 541);
			   this->butNextRcoDoAdmin->Name = L"butNextRcoDoAdmin";
			   this->butNextRcoDoAdmin->Size = System::Drawing::Size(126, 36);
			   this->butNextRcoDoAdmin->TabIndex = 21;
			   this->butNextRcoDoAdmin->Text = L"Next";
			   this->butNextRcoDoAdmin->UseVisualStyleBackColor = false;
			   this->butNextRcoDoAdmin->Click += gcnew System::EventHandler(this, &Home::butNextRcoDoAdmin_Click);
			   // 
			   // butBloodeAdminDo
			   // 
			   this->butBloodeAdminDo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->butBloodeAdminDo->BackColor = System::Drawing::Color::Transparent;
			   this->butBloodeAdminDo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butBloodeAdminDo.BackgroundImage")));
			   this->butBloodeAdminDo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butBloodeAdminDo->FlatAppearance->BorderSize = 0;
			   this->butBloodeAdminDo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butBloodeAdminDo->Location = System::Drawing::Point(666, 315);
			   this->butBloodeAdminDo->Name = L"butBloodeAdminDo";
			   this->butBloodeAdminDo->Size = System::Drawing::Size(27, 29);
			   this->butBloodeAdminDo->TabIndex = 20;
			   this->butBloodeAdminDo->Text = L" ";
			   this->butBloodeAdminDo->UseVisualStyleBackColor = false;
			   this->butBloodeAdminDo->Click += gcnew System::EventHandler(this, &Home::butBloodeAdminDo_Click);
			   // 
			   // butLastDonAdminDo
			   // 
			   this->butLastDonAdminDo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->butLastDonAdminDo->BackColor = System::Drawing::Color::Transparent;
			   this->butLastDonAdminDo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butLastDonAdminDo.BackgroundImage")));
			   this->butLastDonAdminDo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butLastDonAdminDo->FlatAppearance->BorderSize = 0;
			   this->butLastDonAdminDo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butLastDonAdminDo->Location = System::Drawing::Point(666, 385);
			   this->butLastDonAdminDo->Name = L"butLastDonAdminDo";
			   this->butLastDonAdminDo->Size = System::Drawing::Size(27, 34);
			   this->butLastDonAdminDo->TabIndex = 19;
			   this->butLastDonAdminDo->Text = L" ";
			   this->butLastDonAdminDo->UseVisualStyleBackColor = false;
			   this->butLastDonAdminDo->Click += gcnew System::EventHandler(this, &Home::butLastDonAdminDo_Click);
			   // 
			   // butDisAdminDo
			   // 
			   this->butDisAdminDo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->butDisAdminDo->BackColor = System::Drawing::Color::Transparent;
			   this->butDisAdminDo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butDisAdminDo.BackgroundImage")));
			   this->butDisAdminDo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butDisAdminDo->FlatAppearance->BorderSize = 0;
			   this->butDisAdminDo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butDisAdminDo->Location = System::Drawing::Point(666, 463);
			   this->butDisAdminDo->Name = L"butDisAdminDo";
			   this->butDisAdminDo->Size = System::Drawing::Size(27, 38);
			   this->butDisAdminDo->TabIndex = 18;
			   this->butDisAdminDo->Text = L" ";
			   this->butDisAdminDo->UseVisualStyleBackColor = false;
			   this->butDisAdminDo->Click += gcnew System::EventHandler(this, &Home::butDisAdminDo_Click);
			   // 
			   // labelBloodeAdminDo
			   // 
			   this->labelBloodeAdminDo->AutoSize = true;
			   this->labelBloodeAdminDo->BackColor = System::Drawing::Color::Transparent;
			   this->labelBloodeAdminDo->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelBloodeAdminDo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				   static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(97)));
			   this->labelBloodeAdminDo->Location = System::Drawing::Point(391, 317);
			   this->labelBloodeAdminDo->Name = L"labelBloodeAdminDo";
			   this->labelBloodeAdminDo->Size = System::Drawing::Size(0, 27);
			   this->labelBloodeAdminDo->TabIndex = 17;
			   // 
			   // labelDisAdminDo
			   // 
			   this->labelDisAdminDo->AutoSize = true;
			   this->labelDisAdminDo->BackColor = System::Drawing::Color::Transparent;
			   this->labelDisAdminDo->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelDisAdminDo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				   static_cast<System::Int32>(static_cast<System::Byte>(97)));
			   this->labelDisAdminDo->Location = System::Drawing::Point(391, 470);
			   this->labelDisAdminDo->Name = L"labelDisAdminDo";
			   this->labelDisAdminDo->Size = System::Drawing::Size(0, 27);
			   this->labelDisAdminDo->TabIndex = 16;
			   // 
			   // labelLastDonAdminDo
			   // 
			   this->labelLastDonAdminDo->AutoSize = true;
			   this->labelLastDonAdminDo->BackColor = System::Drawing::Color::Transparent;
			   this->labelLastDonAdminDo->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelLastDonAdminDo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				   static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(97)));
			   this->labelLastDonAdminDo->Location = System::Drawing::Point(385, 392);
			   this->labelLastDonAdminDo->Name = L"labelLastDonAdminDo";
			   this->labelLastDonAdminDo->Size = System::Drawing::Size(0, 27);
			   this->labelLastDonAdminDo->TabIndex = 15;
			   // 
			   // labelAgeAdminDo
			   // 
			   this->labelAgeAdminDo->AutoSize = true;
			   this->labelAgeAdminDo->BackColor = System::Drawing::Color::Transparent;
			   this->labelAgeAdminDo->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelAgeAdminDo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				   static_cast<System::Int32>(static_cast<System::Byte>(97)));
			   this->labelAgeAdminDo->Location = System::Drawing::Point(391, 239);
			   this->labelAgeAdminDo->Name = L"labelAgeAdminDo";
			   this->labelAgeAdminDo->Size = System::Drawing::Size(0, 27);
			   this->labelAgeAdminDo->TabIndex = 14;
			   // 
			   // butAgeAdminDo
			   // 
			   this->butAgeAdminDo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->butAgeAdminDo->BackColor = System::Drawing::Color::Transparent;
			   this->butAgeAdminDo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butAgeAdminDo.BackgroundImage")));
			   this->butAgeAdminDo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butAgeAdminDo->FlatAppearance->BorderSize = 0;
			   this->butAgeAdminDo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butAgeAdminDo->Location = System::Drawing::Point(666, 239);
			   this->butAgeAdminDo->Name = L"butAgeAdminDo";
			   this->butAgeAdminDo->Size = System::Drawing::Size(27, 31);
			   this->butAgeAdminDo->TabIndex = 13;
			   this->butAgeAdminDo->Text = L" ";
			   this->butAgeAdminDo->UseVisualStyleBackColor = false;
			   this->butAgeAdminDo->Click += gcnew System::EventHandler(this, &Home::butAgeAdminDo_Click);
			   // 
			   // textBoxIdAdminDo
			   // 
			   this->textBoxIdAdminDo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBoxIdAdminDo->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->textBoxIdAdminDo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				   static_cast<System::Int32>(static_cast<System::Byte>(97)));
			   this->textBoxIdAdminDo->Location = System::Drawing::Point(57, 150);
			   this->textBoxIdAdminDo->Name = L"textBoxIdAdminDo";
			   this->textBoxIdAdminDo->Size = System::Drawing::Size(38, 26);
			   this->textBoxIdAdminDo->TabIndex = 12;
			   this->textBoxIdAdminDo->TextChanged += gcnew System::EventHandler(this, &Home::textBoxIdAdminDo_TextChanged);
			   // 
			   // butLnameAdminDo
			   // 
			   this->butLnameAdminDo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->butLnameAdminDo->BackColor = System::Drawing::Color::Transparent;
			   this->butLnameAdminDo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butLnameAdminDo.BackgroundImage")));
			   this->butLnameAdminDo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butLnameAdminDo->FlatAppearance->BorderSize = 0;
			   this->butLnameAdminDo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butLnameAdminDo->Location = System::Drawing::Point(322, 312);
			   this->butLnameAdminDo->Name = L"butLnameAdminDo";
			   this->butLnameAdminDo->Size = System::Drawing::Size(27, 29);
			   this->butLnameAdminDo->TabIndex = 11;
			   this->butLnameAdminDo->Text = L" ";
			   this->butLnameAdminDo->UseVisualStyleBackColor = false;
			   this->butLnameAdminDo->Click += gcnew System::EventHandler(this, &Home::butLnameAdminDo_Click);
			   // 
			   // butEmailnameAdminDo
			   // 
			   this->butEmailnameAdminDo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->butEmailnameAdminDo->BackColor = System::Drawing::Color::Transparent;
			   this->butEmailnameAdminDo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butEmailnameAdminDo.BackgroundImage")));
			   this->butEmailnameAdminDo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butEmailnameAdminDo->FlatAppearance->BorderSize = 0;
			   this->butEmailnameAdminDo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butEmailnameAdminDo->Location = System::Drawing::Point(322, 388);
			   this->butEmailnameAdminDo->Name = L"butEmailnameAdminDo";
			   this->butEmailnameAdminDo->Size = System::Drawing::Size(27, 34);
			   this->butEmailnameAdminDo->TabIndex = 10;
			   this->butEmailnameAdminDo->Text = L" ";
			   this->butEmailnameAdminDo->UseVisualStyleBackColor = false;
			   this->butEmailnameAdminDo->Click += gcnew System::EventHandler(this, &Home::butEmailnameAdminDo_Click);
			   // 
			   // butPasAdminDo
			   // 
			   this->butPasAdminDo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->butPasAdminDo->BackColor = System::Drawing::Color::Transparent;
			   this->butPasAdminDo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butPasAdminDo.BackgroundImage")));
			   this->butPasAdminDo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butPasAdminDo->FlatAppearance->BorderSize = 0;
			   this->butPasAdminDo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butPasAdminDo->Location = System::Drawing::Point(322, 463);
			   this->butPasAdminDo->Name = L"butPasAdminDo";
			   this->butPasAdminDo->Size = System::Drawing::Size(27, 38);
			   this->butPasAdminDo->TabIndex = 9;
			   this->butPasAdminDo->Text = L" ";
			   this->butPasAdminDo->UseVisualStyleBackColor = false;
			   this->butPasAdminDo->Click += gcnew System::EventHandler(this, &Home::butPasAdminDo_Click);
			   // 
			   // labelLnameAdminDo
			   // 
			   this->labelLnameAdminDo->AutoSize = true;
			   this->labelLnameAdminDo->BackColor = System::Drawing::Color::Transparent;
			   this->labelLnameAdminDo->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelLnameAdminDo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				   static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(97)));
			   this->labelLnameAdminDo->Location = System::Drawing::Point(51, 313);
			   this->labelLnameAdminDo->Name = L"labelLnameAdminDo";
			   this->labelLnameAdminDo->Size = System::Drawing::Size(0, 27);
			   this->labelLnameAdminDo->TabIndex = 8;
			   // 
			   // labelPasAdminDo
			   // 
			   this->labelPasAdminDo->AutoSize = true;
			   this->labelPasAdminDo->BackColor = System::Drawing::Color::Transparent;
			   this->labelPasAdminDo->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelPasAdminDo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				   static_cast<System::Int32>(static_cast<System::Byte>(97)));
			   this->labelPasAdminDo->Location = System::Drawing::Point(52, 468);
			   this->labelPasAdminDo->Name = L"labelPasAdminDo";
			   this->labelPasAdminDo->Size = System::Drawing::Size(0, 27);
			   this->labelPasAdminDo->TabIndex = 7;
			   // 
			   // labelEmailAdminDo
			   // 
			   this->labelEmailAdminDo->AutoSize = true;
			   this->labelEmailAdminDo->BackColor = System::Drawing::Color::Transparent;
			   this->labelEmailAdminDo->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelEmailAdminDo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				   static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(97)));
			   this->labelEmailAdminDo->Location = System::Drawing::Point(52, 393);
			   this->labelEmailAdminDo->Name = L"labelEmailAdminDo";
			   this->labelEmailAdminDo->Size = System::Drawing::Size(0, 27);
			   this->labelEmailAdminDo->TabIndex = 6;
			   // 
			   // labelFnameAdminDo
			   // 
			   this->labelFnameAdminDo->AutoSize = true;
			   this->labelFnameAdminDo->BackColor = System::Drawing::Color::Transparent;
			   this->labelFnameAdminDo->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelFnameAdminDo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				   static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(97)));
			   this->labelFnameAdminDo->Location = System::Drawing::Point(52, 239);
			   this->labelFnameAdminDo->Name = L"labelFnameAdminDo";
			   this->labelFnameAdminDo->Size = System::Drawing::Size(0, 27);
			   this->labelFnameAdminDo->TabIndex = 5;
			   // 
			   // butFnameAdminDo
			   // 
			   this->butFnameAdminDo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->butFnameAdminDo->BackColor = System::Drawing::Color::Transparent;
			   this->butFnameAdminDo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butFnameAdminDo.BackgroundImage")));
			   this->butFnameAdminDo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butFnameAdminDo->FlatAppearance->BorderSize = 0;
			   this->butFnameAdminDo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butFnameAdminDo->Location = System::Drawing::Point(322, 238);
			   this->butFnameAdminDo->Name = L"butFnameAdminDo";
			   this->butFnameAdminDo->Size = System::Drawing::Size(27, 31);
			   this->butFnameAdminDo->TabIndex = 4;
			   this->butFnameAdminDo->Text = L" ";
			   this->butFnameAdminDo->UseVisualStyleBackColor = false;
			   this->butFnameAdminDo->Click += gcnew System::EventHandler(this, &Home::butFnameAdminDo_Click);
			   // 
			   // butInsertAdminDo
			   // 
			   this->butInsertAdminDo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->butInsertAdminDo->BackColor = System::Drawing::Color::Transparent;
			   this->butInsertAdminDo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butInsertAdminDo.BackgroundImage")));
			   this->butInsertAdminDo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butInsertAdminDo->FlatAppearance->BorderSize = 0;
			   this->butInsertAdminDo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butInsertAdminDo->Location = System::Drawing::Point(101, 542);
			   this->butInsertAdminDo->Name = L"butInsertAdminDo";
			   this->butInsertAdminDo->Size = System::Drawing::Size(50, 51);
			   this->butInsertAdminDo->TabIndex = 2;
			   this->butInsertAdminDo->UseVisualStyleBackColor = false;
			   this->butInsertAdminDo->Click += gcnew System::EventHandler(this, &Home::butInsertAdminDo_Click);
			   // 
			   // butDelAcoAdminDo
			   // 
			   this->butDelAcoAdminDo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->butDelAcoAdminDo->BackColor = System::Drawing::Color::Transparent;
			   this->butDelAcoAdminDo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butDelAcoAdminDo.BackgroundImage")));
			   this->butDelAcoAdminDo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butDelAcoAdminDo->FlatAppearance->BorderSize = 0;
			   this->butDelAcoAdminDo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butDelAcoAdminDo->Location = System::Drawing::Point(27, 540);
			   this->butDelAcoAdminDo->Name = L"butDelAcoAdminDo";
			   this->butDelAcoAdminDo->Size = System::Drawing::Size(51, 53);
			   this->butDelAcoAdminDo->TabIndex = 1;
			   this->butDelAcoAdminDo->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			   this->butDelAcoAdminDo->UseVisualStyleBackColor = false;
			   this->butDelAcoAdminDo->Click += gcnew System::EventHandler(this, &Home::butDelAcoAdminDo_Click_1);
			   // 
			   // panelAcceptReq
			   // 
			   this->panelAcceptReq->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelAcceptReq.BackgroundImage")));
			   this->panelAcceptReq->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->panelAcceptReq->Controls->Add(this->butExitAcceptReqPanel);
			   this->panelAcceptReq->Controls->Add(this->butAcceptReqDoAdmin);
			   this->panelAcceptReq->Location = System::Drawing::Point(379, 140);
			   this->panelAcceptReq->Name = L"panelAcceptReq";
			   this->panelAcceptReq->Size = System::Drawing::Size(324, 321);
			   this->panelAcceptReq->TabIndex = 25;
			   // 
			   // butExitAcceptReqPanel
			   // 
			   this->butExitAcceptReqPanel->BackColor = System::Drawing::Color::Transparent;
			   this->butExitAcceptReqPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butExitAcceptReqPanel.BackgroundImage")));
			   this->butExitAcceptReqPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->butExitAcceptReqPanel->FlatAppearance->BorderSize = 0;
			   this->butExitAcceptReqPanel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butExitAcceptReqPanel->Location = System::Drawing::Point(294, 0);
			   this->butExitAcceptReqPanel->Name = L"butExitAcceptReqPanel";
			   this->butExitAcceptReqPanel->Size = System::Drawing::Size(27, 30);
			   this->butExitAcceptReqPanel->TabIndex = 25;
			   this->butExitAcceptReqPanel->Text = L" ";
			   this->butExitAcceptReqPanel->UseVisualStyleBackColor = false;
			   this->butExitAcceptReqPanel->Click += gcnew System::EventHandler(this, &Home::butExitAcceptReqPanel_Click);
			   // 
			   // butAcceptReqDoAdmin
			   // 
			   this->butAcceptReqDoAdmin->BackColor = System::Drawing::Color::Transparent;
			   this->butAcceptReqDoAdmin->FlatAppearance->BorderSize = 0;
			   this->butAcceptReqDoAdmin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->butAcceptReqDoAdmin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->butAcceptReqDoAdmin->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->butAcceptReqDoAdmin->Location = System::Drawing::Point(108, 274);
			   this->butAcceptReqDoAdmin->Name = L"butAcceptReqDoAdmin";
			   this->butAcceptReqDoAdmin->Size = System::Drawing::Size(109, 34);
			   this->butAcceptReqDoAdmin->TabIndex = 24;
			   this->butAcceptReqDoAdmin->Text = L"Accept";
			   this->butAcceptReqDoAdmin->UseVisualStyleBackColor = false;
			   this->butAcceptReqDoAdmin->Click += gcnew System::EventHandler(this, &Home::butAcceptReqDoAdmin_Click);
			   // 
			   // Home
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			   this->ClientSize = System::Drawing::Size(950, 650);
			   this->Controls->Add(this->main);
			   this->Controls->Add(this->titelbar);
			   this->Controls->Add(this->panelSinguRe);
			   this->Controls->Add(this->DonorSingup);
			   this->Controls->Add(this->panelLoginAdmin);
			   this->Controls->Add(this->panelDonorRoom);
			   this->Controls->Add(this->panelRoomRe);
			   this->Controls->Add(this->panelRoomAdmin);
			   this->Controls->Add(this->panelDonorLogin);
			   this->Controls->Add(this->panelLoginRe);
			   this->Controls->Add(this->panelMassegSingup);
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			   this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			   this->MinimumSize = System::Drawing::Size(950, 650);
			   this->Name = L"Home";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"Home";
			   this->titelbar->ResumeLayout(false);
			   this->panelDonorLogin->ResumeLayout(false);
			   this->panelDonorLogin->PerformLayout();
			   this->panelDonorRoom->ResumeLayout(false);
			   this->panelHomeDO->ResumeLayout(false);
			   this->panelHomeDO->PerformLayout();
			   this->panelSettingDo->ResumeLayout(false);
			   this->panelSettingDo->PerformLayout();
			   this->panelRequestDo->ResumeLayout(false);
			   this->panelRequestDo->PerformLayout();
			   this->panelNavbarDo->ResumeLayout(false);
			   this->panelDelAccoDo->ResumeLayout(false);
			   this->panelUpdateFname->ResumeLayout(false);
			   this->panelUpdateFname->PerformLayout();
			   this->DonorSingup->ResumeLayout(false);
			   this->DonorSingup->PerformLayout();
			   this->main->ResumeLayout(false);
			   this->main->PerformLayout();
			   this->panelLoginRe->ResumeLayout(false);
			   this->panelLoginRe->PerformLayout();
			   this->panelSinguRe->ResumeLayout(false);
			   this->panelSinguRe->PerformLayout();
			   this->panelLoginAdmin->ResumeLayout(false);
			   this->panelLoginAdmin->PerformLayout();
			   this->panelMassegSingup->ResumeLayout(false);
			   this->panelRoomRe->ResumeLayout(false);
			   this->panelHomeRe->ResumeLayout(false);
			   this->panelHomeRe->PerformLayout();
			   this->panelSettingRe->ResumeLayout(false);
			   this->panelSettingRe->PerformLayout();
			   this->panelMenuBarRe->ResumeLayout(false);
			   this->panelDisplayBlood->ResumeLayout(false);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			   this->panelSerchRe->ResumeLayout(false);
			   this->panelSerchRe->PerformLayout();
			   this->panelRequestRe->ResumeLayout(false);
			   this->panelRequestRe->PerformLayout();
			   this->panelDelAcconetRe->ResumeLayout(false);
			   this->panelUpdateDateRe->ResumeLayout(false);
			   this->panelUpdateDateRe->PerformLayout();
			   this->panelRoomAdmin->ResumeLayout(false);
			   this->panelHomeAdmin->ResumeLayout(false);
			   this->panelHomeAdmin->PerformLayout();
			   this->panelMenuAdmin->ResumeLayout(false);
			   this->panelDelAccoAdmin->ResumeLayout(false);
			   this->panelRejectReq->ResumeLayout(false);
			   this->panelDisplayDoDate->ResumeLayout(false);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			   this->panelUpdateAdminRe->ResumeLayout(false);
			   this->panelUpdateAdminRe->PerformLayout();
			   this->panelUpdateAdminDo->ResumeLayout(false);
			   this->panelUpdateAdminDo->PerformLayout();
			   this->panelInsertRe->ResumeLayout(false);
			   this->panelInsertRe->PerformLayout();
			   this->panelInserDo->ResumeLayout(false);
			   this->panelInserDo->PerformLayout();
			   this->panelDisplayReDate->ResumeLayout(false);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			   this->panelRequestAdmin->ResumeLayout(false);
			   this->panelRequestAdmin->PerformLayout();
			   this->panelReAdmin->ResumeLayout(false);
			   this->panelReAdmin->PerformLayout();
			   this->panelDoAdmin->ResumeLayout(false);
			   this->panelDoAdmin->PerformLayout();
			   this->panelAcceptReq->ResumeLayout(false);
			   this->ResumeLayout(false);

		   }
#pragma endregion





		   //Program close button
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Environment::Exit(0);
	}
		   //fullscreen button

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (this->WindowState == FormWindowState::Maximized)
		{
			this->WindowState = FormWindowState::Normal;
		}
		else
		{
			this->WindowState = FormWindowState::Maximized;
		}
	}
		   //minscreen button
	private: System::Void minScreen_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->WindowState = FormWindowState::Minimized;
	}
		   //button Admin in Main page
	private: System::Void admin_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		panelLoginAdmin->BringToFront();
	}

		   //button Donor in Main page
	private: System::Void donoer_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		panelDonorLogin->BringToFront();
	}
		   //button RE in Main page			
	private: System::Void recipient_Click(System::Object^ sender, System::EventArgs^ e)
	{
		panelLoginRe->BringToFront();
	}


		   //back buttpn
	private: System::Void backbtn_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		main->BringToFront();
	}

	private: System::Void butBackfromRe_Click(System::Object^ sender, System::EventArgs^ e)
	{
		main->BringToFront();
	}
		   //back
	private: System::Void butBackfromSingupDo_Click(System::Object^ sender, System::EventArgs^ e)
	{
		main->BringToFront();
	}
	private: System::Void butTologinFromRegister_Click(System::Object^ sender, System::EventArgs^ e)
	{
		panelDonorLogin->BringToFront();
	}

	private: System::Void butSingupFormLoginRe_Click(System::Object^ sender, System::EventArgs^ e)
	{
		panelSinguRe->BringToFront();
	}
		   //back
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		main->BringToFront();
	}

		   //button singup Donor from login donor
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		DonorSingup->BringToFront();
	}


		   // button Register Donor
	private: System::Void butSingupINRegesterDo_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Donor d;
		Validation v;
		DoSingup = true;
		String^ varFname, ^ varLname, ^ varPassword, ^ varEmail, ^ varAge
			, ^ varBooldType, ^ varGender, ^ varLastDate, ^ varDis, ^ varMed;

		varEmail = textBoxMailRegDo->Text;
		varPassword = textBoxPasRegDo->Text;
		varFname = textBoxNameREGDo->Text;
		varLname = textBoxLastnameReDo->Text;
		varAge = textBoxAgeRegDo->Text;
		varDis = textBoxDisRegDo->Text;
		varMed = textBoxMedRegDo->Text;
		varBooldType = comboBoxBooldTypeSingupDO->Text;
		if (femaleRegDo == true)
		{
			varGender = "F";
		}
		else
		{
			varGender = "M";
		}
		varLastDate = textBoxLastDataRegDo->Text;
		std::string date = msclr::interop::marshal_as<std::string>(varLastDate);
		std::string gender = msclr::interop::marshal_as<std::string>(varGender);
		std::string Fname = msclr::interop::marshal_as<std::string>(varFname);
		std::string Lname = msclr::interop::marshal_as<std::string>(varLname);
		std::string pasword = msclr::interop::marshal_as<std::string>(varPassword);
		std::string email = msclr::interop::marshal_as<std::string>(varEmail);
		std::string age = msclr::interop::marshal_as<std::string>(varAge);
		std::string dis = msclr::interop::marshal_as<std::string>(varDis);
		std::string med = msclr::interop::marshal_as<std::string>(varMed);
		std::string BooldType = msclr::interop::marshal_as<std::string>(varBooldType);
		int ageInt;


		if (v.Check_Digit(age) == true && v.Check_Email(email) && v.Check_Password(pasword) == true && v.Check_String(Fname) == true && v.Check_String(Lname) == true)
		{
			ageInt = int::Parse(varAge); // string to int
			d.Register(Fname, Lname, ageInt, email, pasword, gender, BooldType, dis, med, date);
			textBoxMailRegDo->Clear();
			textBoxMailRegDo->Clear();
			textBoxPasRegDo->Clear();
			textBoxNameREGDo->Clear();
			textBoxLastnameReDo->Clear();
			textBoxAgeRegDo->Clear();
			textBoxDisRegDo->Clear();
			textBoxMedRegDo->Clear();
			panelMassegSingup->BringToFront();
		}
		else
		{
			if (!v.Check_Digit(age))
				MessageBox::Show("Age should be an numbers.", "Invalid Age", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			if (!v.Check_Email(email))
				MessageBox::Show("Email should have format xyz@domain.com", "Invalid Email", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			if (!v.Check_Password(pasword))
				MessageBox::Show("Password should be 8-12 and include special characters and at least one capital letter and one number.", "Invalid Password", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			if (!v.Check_String(Fname))
				MessageBox::Show("Name cannot have numbers or special characters, should be a string", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			if (!v.Check_String(Lname))
				MessageBox::Show("Name cannot have numbers or special characters, should be a string", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Warning);

		}
	}

		   // radio button famele
	private: System::Void radioButtonFemaleRegDo_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		femaleRegDo = true;
	}

		   // radio button male
	private: System::Void radioButtonMaleRegDo_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		maleRegDo = true;
	}

		   //button login masseg  befor singup
	private: System::Void butLogMasseg_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (DoSingup)
			panelDonorLogin->BringToFront();
		else
			panelLoginRe->BringToFront();
	}
		   //end Singup donor

			//button Login Donor
	private: System::Void butLoginDo_Click(System::Object^ sender, System::EventArgs^ e)
	{


		Donor D;
		std::string fiile = "data.csv";
		String^ varEmail, ^ varPassword;
		varEmail = textBoxEmailLoginDo->Text;
		varPassword = textBoxPasLOginDO->Text;
		std::string email = msclr::interop::marshal_as<std::string>(varEmail);
		std::string pasword = msclr::interop::marshal_as<std::string>(varPassword);
		//check email and password
		if (D.Login(email, pasword) == true)
		{

			filecsv f;
			//save current user
			CurentUserIndex = D.getCurrentUser();
			String^ id = gcnew String(f.Readunitfromfile(D.getCurrentUser(), 0, fiile).c_str());
			String^ Fname = gcnew String(f.Readunitfromfile(D.getCurrentUser(), 1, fiile).c_str());
			String^ Lname = gcnew String(f.Readunitfromfile(D.getCurrentUser(), 2, fiile).c_str());
			String^ date = gcnew String(f.Readunitfromfile(D.getCurrentUser(), 10, fiile).c_str());
			String^ booldType = gcnew String(f.Readunitfromfile(D.getCurrentUser(), 7, fiile).c_str());
			String^ dis = gcnew String(f.Readunitfromfile(CurentUserIndex, 8, fiile).c_str());
			String^ mid = gcnew String(f.Readunitfromfile(CurentUserIndex, 9, fiile).c_str());


			//data for home donor
			labelHomePageDo->Text = Fname + " " + Lname;
			labelHomePagelaDo->Text = date;
			labelBooldTypeHDo->Text = booldType;
			//data for set donor
			labelIdSetDo->Text = id;
			labelLnameSetDo->Text = Lname;
			labelNameSetDO->Text = Fname;
			labelEmailSetDo->Text = varEmail;
			labelPasSetDo->Text = varPassword;
			labelDisSetDo->Text = dis;
			labelMidSetDo->Text = mid;
			textBoxEmailLoginDo->Clear();
			textBoxPasLOginDO->Clear();
			panelDonorRoom->BringToFront();

		}
		else
		{
			MessageBox::Show("The email and password are incorrect, please try again", "Invalid Email or passwrod", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}
		   //end login Donor

		  //button back from Donro login
	private: System::Void butbackfromDonro_Click(System::Object^ sender, System::EventArgs^ e)
	{
		main->BringToFront();

	}

		   //donor room
			  //style menu bar Donor (change color and font)
	private: System::Void butHomeDo_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->butHomeDo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));
		this->butReqDo->BackColor = System::Drawing::Color::Transparent;
		this->butSettingDo->BackColor = System::Drawing::Color::Transparent;
		///////////////font
		this->butSettingDo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));
		this->butReqDo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));
		this->butHomeDo->ForeColor = System::Drawing::Color::White;
		panelHomeDO->BringToFront();
	}
	private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e)
	{
		this->butHomeDo->BackColor = System::Drawing::Color::Transparent;
		this->butReqDo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));
		this->butSettingDo->BackColor = System::Drawing::Color::Transparent;
		///////////////font
		this->butSettingDo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));
		this->butHomeDo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));
		this->butReqDo->ForeColor = System::Drawing::Color::White;
		panelRequestDo->BringToFront();
	}
	private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		this->butHomeDo->BackColor = System::Drawing::Color::Transparent;
		this->butReqDo->BackColor = System::Drawing::Color::Transparent;
		this->butSettingDo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));
		///////////////font
		this->butHomeDo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));
		this->butReqDo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));
		this->butSettingDo->ForeColor = System::Drawing::Color::White;
		panelSettingDo->BringToFront();
	}


		   // button update page donor
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ Id;
		/*Id = labelIdSetDo->Text;
		std::string SCurentUserIndex = msclr::interop::marshal_as<std::string>(Id);*/
		//CurentUserIndex = stoi(SCurentUserIndex);
		std::string fiile = "data.csv";
		filecsv f;
		String^ email = gcnew String(f.Readunitfromfile(CurentUserIndex, 4, fiile).c_str());
		String^ pass = gcnew String(f.Readunitfromfile(CurentUserIndex, 5, fiile).c_str());
		String^ id = gcnew String(f.Readunitfromfile(CurentUserIndex, 0, fiile).c_str());
		String^ Fname = gcnew String(f.Readunitfromfile(CurentUserIndex, 1, fiile).c_str());
		String^ Lname = gcnew String(f.Readunitfromfile(CurentUserIndex, 2, fiile).c_str());
		String^ date = gcnew String(f.Readunitfromfile(CurentUserIndex, 10, fiile).c_str());
		String^ booldType = gcnew String(f.Readunitfromfile(CurentUserIndex, 7, fiile).c_str());
		String^ dis = gcnew String(f.Readunitfromfile(CurentUserIndex, 8, fiile).c_str());
		String^ mid = gcnew String(f.Readunitfromfile(CurentUserIndex, 9, fiile).c_str());

		//data for home donor
		labelHomePageDo->Text = Fname + " " + Lname;
		labelHomePagelaDo->Text = date;
		labelBooldTypeHDo->Text = booldType;
		//data for set donor
		labelIdSetDo->Text = id;
		labelLnameSetDo->Text = Lname;
		labelNameSetDO->Text = Fname;
		labelEmailSetDo->Text = email;
		labelPasSetDo->Text = pass;
		labelDisSetDo->Text = dis;
		labelMidSetDo->Text = mid;

	}
		   //delet account donor
	private: System::Void button2_Click_2(System::Object^ sender, System::EventArgs^ e)
	{
		panelDelAccoDo->BringToFront();

	}

	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e)
	{
		panelUpdateFname->SendToBack();
		textBoxUpdateFname->Clear();
	}
		   //Update data donor
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e)
	{
		FnameUpdateDo = true;
		panelUpdateFname->BringToFront();
	}

		   //Pens updata Date for donor
	private: System::Void butSave_Click(System::Object^ sender, System::EventArgs^ e) {
		Donor d;
		Validation v;
		String^ varDate, ^ id;
		varDate = textBoxUpdateFname->Text;
		//id = labelIdSetDo->Text;
		//std::string SCurentUserIndex = msclr::interop::marshal_as<std::string>(id);
		//CurentUserIndex = stoi(SCurentUserIndex);
		std::string date = msclr::interop::marshal_as<std::string>(varDate);
		if (varDate != "") {
			if (FnameUpdateDo == true && v.Check_String(date))
			{
				d.UpdateAccount(1, CurentUserIndex + 1, date);
				FnameUpdateDo = false;
				panelUpdateFname->SendToBack();
				textBoxUpdateFname->Clear();
			}
			else if (LnameUpdateDo == true && v.Check_String(date))
			{
				d.UpdateAccount(2, CurentUserIndex + 1, date);
				LnameUpdateDo = false;
				panelUpdateFname->SendToBack();
				textBoxUpdateFname->Clear();
			}
			else if (EmailUpdateDO == true && v.Check_Email(date))
			{
				d.UpdateAccount(4, CurentUserIndex + 1, date);
				EmailUpdateDO = false;
				panelUpdateFname->SendToBack();
				textBoxUpdateFname->Clear();
			}
			else if (PassUpdateDo == true && v.Check_Password(date))
			{
				d.UpdateAccount(5, CurentUserIndex + 1, date);
				PassUpdateDo = false;
				panelUpdateFname->SendToBack();
				textBoxUpdateFname->Clear();
			}
			else if (DisUpdateDo == true)
			{
				d.UpdateAccount(8, CurentUserIndex + 1, date);
				DisUpdateDo = false;
				panelUpdateFname->SendToBack();
				textBoxUpdateFname->Clear();
			}
			else if (MidUpdateDO == true)
			{
				d.UpdateAccount(9, CurentUserIndex + 1, date);
				MidUpdateDO = false;
				panelUpdateFname->SendToBack();
				textBoxUpdateFname->Clear();
			}
		}
	}


	private: System::Void butEditLNameDonor_Click(System::Object^ sender, System::EventArgs^ e)
	{
		LnameUpdateDo = true;
		panelUpdateFname->BringToFront();
	}
	private: System::Void butEditEmailDonor_Click(System::Object^ sender, System::EventArgs^ e)
	{
		EmailUpdateDO = true;
		panelUpdateFname->BringToFront();
	}
	private: System::Void butEditPasDonor_Click(System::Object^ sender, System::EventArgs^ e)
	{
		PassUpdateDo = true;
		panelUpdateFname->BringToFront();
	}
	private: System::Void butEditMidDonor_Click(System::Object^ sender, System::EventArgs^ e)
	{
		MidUpdateDO = true;
		panelUpdateFname->BringToFront();
	}
	private: System::Void butEditDisDonor_Click(System::Object^ sender, System::EventArgs^ e)
	{
		DisUpdateDo = true;
		panelUpdateFname->BringToFront();
	}
		   ////////////////////////////////////////
		   //login Re
	private: System::Void butLoginRe_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Recipient R;
		String^ varEmail, ^ varPassword;
		varEmail = textBoxEmailLoginRe->Text;
		varPassword = textBoxPasLoginRe->Text;
		std::string email = msclr::interop::marshal_as<std::string>(varEmail);
		std::string pasword = msclr::interop::marshal_as<std::string>(varPassword);
		//chaek email and passwrod
		if (R.Login(email, pasword) == true)
		{
			CurentUserIndex = R.getCurrentUser();
			filecsv f;
			std::string fiile = "Recipient.csv";

			String^ id = gcnew String(f.Readunitfromfile(CurentUserIndex, 0, fiile).c_str());
			String^ Fname = gcnew String(f.Readunitfromfile(CurentUserIndex, 1, fiile).c_str());
			String^ Lname = gcnew String(f.Readunitfromfile(CurentUserIndex, 2, fiile).c_str());
			String^ Doc = gcnew String(f.Readunitfromfile(CurentUserIndex, 9, fiile).c_str());
			String^ Hos = gcnew String(f.Readunitfromfile(CurentUserIndex, 8, fiile).c_str());
			String^ booldType = gcnew String(f.Readunitfromfile(CurentUserIndex, 7, fiile).c_str());



			//data for home Re
			labelUsernameHomRe->Text = Fname + " " + Lname;
			labelHosnameHomRe->Text = Hos;
			labelBloodeHomRe->Text = booldType;
			labelDocnameHomRe->Text = Doc;
			//data for set Re
			labelIdSetRe->Text = id;
			labelLnameSetRe->Text = Lname;
			labelFnameSetRe->Text = Fname;
			labelEmailSetRe->Text = varEmail;
			labelPasSetRe->Text = varPassword;
			labelHosSetRe->Text = Hos;
			labelDocSetRe->Text = Doc;

			textBoxEmailLoginRe->Clear();
			textBoxPasLoginRe->Clear();
			panelRoomRe->BringToFront();

		}
		else
		{
			MessageBox::Show("The email and password are incorrect, please try again", "Invalid Email Or PAssword", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}

		   //Send Request Do 
	private: System::Void butSendReqDo_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Donor d;
		d.readData();
		d.setCurrentUser(CurentUserIndex);
		String^ varHos, ^ varDateY, ^ varDateD, ^ varDateM;
		varHos = textBoxHosReqDo->Text;
		varDateY = dateTimePickerYReqDo->Text;
		varDateM = dateTimePickerMReqDo->Text;
		varDateD = dateTimePickerDReqDo->Text;

		std::string Hos = msclr::interop::marshal_as<std::string>(varHos);
		std::string DateY = msclr::interop::marshal_as<std::string>(varDateY);
		std::string DateM = msclr::interop::marshal_as<std::string>(varDateM);
		std::string DateD = msclr::interop::marshal_as<std::string>(varDateD);
		std::string Date = DateD + "-" + DateM + "-" + DateY;
		d.DonationRequest(Hos, Date, CurentUserIndex + 1);

		MessageBox::Show("Your Request is Send :)", "Accept", MessageBoxButtons::OK, MessageBoxIcon::None);



	}

		   //button singup Re 

	private: System::Void butSingupRefromReg_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Recipient R;
		Validation v;
		String^ varFname, ^ varLname, ^ varPassword, ^ varEmail, ^ varAge,
			^ varBooldType, ^ varGender, ^ varHos, ^ varDoc;
		varEmail = textBoxMailSingupRe->Text;
		varPassword = textBoxPasSingupRe->Text;
		varFname = textBoxFnameSingupRe->Text;
		varLname = textBoxLnameSingupRe->Text;
		varAge = textBoxAgeSingupRe->Text;
		varDoc = textBoxDocSingupRe->Text;
		varHos = textBoxHosSingupRe->Text;
		varBooldType = comboBoxBloodSingupRe->Text;
		if (femaleRegRe == true)
		{
			varGender = "F";
		}
		else
		{
			varGender = "M";
		}

		std::string Hos = msclr::interop::marshal_as<std::string>(varHos);
		std::string gender = msclr::interop::marshal_as<std::string>(varGender);
		std::string Fname = msclr::interop::marshal_as<std::string>(varFname);
		std::string Lname = msclr::interop::marshal_as<std::string>(varLname);
		std::string pasword = msclr::interop::marshal_as<std::string>(varPassword);
		std::string email = msclr::interop::marshal_as<std::string>(varEmail);
		std::string age = msclr::interop::marshal_as<std::string>(varAge);
		std::string doc = msclr::interop::marshal_as<std::string>(varDoc);
		std::string BooldType = msclr::interop::marshal_as<std::string>(varBooldType);
		int ageInt;

		if (v.Check_Digit(age) == true && v.Check_Email(email) && v.Check_Password(pasword) == true && v.Check_String(Fname) == true && v.Check_String(Lname) == true)
		{
			ageInt = int::Parse(varAge); // string to int
			R.Register(Fname, Lname, gender, ageInt, email, pasword, BooldType, Hos, doc);
			textBoxMailSingupRe->Clear();
			textBoxHosSingupRe->Clear();
			textBoxPasSingupRe->Clear();
			textBoxFnameSingupRe->Clear();
			textBoxLnameSingupRe->Clear();
			textBoxAgeSingupRe->Clear();
			textBoxDocSingupRe->Clear();
			panelMassegSingup->BringToFront();
		}
		else
		{
			if (!v.Check_Digit(age))
				MessageBox::Show("Age should be an numbers.", "Invalid Age", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			if (!v.Check_Email(email))
				MessageBox::Show("Email should have format xyz@domain.com", "Invalid Email", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			if (!v.Check_Password(pasword))
				MessageBox::Show("Password should be 8-12 and include special characters and at least one capital letter and one number.", "Invalid Password", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			if (!v.Check_String(Fname))
				MessageBox::Show("Name cannot have numbers, should be a string", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			if (!v.Check_String(Lname))
				MessageBox::Show("Name cannot have numbers, should be a string", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Warning);

		}


	}


	private: System::Void radioButFemaleRe_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		femaleRegRe = true;
	}
	private: System::Void radioButMaleRe_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		maleRegRe = true;
	}

	private: System::Void butLoginReFromReg_Click(System::Object^ sender, System::EventArgs^ e)
	{
		panelLoginRe->BringToFront();
	}

		   //style Menu bar Re (cloro , font)
	private: System::Void butHomeRe_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->butHomeRe->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));
		this->butReqRe->BackColor = System::Drawing::Color::Transparent;
		this->butSerchRe->BackColor = System::Drawing::Color::Transparent;
		this->butSettingRe->BackColor = System::Drawing::Color::Transparent;
		this->butDisplayBloodRe->BackColor = System::Drawing::Color::Transparent;
		///////////////font
		this->butSettingRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));
		this->butSerchRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));
		this->butReqRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));
		this->butHomeRe->ForeColor = System::Drawing::Color::White;
		this->butDisplayBloodRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));

		panelHomeRe->BringToFront();
	}
	private: System::Void butReqRe_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->butHomeRe->BackColor = System::Drawing::Color::Transparent;
		this->butReqRe->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));
		this->butSerchRe->BackColor = System::Drawing::Color::Transparent;
		this->butSettingRe->BackColor = System::Drawing::Color::Transparent;
		this->butDisplayBloodRe->BackColor = System::Drawing::Color::Transparent;

		///////////////font
		this->butSettingRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));
		this->butSerchRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));
		this->butHomeRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));
		this->butReqRe->ForeColor = System::Drawing::Color::White;
		this->butDisplayBloodRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));

		panelRequestRe->BringToFront();
	}
	private: System::Void butSerchRe_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->butHomeRe->BackColor = System::Drawing::Color::Transparent;
		this->butReqRe->BackColor = System::Drawing::Color::Transparent;
		this->butDisplayBloodRe->BackColor = System::Drawing::Color::Transparent;

		this->butSerchRe->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));
		this->butSettingRe->BackColor = System::Drawing::Color::Transparent;
		///////////////font
		this->butSettingRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));
		this->butHomeRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));
		this->butReqRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));
		this->butSerchRe->ForeColor = System::Drawing::Color::White;
		this->butDisplayBloodRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));

		panelSerchRe->BringToFront();

	}
	private: System::Void butDisplayBloodRe_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->butHomeRe->BackColor = System::Drawing::Color::Transparent;
		this->butReqRe->BackColor = System::Drawing::Color::Transparent;
		this->butSerchRe->BackColor = System::Drawing::Color::Transparent;
		this->butSettingRe->BackColor = System::Drawing::Color::Transparent;
		this->butDisplayBloodRe->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));
		///////////////font
		this->butHomeRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));
		this->butSettingRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));
		this->butSerchRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));
		this->butReqRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));
		this->butDisplayBloodRe->ForeColor = System::Drawing::Color::White;

		panelDisplayBlood->BringToFront();
	}
	private: System::Void butSettingRe_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->butHomeRe->BackColor = System::Drawing::Color::Transparent;
		this->butReqRe->BackColor = System::Drawing::Color::Transparent;
		this->butSerchRe->BackColor = System::Drawing::Color::Transparent;
		this->butDisplayBloodRe->BackColor = System::Drawing::Color::Transparent;

		this->butSettingRe->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));
		///////////////font
		this->butHomeRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));
		this->butSerchRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));
		this->butReqRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));
		this->butDisplayBloodRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));

		this->butSettingRe->ForeColor = System::Drawing::Color::White;

		panelSettingRe->BringToFront();
	}

		   //  pens edit in setting Re
	private: System::Void butEditFnameRe_Click(System::Object^ sender, System::EventArgs^ e)
	{
		FnameUpdateRe = true;
		panelUpdateDateRe->BringToFront();
	}
	private: System::Void butEditLnameRe_Click(System::Object^ sender, System::EventArgs^ e)
	{
		LnameUpdateRe = true;
		panelUpdateDateRe->BringToFront();
	}
	private: System::Void butEditMailRe_Click(System::Object^ sender, System::EventArgs^ e)
	{
		EmailUpdateRe = true;
		panelUpdateDateRe->BringToFront();
	}
	private: System::Void butEditPasRe_Click(System::Object^ sender, System::EventArgs^ e)
	{
		PassUpdateRe = true;
		panelUpdateDateRe->BringToFront();
	}
	private: System::Void butEditDocRe_Click(System::Object^ sender, System::EventArgs^ e)
	{
		DocUpdateRe = true;
		panelUpdateDateRe->BringToFront();
	}
	private: System::Void butEditHosRe_Click(System::Object^ sender, System::EventArgs^ e)
	{
		HosUpdateRe = true;
		panelUpdateDateRe->BringToFront();
	}

		   //update Re Dsta
	private: System::Void butSeveUpdateRe_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Recipient R;
		Validation v;
		String^ varDate;
		varDate = textBoxUpdateDateRe->Text;
		std::string Date = msclr::interop::marshal_as<std::string>(varDate);
		if (varDate != "") {
			if (FnameUpdateRe == true && v.Check_String(Date))
			{
				R.UpdateAccount(1, CurentUserIndex + 1, Date);
				FnameUpdateRe = false;
				panelUpdateDateRe->SendToBack();
				textBoxUpdateDateRe->Clear();
			}
			else if (LnameUpdateRe == true && v.Check_String(Date))
			{
				R.UpdateAccount(2, CurentUserIndex + 1, Date);
				LnameUpdateRe = false;
				panelUpdateDateRe->SendToBack();
				textBoxUpdateDateRe->Clear();
			}
			else if (EmailUpdateRe == true && v.Check_Email(Date))
			{
				R.UpdateAccount(5, CurentUserIndex + 1, Date);
				EmailUpdateRe = false;
				panelUpdateDateRe->SendToBack();
				textBoxUpdateDateRe->Clear();
			}
			else if (PassUpdateRe == true && v.Check_Password(Date))
			{
				R.UpdateAccount(6, CurentUserIndex + 1, Date);
				PassUpdateRe = false;
				panelUpdateDateRe->SendToBack();
				textBoxUpdateDateRe->Clear();
			}
			else if (HosUpdateRe == true && v.Check_String(Date))
			{
				R.UpdateAccount(8, CurentUserIndex + 1, Date);
				HosUpdateRe = false;
				panelUpdateDateRe->SendToBack();
				textBoxUpdateDateRe->Clear();
			}
			else if (DocUpdateRe == true && v.Check_String(Date))
			{
				R.UpdateAccount(9, CurentUserIndex + 1, Date);
				DocUpdateRe = false;
				panelUpdateDateRe->SendToBack();
				textBoxUpdateDateRe->Clear();
			}



		}
	}

	private: System::Void butExitPanelUpRe_Click(System::Object^ sender, System::EventArgs^ e)
	{
		panelUpdateDateRe->SendToBack();
		textBoxUpdateDateRe->Clear();
		bool FnameUpdateRe = false;
		bool LnameUpdateRe = false;
		bool EmailUpdateRe = false;
		bool PassUpdateRe = false;
		bool HosUpdateRe = false;
		bool DocUpdateRe = false;
	}


		   //Refresh Re Page
	private: System::Void butUpdataRe_Click(System::Object^ sender, System::EventArgs^ e)
	{
		std::string fiile = "Recipient.csv";
		filecsv f;
		String^ email = gcnew String(f.Readunitfromfile(CurentUserIndex, 5, fiile).c_str());
		String^ pass = gcnew String(f.Readunitfromfile(CurentUserIndex, 6, fiile).c_str());
		String^ id = gcnew String(f.Readunitfromfile(CurentUserIndex, 0, fiile).c_str());
		String^ Fname = gcnew String(f.Readunitfromfile(CurentUserIndex, 1, fiile).c_str());
		String^ Lname = gcnew String(f.Readunitfromfile(CurentUserIndex, 2, fiile).c_str());
		String^ Hos = gcnew String(f.Readunitfromfile(CurentUserIndex, 8, fiile).c_str());
		String^ Doc = gcnew String(f.Readunitfromfile(CurentUserIndex, 9, fiile).c_str());
		String^ booldType = gcnew String(f.Readunitfromfile(CurentUserIndex, 7, fiile).c_str());


		//data for home Re
		labelUsernameHomRe->Text = Fname + " " + Lname;
		labelHosnameHomRe->Text = Hos;
		labelBloodeHomRe->Text = booldType;
		labelDocnameHomRe->Text = Doc;
		//data for set Re
		labelIdSetRe->Text = id;
		labelLnameSetRe->Text = Lname;
		labelFnameSetRe->Text = Fname;
		labelEmailSetRe->Text = email;
		labelPasSetRe->Text = pass;
		labelHosSetRe->Text = Hos;
		labelDocSetRe->Text = Doc;
	}
		   //log out Re
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		main->BringToFront();
	}


		   /////////////Admin 
		   //Admin Login
	private: System::Void butLoginAdmin_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Admin A;
		String^ varEmail, ^ varPassword;
		varEmail = textBoxUsernameAdmin->Text;
		varPassword = textBoxPassAdmin->Text;
		std::string email = msclr::interop::marshal_as<std::string>(varEmail);
		std::string pasword = msclr::interop::marshal_as<std::string>(varPassword);
		//chack username and password
		if (A.LoginAdmin(email, pasword))
		{
			panelRoomAdmin->BringToFront();
			//display numers in home admin
			Donor d; d.readData();
			String^ NumofDo = gcnew String(d.gettotalNumberOfDonorss().c_str());
			labelNumofDo->Text = NumofDo;
			Recipient R; R.Read_Data();
			String^ NumofRe = gcnew String(R.gettotalNumberOfRecipientsS().c_str());
			labelNumofRe->Text = NumofRe;
			Request Req; Req.Read_Data();
			String^ NumofReq = gcnew String(Req.totalNumberOfRequestss.c_str());
			labelNumofAllReq->Text = NumofReq;
			textBoxUsernameAdmin->Clear();
			textBoxPassAdmin->Clear();
		}
		else
		{
			MessageBox::Show("The email and password are incorrect, please try again", "Invalid Email Or PAssword", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
	}


		   // button next recod Donor
	private: System::Void butNextRcoDoAdmin_Click(System::Object^ sender, System::EventArgs^ e)
	{
		std::string fiile = "data.csv";
		Donor d;
		filecsv f;
		d.readData();
		if (indexDoAdmin < std::stoi(d.gettotalNumberOfDonorss()) - 1) {
			indexDoAdmin++;
			String^ id = gcnew String(f.Readunitfromfile(indexDoAdmin, 0, fiile).c_str());
			String^ Fname = gcnew String(f.Readunitfromfile(indexDoAdmin, 1, fiile).c_str());
			String^ Lname = gcnew String(f.Readunitfromfile(indexDoAdmin, 2, fiile).c_str());
			String^ Age = gcnew String(f.Readunitfromfile(indexDoAdmin, 3, fiile).c_str());
			String^ email = gcnew String(f.Readunitfromfile(indexDoAdmin, 4, fiile).c_str());
			String^ pass = gcnew String(f.Readunitfromfile(indexDoAdmin, 5, fiile).c_str());
			String^ gender = gcnew String(f.Readunitfromfile(indexDoAdmin, 6, fiile).c_str());
			String^ booldType = gcnew String(f.Readunitfromfile(indexDoAdmin, 7, fiile).c_str());
			String^ LastDon = gcnew String(f.Readunitfromfile(indexDoAdmin, 10, fiile).c_str());
			String^ Dis = gcnew String(f.Readunitfromfile(indexDoAdmin, 9, fiile).c_str());
			//data display
			textBoxIdAdminDo->Text = id;
			labelFnameAdminDo->Text = Fname;
			labelLnameAdminDo->Text = Lname;
			labelLastDonAdminDo->Text = LastDon;
			labelBloodeAdminDo->Text = booldType;
			labelDisAdminDo->Text = Dis;
			labelEmailAdminDo->Text = email;
			labelPasAdminDo->Text = pass;
			labelAgeAdminDo->Text = Age;
			labelGenderAdminDo->Text = gender;
		}
		else {
			MessageBox::Show("There is no other data", "No data", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}
	}
		   // button back recod Donor
	private: System::Void butBackRcoDoAdmin_Click(System::Object^ sender, System::EventArgs^ e)
	{
		std::string fiile = "data.csv";
		filecsv f;
		if (indexDoAdmin > 0)
		{
			indexDoAdmin--;
			String^ id = gcnew String(f.Readunitfromfile(indexDoAdmin, 0, fiile).c_str());
			String^ Fname = gcnew String(f.Readunitfromfile(indexDoAdmin, 1, fiile).c_str());
			String^ Lname = gcnew String(f.Readunitfromfile(indexDoAdmin, 2, fiile).c_str());
			String^ Age = gcnew String(f.Readunitfromfile(indexDoAdmin, 3, fiile).c_str());
			String^ email = gcnew String(f.Readunitfromfile(indexDoAdmin, 4, fiile).c_str());
			String^ pass = gcnew String(f.Readunitfromfile(indexDoAdmin, 5, fiile).c_str());
			String^ gender = gcnew String(f.Readunitfromfile(indexDoAdmin, 6, fiile).c_str());
			String^ booldType = gcnew String(f.Readunitfromfile(indexDoAdmin, 7, fiile).c_str());

			String^ LastDon = gcnew String(f.Readunitfromfile(indexDoAdmin, 10, fiile).c_str());
			String^ Dis = gcnew String(f.Readunitfromfile(indexDoAdmin, 9, fiile).c_str());


			//data  
			textBoxIdAdminDo->Text = id;
			labelFnameAdminDo->Text = Fname;
			labelLnameAdminDo->Text = Lname;
			labelLastDonAdminDo->Text = LastDon;
			labelBloodeAdminDo->Text = booldType;
			labelDisAdminDo->Text = Dis;
			labelEmailAdminDo->Text = email;
			labelPasAdminDo->Text = pass;
			labelAgeAdminDo->Text = Age;
			labelGenderAdminDo->Text = gender;
		}
		else {
			MessageBox::Show("There is no other data", "No data", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}


	}
	private: System::Void textBoxIdAdminDo_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		/*if (e-> == (int)Keys::Enter)
		{

		}*/
	}
		   //serch blood
	private: System::Void butSerRe_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ Exdate, ^ date = dateTimePickerSerRe->Text;
		std::string ExDate, Date = msclr::interop::marshal_as<std::string>(date);
		try {
			Request Req;
			std::string day = Date.substr(0, 2);
			std::string month = Date.substr(3, 2);
			std::string year = Date.substr(6, 4);
			ExDate = Req.addDays(stoi(day), stoi(month), stoi(year), 90);
			Exdate = gcnew String(ExDate.c_str());
			labelExDataBlood->Text = Exdate;
			Recipient R;
			R.Display_Blood(Date);
			std::vector<std::pair<std::string, int>> v;
			v = R.Display_Blood(Date);
			String^ Hos = gcnew String(std::to_string(v[0].second).c_str());
			labelA->Text = Hos;
			Hos = gcnew String(std::to_string(v[1].second).c_str());
			labelAa->Text = Hos;
			Hos = gcnew String(std::to_string(v[2].second).c_str());
			labelB->Text = Hos;
			Hos = gcnew String(std::to_string(v[3].second).c_str());
			labelBb->Text = Hos;
			Hos = gcnew String(std::to_string(v[4].second).c_str());
			labelO->Text = Hos;
			Hos = gcnew String(std::to_string(v[5].second).c_str());
			labelOo->Text = Hos;
			Hos = gcnew String(std::to_string(v[6].second).c_str());
			labelAB->Text = Hos;
			Hos = gcnew String(std::to_string(v[7].second).c_str());
			labelABab->Text = Hos;
		}
		catch (std::exception& e)
		{
			MessageBox::Show("There is no other data", "No data", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}


	}

		   //pens update Donor Admin
	private: System::Void butFnameAdminDo_Click(System::Object^ sender, System::EventArgs^ e)
	{
		FnameUpdateAdminDo = true;
		panelUpdateAdminDo->BringToFront();

	}
	private: System::Void butLnameAdminDo_Click(System::Object^ sender, System::EventArgs^ e)
	{
		LnameUpdateAdminDo = true;
		panelUpdateAdminDo->BringToFront();
	}
	private: System::Void butEmailnameAdminDo_Click(System::Object^ sender, System::EventArgs^ e)
	{
		EmailUpdateAdminDO = true;
		panelUpdateAdminDo->BringToFront();

	}
	private: System::Void butPasAdminDo_Click(System::Object^ sender, System::EventArgs^ e)
	{
		PassUpdateAdminDo = true;
		panelUpdateAdminDo->BringToFront();
	}
	private: System::Void butGenderAdminDo_Click(System::Object^ sender, System::EventArgs^ e)
	{
		GenderUpdateAdminDo = true;
		panelUpdateAdminDo->BringToFront();
	}
	private: System::Void butAgeAdminDo_Click(System::Object^ sender, System::EventArgs^ e)
	{
		AgeUpdateAdminDo = true;
		panelUpdateAdminDo->BringToFront();
	}
	private: System::Void butBloodeAdminDo_Click(System::Object^ sender, System::EventArgs^ e)
	{
		BloodUpdateAdminDO = true;
		panelUpdateAdminDo->BringToFront();
	}
	private: System::Void butLastDonAdminDo_Click(System::Object^ sender, System::EventArgs^ e)
	{
		LastDonUpdateAdminDo = true;

		panelUpdateAdminDo->BringToFront();

	}
	private: System::Void butDisAdminDo_Click(System::Object^ sender, System::EventArgs^ e)
	{
		DisUpdateAdminDo = true;
		panelUpdateAdminDo->BringToFront();

	}

	private: System::Void butSaveUpdateAdminDo_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Donor d;
		String^ Date, ^ TempId;
		Date = textBoxUpdateAdminDo->Text;
		TempId = textBoxIdAdminDo->Text;
		int TindexDoAdmin = int::Parse(TempId); // string to int
		std::string date = msclr::interop::marshal_as<std::string>(Date);
		if (Date != "") {

			if (FnameUpdateAdminDo == true)
			{
				d.UpdateAccount(1, TindexDoAdmin, date);
				FnameUpdateAdminDo = false;
				panelUpdateAdminDo->SendToBack();
				textBoxUpdateAdminDo->Clear();
			}
			else if (LnameUpdateAdminDo == true)
			{
				d.UpdateAccount(2, TindexDoAdmin, date);
				LnameUpdateAdminDo = false;
				panelUpdateAdminDo->SendToBack();
				textBoxUpdateAdminDo->Clear();
			}
			else if (EmailUpdateAdminDO == true)
			{
				d.UpdateAccount(4, TindexDoAdmin, date);
				EmailUpdateAdminDO = false;
				panelUpdateAdminDo->SendToBack();
				textBoxUpdateAdminDo->Clear();
			}
			else if (PassUpdateAdminDo == true)
			{
				d.UpdateAccount(5, TindexDoAdmin, date);
				PassUpdateAdminDo = false;

				panelUpdateAdminDo->SendToBack();
				textBoxUpdateAdminDo->Clear();
			}
			else if (AgeUpdateAdminDo == true)
			{
				d.UpdateAccount(3, TindexDoAdmin, date);
				AgeUpdateAdminDo = false;
				panelUpdateAdminDo->SendToBack();
				textBoxUpdateAdminDo->Clear();
			}
			else if (GenderUpdateAdminDo == true)
			{
				d.UpdateAccount(6, TindexDoAdmin, date);
				GenderUpdateAdminDo = false;
				panelUpdateAdminDo->SendToBack();
				textBoxUpdateAdminDo->Clear();
			}
			else if (BloodUpdateAdminDO == true)
			{
				d.UpdateAccount(7, TindexDoAdmin, date);
				BloodUpdateAdminDO = false;
				panelUpdateAdminDo->SendToBack();
				textBoxUpdateAdminDo->Clear();
			}
			else if (LastDonUpdateAdminDo == true)
			{
				d.UpdateAccount(10, TindexDoAdmin, date);
				LastDonUpdateAdminDo = false;
				panelUpdateAdminDo->SendToBack();
				textBoxUpdateAdminDo->Clear();
			}
			else if (DisUpdateAdminDo == true)
			{
				d.UpdateAccount(9, TindexDoAdmin, date);
				DisUpdateAdminDo = false;
				panelUpdateAdminDo->SendToBack();
				textBoxUpdateAdminDo->Clear();
			}


			std::string fiile = "data.csv";


			filecsv f;

			String^ id = gcnew String(f.Readunitfromfile(indexDoAdmin, 0, fiile).c_str());
			String^ Fname = gcnew String(f.Readunitfromfile(indexDoAdmin, 1, fiile).c_str());
			String^ Lname = gcnew String(f.Readunitfromfile(indexDoAdmin, 2, fiile).c_str());
			String^ Age = gcnew String(f.Readunitfromfile(indexDoAdmin, 3, fiile).c_str());
			String^ email = gcnew String(f.Readunitfromfile(indexDoAdmin, 4, fiile).c_str());
			String^ pass = gcnew String(f.Readunitfromfile(indexDoAdmin, 5, fiile).c_str());
			String^ gender = gcnew String(f.Readunitfromfile(indexDoAdmin, 6, fiile).c_str());
			String^ booldType = gcnew String(f.Readunitfromfile(indexDoAdmin, 7, fiile).c_str());

			String^ LastDon = gcnew String(f.Readunitfromfile(indexDoAdmin, 10, fiile).c_str());
			String^ Dis = gcnew String(f.Readunitfromfile(indexDoAdmin, 9, fiile).c_str());


			//data for home Re
			textBoxIdAdminDo->Text = id;
			labelFnameAdminDo->Text = Fname;
			labelLnameAdminDo->Text = Lname;
			labelLastDonAdminDo->Text = LastDon;
			labelBloodeAdminDo->Text = booldType;
			labelDisAdminDo->Text = Dis;
			labelEmailAdminDo->Text = email;
			labelPasAdminDo->Text = pass;
			labelAgeAdminDo->Text = Age;
			labelGenderAdminDo->Text = gender;

		}
	}
	private: System::Void butExitUpdateAdminDo_Click(System::Object^ sender, System::EventArgs^ e)
	{
		panelUpdateAdminDo->SendToBack();
		textBoxUpdateAdminDo->Clear();
		bool FnameUpdateAdminDo = false;
		bool LnameUpdateAdminDo = false;
		bool EmailUpdateAdminDO = false;
		bool PassUpdateAdminDo = false;
		bool AgeUpdateAdminDo = false;
		bool GenderUpdateAdminDo = false;
		bool BloodUpdateAdminDO = false;
		bool DisUpdateAdminDo = false;
		bool LastDonUpdateAdminDo = false;
	}



		   //pens Update Re Admin
	private: System::Void butFnameAdminRe_Click(System::Object^ sender, System::EventArgs^ e)
	{
		FnameUpdateAdminRe = true;
		panelUpdateAdminRe->BringToFront();
	}
	private: System::Void butLnameAdminRe_Click(System::Object^ sender, System::EventArgs^ e)
	{
		LnameUpdateAdminRe = true;
		panelUpdateAdminRe->BringToFront();
	}
	private: System::Void butEmailAdminRe_Click(System::Object^ sender, System::EventArgs^ e)
	{
		EmailUpdateAdminRe = true;
		panelUpdateAdminRe->BringToFront();
	}
	private: System::Void butBPasAdminRe_Click(System::Object^ sender, System::EventArgs^ e)
	{
		PassUpdateAdminRe = true;
		panelUpdateAdminRe->BringToFront();
	}
	private: System::Void butAgeAdminRe_Click(System::Object^ sender, System::EventArgs^ e)
	{
		AgeUpdateAdminRe = true;
		panelUpdateAdminRe->BringToFront();
	}
	private: System::Void butGenderAdminRe_Click(System::Object^ sender, System::EventArgs^ e)
	{
		GenderUpdateAdminRe = true;
		panelUpdateAdminRe->BringToFront();
	}
	private: System::Void butBloodeAdminRe_Click(System::Object^ sender, System::EventArgs^ e)
	{
		BloodUpdateAdminRe = true;
		panelUpdateAdminRe->BringToFront();
	}
	private: System::Void butHosAdminRe_Click(System::Object^ sender, System::EventArgs^ e)
	{
		HosUpdateAdminRe = true;
		panelUpdateAdminRe->BringToFront();
	}
	private: System::Void butDocAdminRe_Click(System::Object^ sender, System::EventArgs^ e)
	{
		DocUpdateAdminRe = true;
		panelUpdateAdminRe->BringToFront();
	}

		   //next reco Re Admin
	private: System::Void butNextRcoReAdmin_Click(System::Object^ sender, System::EventArgs^ e)
	{
		std::string fiile = "Recipient.csv";
		Recipient R;

		R.Read_Data();
		if (indexReAdmin < stoi(R.gettotalNumberOfRecipientsS()) - 1) {
			indexReAdmin++;
			filecsv f;

			String^ id = gcnew String(f.Readunitfromfile(indexReAdmin, 0, fiile).c_str());
			String^ Fname = gcnew String(f.Readunitfromfile(indexReAdmin, 1, fiile).c_str());
			String^ Lname = gcnew String(f.Readunitfromfile(indexReAdmin, 2, fiile).c_str());
			String^ Age = gcnew String(f.Readunitfromfile(indexReAdmin, 4, fiile).c_str());
			String^ email = gcnew String(f.Readunitfromfile(indexReAdmin, 5, fiile).c_str());
			String^ pass = gcnew String(f.Readunitfromfile(indexReAdmin, 6, fiile).c_str());
			String^ gender = gcnew String(f.Readunitfromfile(indexReAdmin, 3, fiile).c_str());
			String^ booldType = gcnew String(f.Readunitfromfile(indexReAdmin, 7, fiile).c_str());
			String^ Hos = gcnew String(f.Readunitfromfile(indexReAdmin, 8, fiile).c_str());
			String^ Doc = gcnew String(f.Readunitfromfile(indexReAdmin, 9, fiile).c_str());


			//data for home Re
			textBoxIdAdminRe->Text = id;
			labelFnameAdminRe->Text = Fname;
			labelLnameAdminRe->Text = Lname;
			labelHosAdminRe->Text = Hos;
			labelBloodeAdminRe->Text = booldType;
			labelDocAdminRe->Text = Doc;
			labelEmailAdminRe->Text = email;
			labelPasAdminRe->Text = pass;
			labelAgeAdminRe->Text = Age;
			labelGenderAdminRe->Text = gender;
		}
		else {
			MessageBox::Show("There is no other data", "No data", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}

	private: System::Void butBackRcoReAdmin_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string fiile = "Recipient.csv";

		if (indexReAdmin > 0)
		{
			indexReAdmin--;
			filecsv f;

			String^ id = gcnew String(f.Readunitfromfile(indexReAdmin, 0, fiile).c_str());
			String^ Fname = gcnew String(f.Readunitfromfile(indexReAdmin, 1, fiile).c_str());
			String^ Lname = gcnew String(f.Readunitfromfile(indexReAdmin, 2, fiile).c_str());
			String^ Age = gcnew String(f.Readunitfromfile(indexReAdmin, 4, fiile).c_str());
			String^ email = gcnew String(f.Readunitfromfile(indexReAdmin, 5, fiile).c_str());
			String^ pass = gcnew String(f.Readunitfromfile(indexReAdmin, 6, fiile).c_str());
			String^ gender = gcnew String(f.Readunitfromfile(indexReAdmin, 3, fiile).c_str());
			String^ booldType = gcnew String(f.Readunitfromfile(indexReAdmin, 7, fiile).c_str());

			String^ Hos = gcnew String(f.Readunitfromfile(indexReAdmin, 8, fiile).c_str());
			String^ Doc = gcnew String(f.Readunitfromfile(indexReAdmin, 9, fiile).c_str());


			//data for home Re
			textBoxIdAdminRe->Text = id;
			labelFnameAdminRe->Text = Fname;
			labelLnameAdminRe->Text = Lname;
			labelHosAdminRe->Text = Hos;
			labelBloodeAdminRe->Text = booldType;
			labelDocAdminRe->Text = Doc;
			labelEmailAdminRe->Text = email;
			labelPasAdminRe->Text = pass;
			labelAgeAdminRe->Text = Age;
			labelGenderAdminRe->Text = gender;
		}
		else {
			MessageBox::Show("There is no other data", "No data", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}
	private: System::Void butSaveUpdateAdminRe_Click(System::Object^ sender, System::EventArgs^ e)
	{

		Recipient R;
		String^ Date, ^ TempId;
		Date = textBoxUpdateAdminRe->Text;
		TempId = textBoxIdAdminRe->Text;
		std::string date = msclr::interop::marshal_as<std::string>(Date);
		int TindexReAdmin = int::Parse(TempId); // string to int


		if (Date != "") {

			if (FnameUpdateAdminRe == true)
			{
				R.UpdateAccount(1, TindexReAdmin, date);
				FnameUpdateAdminRe = false;
				panelUpdateAdminRe->SendToBack();
				textBoxUpdateAdminRe->Clear();
			}
			else if (LnameUpdateAdminRe == true)
			{
				R.UpdateAccount(2, TindexReAdmin, date);
				LnameUpdateAdminRe = false;
				panelUpdateAdminRe->SendToBack();
				textBoxUpdateAdminRe->Clear();
			}
			else if (EmailUpdateAdminRe == true)
			{
				R.UpdateAccount(5, TindexReAdmin, date);
				EmailUpdateAdminRe = false;
				panelUpdateAdminRe->SendToBack();
				textBoxUpdateAdminRe->Clear();
			}
			else if (PassUpdateAdminRe == true)
			{
				R.UpdateAccount(6, TindexReAdmin, date);
				PassUpdateAdminRe = false;

				panelUpdateAdminRe->SendToBack();
				textBoxUpdateAdminRe->Clear();
			}
			else if (AgeUpdateAdminRe == true)
			{
				R.UpdateAccount(4, TindexReAdmin, date);
				AgeUpdateAdminRe = false;
				panelUpdateAdminRe->SendToBack();
				textBoxUpdateAdminRe->Clear();
			}
			else if (GenderUpdateAdminRe == true)
			{
				R.UpdateAccount(3, TindexReAdmin, date);
				GenderUpdateAdminRe = false;
				panelUpdateAdminRe->SendToBack();
				textBoxUpdateAdminRe->Clear();
			}
			else if (BloodUpdateAdminRe == true)
			{
				R.UpdateAccount(7, TindexReAdmin, date);
				BloodUpdateAdminRe = false;
				panelUpdateAdminRe->SendToBack();
				textBoxUpdateAdminRe->Clear();
			}
			else if (HosUpdateAdminRe == true)
			{
				R.UpdateAccount(8, TindexReAdmin, date);
				HosUpdateAdminRe = false;
				panelUpdateAdminRe->SendToBack();
				textBoxUpdateAdminRe->Clear();
			}
			else if (DocUpdateAdminRe == true)
			{
				R.UpdateAccount(9, TindexReAdmin, date);
				DocUpdateAdminRe = false;
				panelUpdateAdminRe->SendToBack();
				textBoxUpdateAdminRe->Clear();
			}

			std::string fiile = "Recipient.csv";
			filecsv f;

			String^ id = gcnew String(f.Readunitfromfile(indexReAdmin, 0, fiile).c_str());
			String^ Fname = gcnew String(f.Readunitfromfile(indexReAdmin, 1, fiile).c_str());
			String^ Lname = gcnew String(f.Readunitfromfile(indexReAdmin, 2, fiile).c_str());
			String^ Age = gcnew String(f.Readunitfromfile(indexReAdmin, 4, fiile).c_str());
			String^ email = gcnew String(f.Readunitfromfile(indexReAdmin, 5, fiile).c_str());
			String^ pass = gcnew String(f.Readunitfromfile(indexReAdmin, 6, fiile).c_str());
			String^ gender = gcnew String(f.Readunitfromfile(indexReAdmin, 3, fiile).c_str());
			String^ booldType = gcnew String(f.Readunitfromfile(indexReAdmin, 7, fiile).c_str());

			String^ Hos = gcnew String(f.Readunitfromfile(indexReAdmin, 8, fiile).c_str());
			String^ Doc = gcnew String(f.Readunitfromfile(indexReAdmin, 9, fiile).c_str());


			//data for home Re
			textBoxIdAdminRe->Text = id;
			labelFnameAdminRe->Text = Fname;
			labelLnameAdminRe->Text = Lname;
			labelHosAdminRe->Text = Hos;
			labelBloodeAdminRe->Text = booldType;
			labelDocAdminRe->Text = Doc;
			labelEmailAdminRe->Text = email;
			labelPasAdminRe->Text = pass;
			labelAgeAdminRe->Text = Age;
			labelGenderAdminRe->Text = gender;


		}
	}
	private: System::Void butExitUpdateAdminRe_Click(System::Object^ sender, System::EventArgs^ e)
	{
		panelUpdateAdminRe->SendToBack();
		textBoxUpdateAdminRe->Clear();
		bool FnameUpdateAdminRe = false;
		bool LnameUpdateAdminRe = false;
		bool EmailUpdateAdminRe = false;
		bool PassUpdateAdminRe = false;
		bool AgeUpdateAdminRe = false;
		bool GenderUpdateAdminRe = false;
		bool BloodUpdateAdminRe = false;
		bool HosUpdateAdminRe = false;
		bool DocUpdateAdminRe = false;

	}
		   //Del Accont Re
	private: System::Void butYesDelAccoRe_Click(System::Object^ sender, System::EventArgs^ e) {
		Recipient R;
		filecsv f;
		std::string fiile = "Recipient.csv";
		String^ mail = gcnew String(f.Readunitfromfile(CurentUserIndex, 5, fiile).c_str());
		std::string email = msclr::interop::marshal_as<std::string>(mail);
		R.DeleteAccount(email);
		main->BringToFront();
	}
	private: System::Void butDelAccRe_Click(System::Object^ sender, System::EventArgs^ e)
	{
		panelDelAcconetRe->BringToFront();
	}
	private: System::Void butNoDelAccoRe_Click(System::Object^ sender, System::EventArgs^ e) {
		panelDelAcconetRe->SendToBack();
	}
	private: System::Void butExitDelPanel_Click(System::Object^ sender, System::EventArgs^ e) {
		panelDelAcconetRe->SendToBack();
	}
		   //Del accont do
	private: System::Void butYesDelAccoDo_Click(System::Object^ sender, System::EventArgs^ e) {
		Donor d;
		filecsv f;
		std::string fiile = "data.csv";
		String^ mail = gcnew String(f.Readunitfromfile(CurentUserIndex, 4, fiile).c_str());
		std::string email = msclr::interop::marshal_as<std::string>(mail);
		d.DeleteAccount(email);
		main->BringToFront();

	}
	private: System::Void butNoDelAccoDo_Click(System::Object^ sender, System::EventArgs^ e) {
		panelDelAccoDo->SendToBack();
	}
	private: System::Void butExitDelAccoPanelDo_Click(System::Object^ sender, System::EventArgs^ e) {
		panelDelAccoDo->SendToBack();

	}
		   /////////Admin Del accont donor
	private: System::Void butDelAcoAdminDo_Click(System::Object^ sender, System::EventArgs^ e) {
		panelDelAccoAdmin->BringToFront();

		DelAcoAdminRe = true;

	}
	private: System::Void butExitDelAcoAdminDo_Click(System::Object^ sender, System::EventArgs^ e) {
		DelAcoAdminDo = false;
		DelAcoAdminRe = false;
		panelDelAccoAdmin->SendToBack();
	}
	private: System::Void butNoDelAcoAdminDo_Click(System::Object^ sender, System::EventArgs^ e) {
		panelDelAccoAdmin->SendToBack();
		DelAcoAdminDo = false;
		DelAcoAdminRe = false;
	}

	private: System::Void butYesDelAcoAdminDo_Click(System::Object^ sender, System::EventArgs^ e) {
		if (DelAcoAdminDo == true)
		{
			Donor d;
			filecsv f;
			std::string fiile = "data.csv";
			String^ mail = gcnew String(f.Readunitfromfile(indexDoAdmin, 4, fiile).c_str());
			std::string email = msclr::interop::marshal_as<std::string>(mail);
			d.DeleteAccount(email);
			panelDelAccoAdmin->SendToBack();
			DelAcoAdminDo = false;
		}
		else if (DelAcoAdminRe == true)
		{
			Recipient R;
			filecsv f;
			std::string fiile = "Recipient.csv";
			String^ mail = gcnew String(f.Readunitfromfile(indexReAdmin, 5, fiile).c_str());
			std::string email = msclr::interop::marshal_as<std::string>(mail);
			R.DeleteAccount(email);
			panelDelAccoAdmin->SendToBack();
			DelAcoAdminRe = false;
		}
	}
	private: System::Void butDelAcoAdminDo_Click_1(System::Object^ sender, System::EventArgs^ e) {
		panelDelAccoAdmin->BringToFront();
		DelAcoAdminDo = true;
	}

		   //insert Donor
	private: System::Void butAddDoAdmin_Click(System::Object^ sender, System::EventArgs^ e) {
		Donor d;
		String^ varFname, ^ varLname, ^ varPassword, ^ varEmail, ^ varAge
			, ^ varBooldType, ^ varGender, ^ varLastDate, ^ varDis, ^ varMid;
		varFname = textBoxFnameInAdminDo->Text;
		varLname = textBoxLnameInAdminDo->Text;
		varEmail = textBoxEmailInAdminDo->Text;
		varPassword = textBoxPasInAdminDo->Text;
		varAge = textBoxAgeInAdminDo->Text;
		varBooldType = textBoxBloodInAdminDo->Text;
		varLastDate = textBoxLastDonInAdminDo->Text;
		varDis = textBoxDisInAdminDo->Text;
		varMid = textBoxMidInAdminDo->Text;
		varGender = textBoxGendrInAdminDo->Text;
		std::string date = msclr::interop::marshal_as<std::string>(varLastDate);
		std::string gender = msclr::interop::marshal_as<std::string>(varGender);
		std::string Fname = msclr::interop::marshal_as<std::string>(varFname);
		std::string Lname = msclr::interop::marshal_as<std::string>(varLname);
		std::string pasword = msclr::interop::marshal_as<std::string>(varPassword);
		std::string email = msclr::interop::marshal_as<std::string>(varEmail);
		std::string age = msclr::interop::marshal_as<std::string>(varAge);
		std::string dis = msclr::interop::marshal_as<std::string>(varDis);
		std::string mid = msclr::interop::marshal_as<std::string>(varMid);

		int ageInt;
		std::string BooldType = msclr::interop::marshal_as<std::string>(varBooldType);
		if (varEmail != "" && varPassword != "") {
			ageInt = int::Parse(varAge); // string to int
			d.Register(Fname, Lname, ageInt, email, pasword, gender, BooldType, dis, mid, date);
			textBoxEmailInAdminDo->Clear();
			textBoxBloodInAdminDo->Clear();
			textBoxGendrInAdminDo->Clear();
			textBoxFnameInAdminDo->Clear();
			textBoxAgeInAdminDo->Clear();
			textBoxLnameInAdminDo->Clear();
			textBoxPasInAdminDo->Clear();
			textBoxDisInAdminDo->Clear();
			textBoxLastDonInAdminDo->Clear();
			textBoxMidInAdminDo->Clear();
			panelInserDo->SendToBack();
		}

	}
	private: System::Void butExitInsertDo_Click(System::Object^ sender, System::EventArgs^ e)
	{
		panelInserDo->SendToBack();
	}
	private: System::Void butInsertAdminDo_Click(System::Object^ sender, System::EventArgs^ e)
	{
		panelInserDo->BringToFront();

	}
		   /// insert Re
	private: System::Void butInsertRe_Click(System::Object^ sender, System::EventArgs^ e)
	{
		panelInsertRe->BringToFront();
	}
	private: System::Void butAddReAdmin_Click(System::Object^ sender, System::EventArgs^ e) {
		Recipient R;
		R.Read_Data();
		String^ varFname, ^ varLname, ^ varPassword, ^ varEmail, ^ varAge,
			^ varBooldType, ^ varGender, ^ varHos, ^ varDoc;
		varFname = textBoxFnameInAdminRe->Text;
		varLname = textBoxLnameInAdminRe->Text;
		varEmail = textBoxEmailInAdminRe->Text;
		varPassword = textBoxPasInAdminRe->Text;
		varAge = textBoxAgeInAdminRe->Text;
		varBooldType = textBoxBloodInAdminRe->Text;
		varHos = textBoxHosInAdminRe->Text;
		varDoc = textBoxDocInAdminRe->Text;
		varGender = textBoxGenderInAdminRe->Text;
		std::string Hos = msclr::interop::marshal_as<std::string>(varHos);
		std::string gender = msclr::interop::marshal_as<std::string>(varGender);
		std::string Fname = msclr::interop::marshal_as<std::string>(varFname);
		std::string Lname = msclr::interop::marshal_as<std::string>(varLname);
		std::string pasword = msclr::interop::marshal_as<std::string>(varPassword);
		std::string email = msclr::interop::marshal_as<std::string>(varEmail);
		std::string age = msclr::interop::marshal_as<std::string>(varAge);
		std::string doc = msclr::interop::marshal_as<std::string>(varDoc);

		int ageInt;
		std::string BooldType = msclr::interop::marshal_as<std::string>(varBooldType);
		if (varEmail != "" && varPassword != "" && varAge != "" && Fname != "") {
			ageInt = int::Parse(varAge); // string to int
			R.Register(Fname, Lname, gender, ageInt, email, pasword, BooldType, Hos, doc);
			textBoxEmailInAdminRe->Clear();
			textBoxBloodInAdminRe->Clear();
			textBoxGenderInAdminRe->Clear();
			textBoxFnameInAdminRe->Clear();
			textBoxAgeInAdminRe->Clear();
			textBoxLnameInAdminRe->Clear();
			textBoxPasInAdminRe->Clear();
			textBoxHosInAdminRe->Clear();
			textBoxDocInAdminRe->Clear();
			panelInsertRe->SendToBack();
		}
	}
	private: System::Void butExitInserRe_Click(System::Object^ sender, System::EventArgs^ e)
	{
		panelInsertRe->SendToBack();
	}


		   //style Menu Bar Admin Page(color,font)
	private: System::Void butAdminPageHo_Click(System::Object^ sender, System::EventArgs^ e) {
		this->butAdminPageHo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));
		this->butAdminPageDo->BackColor = System::Drawing::Color::Transparent;
		this->butAdminPageRe->BackColor = System::Drawing::Color::Transparent;
		this->butAdminPageReq->BackColor = System::Drawing::Color::Transparent;
		///////////////font
		this->butAdminPageDo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));
		this->butAdminPageRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));
		this->butAdminPageReq->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));
		this->butAdminPageHo->ForeColor = System::Drawing::Color::White;
		panelHomeAdmin->BringToFront();
	}
	private: System::Void butAdminPageReq_Click(System::Object^ sender, System::EventArgs^ e) {
		this->butAdminPageReq->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));
		this->butAdminPageDo->BackColor = System::Drawing::Color::Transparent;
		this->butAdminPageRe->BackColor = System::Drawing::Color::Transparent;
		this->butAdminPageHo->BackColor = System::Drawing::Color::Transparent;
		///////////////font
		this->butAdminPageDo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));
		this->butAdminPageHo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));
		this->butAdminPageRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));
		this->butAdminPageReq->ForeColor = System::Drawing::Color::White;
		panelRequestAdmin->BringToFront();
	}
	private: System::Void butAdminPageDo_Click(System::Object^ sender, System::EventArgs^ e) {
		this->butAdminPageDo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));
		this->butAdminPageHo->BackColor = System::Drawing::Color::Transparent;
		this->butAdminPageRe->BackColor = System::Drawing::Color::Transparent;
		this->butAdminPageReq->BackColor = System::Drawing::Color::Transparent;
		///////////////font
		this->butAdminPageHo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));
		this->butAdminPageRe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));
		this->butAdminPageReq->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));
		this->butAdminPageDo->ForeColor = System::Drawing::Color::White;
		panelDoAdmin->BringToFront();
	}
	private: System::Void butAdminPageRe_Click(System::Object^ sender, System::EventArgs^ e) {
		this->butAdminPageRe->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));
		this->butAdminPageDo->BackColor = System::Drawing::Color::Transparent;
		this->butAdminPageHo->BackColor = System::Drawing::Color::Transparent;
		this->butAdminPageReq->BackColor = System::Drawing::Color::Transparent;
		///////////////font
		this->butAdminPageDo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));
		this->butAdminPageReq->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));
		this->butAdminPageHo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
			static_cast<System::Int32>(static_cast<System::Byte>(85)));
		this->butAdminPageRe->ForeColor = System::Drawing::Color::White;
		panelReAdmin->BringToFront();
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e)
	{
		main->BringToFront();
	}
	private: System::Void butNextReqAdmin_Click(System::Object^ sender, System::EventArgs^ e)
	{

		Request R;
		R.Read_Data();
		String^ id, ^ Fname, ^ Lname, ^ Blood, ^ Date, ^ Age, ^ Email, ^ Dis;
		std::string fiileReq = "DonationRequestData.csv", fiileDo = "data.csv";
		filecsv f;
		String^ StatuL = gcnew String(f.Readunitfromfile(R.totalNumberOfRequests, 3, fiileReq).c_str());

		if (indexReqDoAdmin < stoi(R.totalNumberOfRequestss) - 1 && (indexReqDoAdmin != stoi(R.totalNumberOfRequestss) || StatuL == "2"))
			indexReqDoAdmin++;
		else {
			MessageBox::Show("There is no other data", "No data", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}


		String^ Statu = gcnew String(f.Readunitfromfile(indexReqDoAdmin, 3, fiileReq).c_str());
		while (Statu != "2" && indexReqDoAdmin != stoi(R.totalNumberOfRequestss))
		{
			indexReqDoAdmin++;
			Statu = gcnew String(f.Readunitfromfile(indexReqDoAdmin, 3, fiileReq).c_str());

		}
		id = gcnew String(f.Readunitfromfile(indexReqDoAdmin, 0, fiileReq).c_str());
		Fname = gcnew String(f.Readunitfromfile(indexReqDoAdmin, 1, fiileDo).c_str());
		Lname = gcnew String(f.Readunitfromfile(indexReqDoAdmin, 2, fiileDo).c_str());
		Email = gcnew String(f.Readunitfromfile(indexReqDoAdmin, 4, fiileDo).c_str());
		Age = gcnew String(f.Readunitfromfile(indexReqDoAdmin, 3, fiileDo).c_str());
		Blood = gcnew String(f.Readunitfromfile(indexReqDoAdmin, 1, fiileReq).c_str());
		Dis = gcnew String(f.Readunitfromfile(indexReqDoAdmin, 8, fiileDo).c_str());
		Date = gcnew String(f.Readunitfromfile(indexReqDoAdmin, 2, fiileReq).c_str());

		//data for home Re
		if (Statu == "2") {
			textBoxIdDoReqAdmin->Text = id;
			labelFnameDoReqAdmin->Text = Fname;
			labelLnameDoReqAdmin->Text = Lname;
			labelBHosDoReqAdmin->Text = Dis;
			labelBloodDoReqAdmin->Text = Blood;
			labelDateDoReqAdmin->Text = Date;
			labelEmailDoReqAdmin->Text = Email;
			labelAgeDoReqAdmin->Text = Age;
		}
	}
	private: System::Void butBackReqAdmin_Click(System::Object^ sender, System::EventArgs^ e) {
		Request R;
		R.Read_Data();
		std::string fiileReq = "DonationRequestData.csv", fiileDo = "data.csv";
		filecsv f;
		String^ Statu1 = gcnew String(f.Readunitfromfile(1, 3, fiileReq).c_str());

		if (indexReqDoAdmin > 0 && (indexReqDoAdmin != 1 || Statu1 == "2"))
			indexReqDoAdmin--;
		else {
			MessageBox::Show("There is no other data", "No data", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}


		String^ Statu = gcnew String(f.Readunitfromfile(indexReqDoAdmin, 3, fiileReq).c_str());

		while (Statu != "2" && indexReqDoAdmin != 0)
		{
			indexReqDoAdmin--;
			Statu = gcnew String(f.Readunitfromfile(indexReqDoAdmin, 3, fiileReq).c_str());
		}
		String^ id = gcnew String(f.Readunitfromfile(indexReqDoAdmin, 0, fiileReq).c_str());
		String^ Fname = gcnew String(f.Readunitfromfile(indexReqDoAdmin, 1, fiileDo).c_str());
		String^ Lname = gcnew String(f.Readunitfromfile(indexReqDoAdmin, 2, fiileDo).c_str());
		String^ Email = gcnew String(f.Readunitfromfile(indexReqDoAdmin, 4, fiileDo).c_str());
		String^ Age = gcnew String(f.Readunitfromfile(indexReqDoAdmin, 3, fiileDo).c_str());
		String^ Blood = gcnew String(f.Readunitfromfile(indexReqDoAdmin, 1, fiileReq).c_str());
		String^ Dis = gcnew String(f.Readunitfromfile(indexReqDoAdmin, 8, fiileDo).c_str());
		String^ Date = gcnew String(f.Readunitfromfile(indexReqDoAdmin, 2, fiileReq).c_str());

		//data for home Re
		if (Statu == "2") {
			textBoxIdDoReqAdmin->Text = id;
			labelFnameDoReqAdmin->Text = Fname;
			labelLnameDoReqAdmin->Text = Lname;
			labelBHosDoReqAdmin->Text = Dis;
			labelBloodDoReqAdmin->Text = Blood;
			labelDateDoReqAdmin->Text = Date;
			labelEmailDoReqAdmin->Text = Email;
			labelAgeDoReqAdmin->Text = Age;
		}
	}
	private: System::Void butValidReqDoAdmin_Click(System::Object^ sender, System::EventArgs^ e) {
		Request Rq;
		filecsv f;
		std::string fileDo = "data.csv", fileDoReq = "DonationRequestData.csv";
		String^ varId = textBoxIdDoReqAdmin->Text;
		std::string id = msclr::interop::marshal_as<std::string>(varId);
		int idInt = stoi(id);
		String^ Age = gcnew String(f.Readunitfromfile(idInt - 1, 3, fileDo).c_str());
		String^ Dis = gcnew String(f.Readunitfromfile(idInt - 1, 8, fileDo).c_str());
		String^ LastDo = gcnew String(f.Readunitfromfile(idInt - 1, 10, fileDo).c_str());
		String^ varDate = labelDateDoReqAdmin->Text;

		std::string age = msclr::interop::marshal_as<std::string>(Age);
		std::string dis = msclr::interop::marshal_as<std::string>(Dis);


		std::string date = msclr::interop::marshal_as<std::string>(varDate);
		std::string lastdo = msclr::interop::marshal_as<std::string>(LastDo);

		int day = stoi(date.substr(0, 2));
		int month = stoi(date.substr(3, 2));
		int year = stoi(date.substr(6, 4));

		int dayL = stoi(lastdo.substr(0, 2));
		int monthL = stoi(lastdo.substr(3, 2));
		int yearL = stoi(lastdo.substr(6, 4));
		long long diff = Rq.calc_date_diff(dayL, monthL, yearL, day, month, year);
		bool chack = Rq.validate_donors_request(indexReqDoAdmin, stoi(age), dis, Rq.validateDate(diff));
		if (chack)
		{
			panelAcceptReq->BringToFront();
		}
		else
		{
			panelRejectReq->BringToFront();
		}
	}
	private: System::Void butAcceptReqDoAdmin_Click(System::Object^ sender, System::EventArgs^ e) {
		Request Req;
		String^ varId = textBoxIdDoReqAdmin->Text;
		String^ date = labelDateDoReqAdmin->Text;
		Donor d;

		std::string id = msclr::interop::marshal_as<std::string>(varId);
		std::string Date = msclr::interop::marshal_as<std::string>(date);

		int idInt = stoi(id);
		d.UpdateAccount(10, idInt, Date);
		Req.change_state(3, "1", idInt);
		panelAcceptReq->SendToBack();
	}

	private: System::Void button7_Click_1(System::Object^ sender, System::EventArgs^ e) {
		main->BringToFront();
	}
	private: System::Void butBackFromAdminLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		main->BringToFront();
	}
		   //Req Re
	private: System::Void button8_Click_1(System::Object^ sender, System::EventArgs^ e) {

		Recipient R;
		String^ varHos; String^ varNum; String^ varBlood;
		varHos = textBoxReqHosRe->Text;
		varNum = textBoxQuantityReqRe->Text;
		varBlood = comboBoxReqBloodeRe->Text;

		std::string Hos = msclr::interop::marshal_as<std::string>(varHos);
		std::string num = msclr::interop::marshal_as<std::string>(varNum);
		std::string blood = msclr::interop::marshal_as<std::string>(varBlood);
		int IntNum = stoi(num);
		if (R.Count_BloodTypes(blood, IntNum))
		{
			MessageBox::Show(varNum + " bags of blood were drawn from type: " + varBlood, "Accept", MessageBoxButtons::OK, MessageBoxIcon::None);
			R.UpdateFileReq(IntNum, blood);
		}
		else
		{
			MessageBox::Show("There are currently no " + varNum + " bags of blood type: " + varBlood, "Reject", MessageBoxButtons::OK, MessageBoxIcon::Warning);

		}


	}
	private: System::Void butExitAcceptReqPanel_Click(System::Object^ sender, System::EventArgs^ e)
	{
		panelAcceptReq->SendToBack();
	}
	private: System::Void butExitRejectPanel_Click(System::Object^ sender, System::EventArgs^ e)
	{
		panelRejectReq->SendToBack();
	}

		   //Reject Req Donor
	private: System::Void butRejectReq_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Request Req;
		String^ varId = textBoxIdDoReqAdmin->Text;
		std::string id = msclr::interop::marshal_as<std::string>(varId);
		int idInt = stoi(id);
		Req.change_state(3, "0", idInt);
		panelRejectReq->SendToBack();
	}





		   //drag 
	private: System::Void titelbar_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		//enabel draggingg 
		dragging = true;
		offset.X = e->X;
		offset.Y = e->Y;

	}
	private: System::Void titelbar_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		//chack ablel to move
		if (dragging)
		{
			this->titelbar->BackColor = System::Drawing::SystemColors::ControlDark;

			Point currentScrennPos = PointToScreen(Point(e->X, e->Y));
			Location = Point(currentScrennPos.X - offset.X, currentScrennPos.Y - offset.Y);
		}
	}
	private: System::Void titelbar_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		//disable dranggging
		dragging = false;
		this->titelbar->BackColor = System::Drawing::Color::Gainsboro;

	}

		   //display blood
	private: System::Void butDisplayBlood_Click(System::Object^ sender, System::EventArgs^ e) {
		Request Req; String^ I0D; std::string i0d, Exdate;
		String^ Blood; std::string blood;
		String^ Date; std::string date;
		String^ Stat, ^ ExDate; std::string stat;
		Req.Read_Data();
		int c = 0;
		int id;
		int A = 0, A_ = 0, B = 0, B_ = 0, AB = 0, AB_ = 0, O = 0, O_ = 0;
		for (int i = 0; i < Req.request.size(); i++) {
			i0d = Req.request[i].Donor_ID;
			blood = Req.request[i].Blood;
			date = Req.request[i].Date;
			stat = Req.request[i].state;
			id = Req.request[i].Donor_ID;
			I0D = gcnew String(i0d.c_str());
			Blood = gcnew String(blood.c_str());
			Date = gcnew String(date.c_str());

			std::string day = date.substr(0, 2);
			std::string month = date.substr(3, 2);
			std::string year = date.substr(6, 4);
			Exdate = Req.addDays(stoi(day), stoi(month), stoi(year), 90);
			ExDate = gcnew String(Exdate.c_str());

			if (stat == "1") {

				dataGridView1->Rows->Add();
				this->dataGridView1->Rows[c]->Cells[0]->Value = c;
				this->dataGridView1->Rows[c]->Cells[1]->Value = id;
				this->dataGridView1->Rows[c]->Cells[2]->Value = Blood;
				this->dataGridView1->Rows[c]->Cells[3]->Value = Date;
				this->dataGridView1->Rows[c]->Cells[4]->Value = ExDate;
				c++;
				if (blood == "A+")
					A++;
				else if (blood == "A-")
					A_++;
				else if (blood == "B+")
					B++;
				else if (blood == "B-")
					B_++;
				else if (blood == "AB+")
					AB++;
				else if (blood == "AB-")
					AB_++;
				else if (blood == "O+")
					O++;
				else if (blood == "O-")
					O_++;
			}
		}

		dataGridView3->Rows->Add();
		this->dataGridView3->Rows[0]->Cells[0]->Value = "A+";
		this->dataGridView3->Rows[0]->Cells[1]->Value = A;
		dataGridView3->Rows->Add();
		this->dataGridView3->Rows[1]->Cells[0]->Value = "A-";
		this->dataGridView3->Rows[1]->Cells[1]->Value = A_;
		dataGridView3->Rows->Add();
		this->dataGridView3->Rows[2]->Cells[0]->Value = "B+";
		this->dataGridView3->Rows[2]->Cells[1]->Value = B;
		dataGridView3->Rows->Add();
		this->dataGridView3->Rows[3]->Cells[0]->Value = "B-";
		this->dataGridView3->Rows[3]->Cells[1]->Value = B_;
		dataGridView3->Rows->Add();
		this->dataGridView3->Rows[4]->Cells[0]->Value = "O+";
		this->dataGridView3->Rows[4]->Cells[1]->Value = O;
		dataGridView3->Rows->Add();
		this->dataGridView3->Rows[5]->Cells[0]->Value = "O-";
		this->dataGridView3->Rows[5]->Cells[1]->Value = O_;
		dataGridView3->Rows->Add();
		this->dataGridView3->Rows[6]->Cells[0]->Value = "AB+";
		this->dataGridView3->Rows[6]->Cells[1]->Value = AB;
		dataGridView3->Rows->Add();
		this->dataGridView3->Rows[7]->Cells[0]->Value = "AB-";
		this->dataGridView3->Rows[7]->Cells[1]->Value = AB_;
		dataGridView3->Rows->Add();
	}


	private: System::Void butDisplayDoDate_Click(System::Object^ sender, System::EventArgs^ e) {
		Donor d;
		String^ Fname, ^ Lname, ^ Age, ^ Email, ^ Pasword, ^ Blood, ^ Gender, ^ Dis, ^ Mid, ^ LastDon;
		std::string  fname, lname, email, pasword, gender, dis, mid, lastdon, blood;

		int id, age;
		d.readData();

		for (int i = 0; i < d.getallDonors().size(); i++) {
			id = d.getallDonors()[i].getId();
			fname = d.getallDonors()[i].getFirstname();
			lname = d.getallDonors()[i].getLastName();
			age = d.getallDonors()[i].getAge();
			email = d.getallDonors()[i].getE_mail();
			pasword = d.getallDonors()[i].getPassword();
			blood = d.getallDonors()[i].getBloodType();
			gender = d.getallDonors()[i].getGender();
			dis = d.getallDonors()[i].getDis();
			mid = d.getallDonors()[i].getMed();
			lastdon = d.getallDonors()[i].getLastDon();
			Fname = gcnew String(fname.c_str());
			Lname = gcnew String(lname.c_str());
			Email = gcnew String(email.c_str());
			Pasword = gcnew String(pasword.c_str());
			Dis = gcnew String(dis.c_str());
			Mid = gcnew String(mid.c_str());
			LastDon = gcnew String(lastdon.c_str());
			Blood = gcnew String(blood.c_str());
			Gender = gcnew String(gender.c_str());
			dataGridView2->Rows->Add();
			this->dataGridView2->Rows[i]->Cells[0]->Value = id;
			this->dataGridView2->Rows[i]->Cells[1]->Value = Fname;
			this->dataGridView2->Rows[i]->Cells[2]->Value = Lname;
			this->dataGridView2->Rows[i]->Cells[3]->Value = age;
			this->dataGridView2->Rows[i]->Cells[4]->Value = Email;
			this->dataGridView2->Rows[i]->Cells[5]->Value = Pasword;
			this->dataGridView2->Rows[i]->Cells[6]->Value = Gender;
			this->dataGridView2->Rows[i]->Cells[7]->Value = Blood;
			this->dataGridView2->Rows[i]->Cells[8]->Value = Dis;
			this->dataGridView2->Rows[i]->Cells[9]->Value = Mid;
			this->dataGridView2->Rows[i]->Cells[10]->Value = LastDon;
			panelDisplayDoDate->BringToFront();

		}

	}


	private: System::Void admin_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		toolTip1->Show("Admin", admin);
	}
	private: System::Void donoer_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		toolTip1->Show("Donor", donoer);
	}
	private: System::Void recipient_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		toolTip1->Show("Recipient", recipient);
	}
	private: System::Void button1_Click_3(System::Object^ sender, System::EventArgs^ e) {
		panelDisplayDoDate->SendToBack();
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		panelDisplayReDate->SendToBack();
	}

	private: System::Void butExitDisplayReDate_Click(System::Object^ sender, System::EventArgs^ e) {
		panelDisplayReDate->SendToBack();
	}
	private: System::Void butDisplayReDate_Click_1(System::Object^ sender, System::EventArgs^ e) {
		panelDisplayReDate->BringToFront();
		Recipient R;
		String^ Fname, ^ Lname, ^ Age, ^ Email, ^ Pasword, ^ Blood, ^ Gender, ^ Doc, ^ Hos;
		std::string  fname, lname, email, pasword, gender, doc, hos, blood;

		int id, age;
		R.Read_Data();

		for (int i = 0; i < R.getrecipients().size(); i++) {
			id = R.getrecipients()[i].getId();
			fname = R.getrecipients()[i].getFirstname();
			lname = R.getrecipients()[i].getLastName();
			age = R.getrecipients()[i].getAge();
			email = R.getrecipients()[i].getE_mail();
			pasword = R.getrecipients()[i].getPassword();
			blood = R.getrecipients()[i].getBloodType();
			gender = R.getrecipients()[i].getGender();
			doc = R.getrecipients()[i].getDoc();
			hos = R.getrecipients()[i].getHos();
			Fname = gcnew String(fname.c_str());
			Lname = gcnew String(lname.c_str());
			Email = gcnew String(email.c_str());
			Pasword = gcnew String(pasword.c_str());
			Doc = gcnew String(doc.c_str());
			Hos = gcnew String(hos.c_str());
			Blood = gcnew String(blood.c_str());
			Gender = gcnew String(gender.c_str());
			dataGridView4->Rows->Add();
			this->dataGridView4->Rows[i]->Cells[0]->Value = id;
			this->dataGridView4->Rows[i]->Cells[1]->Value = Fname;
			this->dataGridView4->Rows[i]->Cells[2]->Value = Lname;
			this->dataGridView4->Rows[i]->Cells[3]->Value = age;
			this->dataGridView4->Rows[i]->Cells[4]->Value = Email;
			this->dataGridView4->Rows[i]->Cells[5]->Value = Pasword;
			this->dataGridView4->Rows[i]->Cells[6]->Value = Gender;
			this->dataGridView4->Rows[i]->Cells[7]->Value = Blood;
			this->dataGridView4->Rows[i]->Cells[8]->Value = Doc;
			this->dataGridView4->Rows[i]->Cells[9]->Value = Hos;

			panelDisplayReDate->BringToFront();

		}
	}
	private: System::Void textBoxDisRegDo_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		toolTip1->Show("(blood pressure disorders, thyroid disease, diabetes, cancer, heart disorders, hepatitis) ", textBoxDisRegDo);
	}
	private: System::Void butDisplayReDate_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		toolTip1->Show("Display All Recipients Data ", butDisplayReDate);

	}
private: System::Void butDisplayDoDate_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	toolTip1->Show("Display All Donors Data ", butDisplayDoDate);
}
};//end
}

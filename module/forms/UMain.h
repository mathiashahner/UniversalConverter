#ifndef UMainH
#define UMainH

#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.ListBox.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Ani.hpp>
#include <FMX.Edit.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.Memo.hpp>
#include <FMX.Objects.hpp>
#include <FMX.Menus.hpp>
#include <FMX.ActnList.hpp>
#include <System.Actions.hpp>

class TFormMain : public TForm
{
__published:	// IDE-managed Components
   TLabel *Title;
   TComboBox *Input2List;
   TComboBox *Input1List;
   TEdit *Input1;
   TEdit *Input2;
   TButton *ConvertButtom;
   TLabel *CategoryLabel;
   TComboBox *CategoryList;
   void __fastcall ConvertButtomClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
   __fastcall TFormMain(TComponent* Owner);
};

extern PACKAGE TFormMain *FormMain;

#endif

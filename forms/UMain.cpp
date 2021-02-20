#include <fmx.h>
#pragma hdrstop

#include "UMain.h"
#include "modInclude.h"

#pragma package(smart_init)
#pragma resource "*.fmx"
TFormMain *FormMain;

__fastcall TFormMain::TFormMain(TComponent* Owner)
   : TForm(Owner)
{
}

void __fastcall TFormMain::ConvertButtomClick(TObject *Sender)
{
//   if (StrToFloat(Input1->Text) == 0)
//   {
//      MessageBoxA( NULL, "Enter a Valid Entry!", "Invalid Input", 0 );
//   }
//   else
//   {
   int category;

      category = CategoryList->ItemIndex;

      switch (category)
      {
         case 0: // NULL Option
         {
            MessageBoxA( NULL, "Choose a Category to Continue!", "Invalid Option", 0 );
            break;
         }
         case 1: // Distance
         {
            break;
         }
         case 2: // Numbers
         {
            break;
         }
         case 3: // Temperature
         {
            Input2->Text = CelciusToKelvin( StrToFloat(Input1->Text) );

            break;
         }
         default:
         {
            break;
         }
      }
//   }
}

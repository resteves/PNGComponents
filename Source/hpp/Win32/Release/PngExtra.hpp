// CodeGear C++Builder
// Copyright (c) 1995, 2017 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'PngExtra.pas' rev: 32.00 (Windows)

#ifndef PngextraHPP
#define PngextraHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Vcl.Graphics.hpp>
#include <Winapi.Messages.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ExtCtrls.hpp>

//-- user supplied -----------------------------------------------------------

namespace Pngextra
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TPNGButton;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TPNGButtonStyle : unsigned char { pbsDefault, pbsFlat, pbsNoFrame };

enum DECLSPEC_DENUM TPNGButtonLayout : unsigned char { pbsImageAbove, pbsImageBellow, pbsImageLeft, pbsImageRight };

enum DECLSPEC_DENUM TPNGButtonState : unsigned char { pbsNormal, pbsDown, pbsDisabled };

class PASCALIMPLEMENTATION TPNGButton : public Vcl::Controls::TGraphicControl
{
	typedef Vcl::Controls::TGraphicControl inherited;
	
private:
	TPNGButtonStyle fButtonStyle;
	bool fMouseOverControl;
	System::UnicodeString FCaption;
	TPNGButtonLayout FButtonLayout;
	TPNGButtonState FButtonState;
	Vcl::Imaging::Pngimage::TPngImage* FImageDown;
	Vcl::Imaging::Pngimage::TPngImage* fImageNormal;
	Vcl::Imaging::Pngimage::TPngImage* fImageDisabled;
	Vcl::Imaging::Pngimage::TPngImage* fImageOver;
	System::Classes::TNotifyEvent fOnMouseEnter;
	System::Classes::TNotifyEvent fOnMouseExit;
	void __fastcall SetButtonStyle(const TPNGButtonStyle Value);
	void __fastcall SetCaption(const System::UnicodeString Value);
	void __fastcall SetButtonLayout(const TPNGButtonLayout Value);
	void __fastcall SetButtonState(const TPNGButtonState Value);
	void __fastcall SetImageNormal(Vcl::Imaging::Pngimage::TPngImage* const Value);
	void __fastcall SetImageDown(Vcl::Imaging::Pngimage::TPngImage* const Value);
	void __fastcall SetImageOver(Vcl::Imaging::Pngimage::TPngImage* const Value);
	
__published:
	__property Font;
	__property Visible = {default=1};
	__property TPNGButtonLayout ButtonLayout = {read=FButtonLayout, write=SetButtonLayout, nodefault};
	__property System::UnicodeString Caption = {read=FCaption, write=SetCaption};
	__property Vcl::Imaging::Pngimage::TPngImage* ImageNormal = {read=fImageNormal, write=SetImageNormal};
	__property Vcl::Imaging::Pngimage::TPngImage* ImageDown = {read=FImageDown, write=SetImageDown};
	__property Vcl::Imaging::Pngimage::TPngImage* ImageOver = {read=fImageOver, write=SetImageOver};
	__property TPNGButtonStyle ButtonStyle = {read=fButtonStyle, write=SetButtonStyle, nodefault};
	__property Enabled = {default=1};
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property OnMouseDown;
	__property OnClick;
	__property OnMouseUp;
	__property OnMouseMove;
	__property OnDblClick;
	__property System::Classes::TNotifyEvent OnMouseEnter = {read=fOnMouseEnter, write=fOnMouseEnter};
	__property System::Classes::TNotifyEvent OnMouseExit = {read=fOnMouseExit, write=fOnMouseExit};
	
public:
	__property TPNGButtonState ButtonState = {read=FButtonState, write=SetButtonState, nodefault};
	
protected:
	virtual void __fastcall Paint(void);
	DYNAMIC void __fastcall Click(void);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Message);
	
public:
	__property bool IsMouseOver = {read=fMouseOverControl, nodefault};
	__fastcall virtual TPNGButton(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TPNGButton(void);
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall MakeImageHalfTransparent(Vcl::Imaging::Pngimage::TPngImage* Source, Vcl::Imaging::Pngimage::TPngImage* Dest);
}	/* namespace Pngextra */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_PNGEXTRA)
using namespace Pngextra;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// PngextraHPP

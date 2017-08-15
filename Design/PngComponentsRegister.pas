unit PngComponentsRegister;

interface

uses
  Classes, DesignIntf, TypInfo,
  PngSpeedButton, PngBitBtn, PngImageList, PngCheckListBox, PngComponentEditors,
  PngExtra;

procedure Register;

implementation

const
  SPageName = 'Png';

procedure Register;
begin
  TPngImageList.IDE_WriteData_Hack := true;

  //Register all components
  RegisterComponents(SPageName, [TPngSpeedButton, TPngBitBtn, TPngImageList,
    TPngImageCollection, TPngCheckListBox, TPngButton]);

  //Register component editors
  RegisterComponentEditor(TPngImageList, TPngImageListEditor);
  RegisterComponentEditor(TPngImageCollection, TPngImageCollectionEditor);
  RegisterComponentEditor(TPngBitBtn, TPngButtonEditor);
  RegisterComponentEditor(TPngSpeedButton, TPngButtonEditor);

  //Register property editors
  RegisterPropertyEditor(TypeInfo(TPngImageCollectionItems), TPngImageList,
    'PngImages', TPngImageListImagesEditor); // do not localize
  RegisterPropertyEditor(TypeInfo(TPngImageCollectionItems), TPngImageCollection,
    'Items', TPngImageCollectionItemsEditor); // do not localize

  //Hide properties that should be omitted
  UnlistPublishedProperty(TPngSpeedButton, 'NumGlyphs'); // do not localize
  UnlistPublishedProperty(TPngSpeedButton, 'Glyph'); // do not localize
  UnlistPublishedProperty(TPngBitBtn, 'NumGlyphs'); // do not localize
  UnlistPublishedProperty(TPngBitBtn, 'Glyph'); // do not localize
end;

end.

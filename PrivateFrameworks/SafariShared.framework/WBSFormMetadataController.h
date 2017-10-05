/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSFormMetadataController : NSObject {
    struct HashMap<OpaqueFormAutoFillFrame *, std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata> >, WTF::PtrHash<OpaqueFormAutoFillFrame *>, WTF::HashTraits<OpaqueFormAutoFillFrame *>, WTF::HashTraits<std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata> > > > { 
        struct HashTable<OpaqueFormAutoFillFrame *, WTF::KeyValuePair<OpaqueFormAutoFillFrame *, std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<OpaqueFormAutoFillFrame *, std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata> > > >, WTF::PtrHash<OpaqueFormAutoFillFrame *>, WTF::HashMap<OpaqueFormAutoFillFrame *, std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata> >, WTF::PtrHash<OpaqueFormAutoFillFrame *>, WTF::HashTraits<OpaqueFormAutoFillFrame *>, WTF::HashTraits<std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata> > > >::KeyValuePairTraits, WTF::HashTraits<OpaqueFormAutoFillFrame *> > { 
            struct KeyValuePair<OpaqueFormAutoFillFrame *, std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata> > > {} *m_table; 
            unsigned int m_tableSize; 
            unsigned int m_tableSizeMask; 
            unsigned int m_keyCount; 
            unsigned int m_deletedCount; 
        } m_impl; 
    }  _framesToMetadataMap;
}

+ (bool)convertNumber:(id)arg1 toFormMetadataRequestType:(unsigned long long*)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct OpaqueJSValue { }*)_jsObjectForForm:(id)arg1 inFrame:(id)arg2;
- (void)_lockMetadataForForm:(id)arg1 inFrame:(id)arg2;
- (void)_unlockMetadataForForm:(id)arg1 inFrame:(id)arg2;
- (void)addressBookAutoFillableFieldBlurred:(id)arg1 inFrame:(id)arg2 page:(id)arg3 textFieldMetadata:(id)arg4 formMetadata:(id)arg5;
- (void)addressBookAutoFillableFieldFocused:(id)arg1 withAddressBookAutoFillableFieldMetadata:(id)arg2 inFrame:(id)arg3;
- (void)annotateForm:(double)arg1 inFrame:(id)arg2 withValues:(id)arg3;
- (void)autoFillFormAsynchronouslyInFrame:(id)arg1 withValues:(id)arg2 selectFieldAfterFilling:(id)arg3;
- (void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2;
- (void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 fillSynchronously:(bool)arg3 setAutoFilled:(bool)arg4 focusFieldAfterFilling:(bool)arg5 fieldToFocus:(id)arg6;
- (void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 fillSynchronously:(bool)arg3 setAutoFilled:(bool)arg4 selectFieldAfterFilling:(id)arg5;
- (void)autoFillFormSynchronouslyInFrame:(id)arg1 withValues:(id)arg2;
- (void)autoFillFormSynchronouslyInFrame:(id)arg1 withValues:(id)arg2 selectFieldAfterFilling:(id)arg3;
- (void)clearField:(id)arg1 inFrame:(id)arg2;
- (void)clearMetadataForFrame:(id)arg1;
- (void)clearScriptWorld;
- (void)countUserEditedTextControlsInFrame:(id)arg1 textFields:(unsigned long long*)arg2 textAreas:(unsigned long long*)arg3;
- (void)creditCardFieldBlurred:(id)arg1 inFrame:(id)arg2 page:(id)arg3 textFieldMetadata:(id)arg4 formMetadata:(id)arg5;
- (void)creditCardFieldFocused:(id)arg1 inFrame:(id)arg2;
- (void)disableSpellCheckInField:(id)arg1 inFrame:(id)arg2;
- (void)fillField:(id)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3;
- (void)fillForm:(double)arg1 inFrame:(id)arg2 withPassword:(id)arg3;
- (void)finishedAutoFillingForm:(id)arg1 inFrame:(id)arg2;
- (void)focusField:(id)arg1 inFrame:(id)arg2;
- (id)formAutoFillNodeForField:(id)arg1 inFrame:(id)arg2;
- (id)formAutoFillNodeForJSWrapper:(struct OpaqueJSValue { }*)arg1 inContext:(struct OpaqueJSContext { }*)arg2;
- (id)formElementWithFormID:(double)arg1 inFrame:(id)arg2;
- (id)formSubmissionURLStringForSearchTextField:(id)arg1 inFrame:(id)arg2 useStrictDetection:(bool)arg3;
- (void)getMetadataForAllFormsInPageWithMainFrame:(id)arg1 requestType:(unsigned long long)arg2 frames:(id*)arg3 formMetadata:(id*)arg4;
- (void)getMetadataForTextField:(id)arg1 inFrame:(id)arg2 textFieldMetadata:(id*)arg3 formMetadata:(id*)arg4 requestType:(unsigned long long)arg5;
- (id)init;
- (bool)isFrameAnnotated:(id)arg1;
- (bool)isFrameOrChildAnnotated:(id)arg1;
- (id)metadataForForm:(id)arg1 inFrame:(id)arg2 requestType:(unsigned long long)arg3;
- (struct FrameMetadata { int (**x1)(); struct Vector<OpaqueJSValue *, 0, WTF::CrashOnOverflow, 16> { struct OpaqueJSValue {} **x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; struct OpaqueJSValue {} *x3; struct OpaqueJSValue {} *x4; struct OpaqueJSContext {} *x5; id x6; }*)metadataForFrame:(id)arg1 requestType:(unsigned long long)arg2;
- (bool)pageWithMainFrameMeetsEditedFormTextWarningCriteria:(id)arg1;
- (void)passwordFieldBlurred:(id)arg1 inFrame:(id)arg2 page:(id)arg3 textFieldMetadata:(id)arg4 formMetadata:(id)arg5;
- (void)passwordFieldFocused:(id)arg1 inFrame:(id)arg2;
- (void)passwordFieldFocused:(id)arg1 inFrame:(id)arg2 isPasswordFieldForUserCredentials:(bool)arg3;
- (void)recursivelyClearMetadataForFrames:(id)arg1;
- (void)recursivelyCollectMetadataInFrame:(id)arg1 requestType:(unsigned long long)arg2 frames:(id)arg3 formMetadata:(id)arg4;
- (void)recursivelyCountUserEditedTextControlsInFrame:(id)arg1 textFields:(unsigned long long*)arg2 textAreas:(unsigned long long*)arg3;
- (void)replaceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inField:(id)arg2 inFrame:(id)arg3 withString:(id)arg4 andSelectTailStartingAt:(unsigned long long)arg5;
- (void)selectRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inField:(id)arg2 inFrame:(id)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectionRangeInField:(id)arg1 inFrame:(id)arg2;
- (void)setFormControls:(id)arg1 inFrame:(id)arg2 asAutoFilled:(bool)arg3;
- (bool)shouldAttemptToClassifyFormsWithoutAPasswordFieldAsLoginForms;
- (bool)shouldIncludeNonEmptyFields;
- (void)textFieldBlurred:(id)arg1 inFrame:(id)arg2 page:(id)arg3 textFieldMetadata:(id)arg4 formMetadata:(id)arg5;
- (void)textFieldFocused:(id)arg1 inFrame:(id)arg2;
- (id)uniqueIDForTextField:(id)arg1 inFrame:(id)arg2;
- (unsigned long long)userEditedTextControlCountInArray:(struct OpaqueJSValue { }*)arg1 context:(struct OpaqueJSContext { }*)arg2 expectTextFieldsRatherThanTextAreas:(bool)arg3;
- (void)usernameFieldBlurred:(id)arg1 inFrame:(id)arg2 page:(id)arg3 textFieldMetadata:(id)arg4 formMetadata:(id)arg5;
- (void)usernameFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3;
- (id)visibleNonEmptyTextFieldsInForm:(id)arg1 inFrame:(id)arg2;
- (void)willSendSubmitEventForForm:(id)arg1 inFrame:(id)arg2;
- (void)willSubmitForm:(id)arg1 inFrame:(id)arg2;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMessageBodyHTMLParser : MFMessageBodyParser {
    NSScanner * _scanner;
}

- (void)_consumeNodesFromNode:(id)arg1 upToNode:(id)arg2;
- (void)_findBody;
- (bool)_isMilestoneTagName:(id)arg1;
- (void)dealloc;
- (void)didFindError:(id)arg1;
- (id)initWithHTML:(id)arg1;
- (Class)messageBodyElementClass;
- (int)messageBodyStringAccumulatorDefaultOptions;
- (bool)parse;

@end

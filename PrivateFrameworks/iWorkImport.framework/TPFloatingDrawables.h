/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPFloatingDrawables : TSPObject <TSKDocumentObject> {
    TPDocumentRoot * _documentRoot;
    NSMutableDictionary * _drawablesByPageIndex;
    TSUPointerKeyDictionary * _pageIndexByDrawable;
}

@property (nonatomic, readonly) TPDocumentRoot *documentRoot;

- (void).cxx_destruct;
- (void)addDrawable:(id)arg1 toPageIndex:(unsigned long long)arg2 insertContext:(id)arg3;
- (void)addDrawable:(id)arg1 toPageIndex:(unsigned long long)arg2 insertContext:(id)arg3 suppressDOLC:(bool)arg4;
- (void)addDrawables:(id)arg1 toPageIndex:(unsigned long long)arg2 insertContext:(id)arg3;
- (id)allDrawables;
- (unsigned long long)countOfAllDrawables;
- (id)debugDescription;
- (id)documentRoot;
- (id)drawableEnumerator;
- (id)drawablesOnPageIndex:(unsigned long long)arg1;
- (bool)hasAnyDrawables;
- (id)initWithContext:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (unsigned long long)maximumPageIndex;
- (void)moveDrawable:(id)arg1 toPageIndex:(unsigned long long)arg2;
- (id)orderedDrawablesOnPageIndex:(unsigned long long)arg1;
- (void)p_addDrawable:(id)arg1 toPageIndex:(unsigned long long)arg2;
- (void)p_removeDrawable:(id)arg1;
- (unsigned long long)pageIndexForDrawable:(id)arg1;
- (void)removeDrawable:(id)arg1;
- (void)removeDrawable:(id)arg1 suppressDOLC:(bool)arg2;
- (void)removeDrawables:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end

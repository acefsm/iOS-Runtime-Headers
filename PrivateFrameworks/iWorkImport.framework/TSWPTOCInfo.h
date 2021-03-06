/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTOCInfo : TSWPShapeInfo <TSWPTextualEquivalentProvider> {
    NSArray * _pageNumberRanges;
    TSWPTOCPartitioner * _partitioner;
    <TSWPTOCController> * _tocController;
    NSArray * _tocEntries;
    TSWPTOCSettings * _tocSettings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *pageNumberRanges;
@property (nonatomic, readonly) NSSet *paragraphStylesShownInTOC;
@property (readonly) Class superclass;
@property (nonatomic) <TSWPTOCController> *tocController;
@property (setter=setTOCEntries:, nonatomic, retain) NSArray *tocEntries;
@property (setter=setTOCSettings:, nonatomic, retain) TSWPTOCSettings *tocSettings;
@property (nonatomic, readonly) NSArray *visibleTOCEntries;

+ (bool)canPartition;

- (void).cxx_destruct;
- (void)acceptVisitor:(id)arg1;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)containedStorageFormattedUsingParagraphStyle:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (int)elementKind;
- (void)loadFromUnarchiver:(id)arg1;
- (void)loadTOCInfoMessage:(const struct TOCInfoArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct ShapeInfoArchive {} *x5; struct Reference {} *x6; struct RepeatedPtrField<TSP::Reference> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct RepeatedPtrField<TSP::Range> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; }*)arg1 unarchiver:(id)arg2;
- (bool)p_startingTOCIsRTLForEntries:(id)arg1;
- (id)pageNumberRanges;
- (id)paragraphStylesShownInTOC;
- (id)partitioner;
- (id)referencedStyles;
- (void)regenerateStorageContent;
- (Class)repClass;
- (void)saveTOCInfoMessage:(struct TOCInfoArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct ShapeInfoArchive {} *x5; struct Reference {} *x6; struct RepeatedPtrField<TSP::Reference> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct RepeatedPtrField<TSP::Range> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setPageNumberRanges:(id)arg1;
- (void)setTOCEntries:(id)arg1;
- (void)setTOCSettings:(id)arg1;
- (void)setTocController:(id)arg1;
- (bool)supportsAttachedComments;
- (id)textualEquivalent;
- (id)tocController;
- (id)tocEntries;
- (id)tocSettings;
- (id)visibleTOCEntries;

@end

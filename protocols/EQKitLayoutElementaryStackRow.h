/* Generated by RuntimeBrowser.
 */

@protocol EQKitLayoutElementaryStackRow <NSObject>

@required

- (long long)alignmentShift;
- (unsigned long long)columnCount;
- (unsigned long long)firstColumnIndex;
- (double)followingSpace;
- (EQKitBox *)newBoxWithStackWidth:(void *)arg1 columnWidthIter:(void *)arg2 iterMax:(void *)arg3 previousRow:(void *)arg4 layoutManager:(void *)arg5; // needs 5 arg types, found 18: double, struct __wrap_iter<double *> { double *x1; }, struct __wrap_iter<double *> { double *x1; }, <EQKitLayoutElementaryStackRow> *, const struct EQKitLayoutManager { id x1; double x2; struct __CFString {} *x3; struct Manager {} *x4; struct Config {} *x5; struct EQKitLayoutContext { int (**x_6_1_1)(); struct Info { unsigned long long x_2_2_1; bool x_2_2_2; bool x_2_2_3; bool x_2_2_4; int x_2_2_5; double x_2_2_6; int x_2_2_7; struct __CFString {} *x_2_2_8; } x_6_1_2; double x_6_1_3; double x_6_1_4; double x_6_1_5; id x_6_1_6; struct Collection {} x_6_1_7; struct __CTFont {} *x_6_1_8; struct CGColor {} *x_6_1_9; struct { unsigned int x_10_2_1 : 1; unsigned int x_10_2_2 : 1; unsigned int x_10_2_3 : 1; } x_6_1_10; struct { double x_11_2_1; double x_11_2_2; double x_11_2_3; } x_6_1_11; } x6; struct stack<unsigned long, std::__1::deque<unsigned long, std::__1::allocator<unsigned long> > > { struct deque<unsigned long, std::__1::allocator<unsigned long> > { struct __split_buffer<unsigned long *, std::__1::allocator<unsigned long *> > { unsigned long long **x_1_3_1; unsigned long long **x_1_3_2; unsigned long long **x_1_3_3; struct __compressed_pair<unsigned long **, std::__1::allocator<unsigned long *> > { unsigned long long **x_4_4_1; } x_1_3_4; } x_1_2_1; unsigned long long x_1_2_2; struct __compressed_pair<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long x_3_3_1; } x_1_2_3; } x_7_1_1; } x7; }*, unsigned long long, struct __compressed_pair<unsigned long, std::__1::allocator<void (^)(id<EQKitLayoutNode>, const EQKit::Layout::Schemata &)> >=Q {}, /* Warning: Unrecognized filer type: '}' using 'void*' */ void*, void*, struct stack<EQKitLayoutRow, std::__1::deque<EQKitLayoutRow, std::__1::allocator<EQKitLayoutRow> > > { struct deque<EQKitLayoutRow, std::__1::allocator<EQKitLayoutRow> > { struct __split_buffer<EQKitLayoutRow *, std::__1::allocator<EQKitLayoutRow *> > { struct EQKitLayoutRow {} **x_1_2_1; struct EQKitLayoutRow {} **x_1_2_2; struct EQKitLayoutRow {} **x_1_2_3; struct __compressed_pair<EQKitLayoutRow **, std::__1::allocator<EQKitLayoutRow *> > { struct EQKitLayoutRow {} **x_4_3_1; } x_1_2_4; } x_1_1_1; unsigned long long x_1_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<EQKitLayoutRow> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }, struct vector<id<EQKitLayoutNode>, std::__1::allocator<id<EQKitLayoutNode> > > { id *x1; id x2; void*x3; void*x4; BOOL x5; out void*x6; void*x7; const void*x8; short x9; short x10; void*x11; double x12; void*x13; void*x14; void*x15; int x16; const void*x17; int x18; double x19; void*x20; void*x21; unsigned long long x22; void*x23; int x24; void*x25; unsigned long x26; void*x27; void*x28; out void*x29; void*x30; inout out double x31; void*x32; void*x33; void*x34; char *x35; void*x36; void*x37; short x38; void*x39; double x40; SEL x41; SEL x42; void*x43; void*x44; void*x45; SEL x46; SEL x47; void*x48; long x49; long x50; out BOOL x51; void*x52; void*x53; out const void*x54; int x55; double x56; void*x57; void*x58; unsigned long long x59; void*x60; int x61; void*x62; unsigned long x63; void*x64; void*x65; out void*x66; void*x67; inout out double x68; void*x69; void*x70; void*x71; void*x72; void*x73; void*x74; void*x75; id *x76; }, struct stack<id<EQKitLayoutNode>, std::__1::deque<id<EQKitLayoutNode>, std::__1::allocator<id<EQKitLayoutNode> > > > { struct deque<id<EQKitLayoutNode>, std::__1::allocator<id<EQKitLayoutNode> > > { struct __split_buffer<id<EQKitLayoutNode> *, std::__1::allocator<id<EQKitLayoutNode> *> > { id **x_1_2_1; id *x_1_2_2; id *x_1_2_3; void*x_1_2_4; void*x_1_2_5; BOOL x_1_2_6; out void*x_1_2_7; void*x_1_2_8; const void*x_1_2_9; short x_1_2_10; short x_1_2_11; void*x_1_2_12; double x_1_2_13; void*x_1_2_14; void*x_1_2_15; void*x_1_2_16; int x_1_2_17; const void*x_1_2_18; int x_1_2_19; double x_1_2_20; void*x_1_2_21; void*x_1_2_22; unsigned long long x_1_2_23; void*x_1_2_24; int x_1_2_25; void*x_1_2_26; unsigned long x_1_2_27; void*x_1_2_28; void*x_1_2_29; out void*x_1_2_30; void*x_1_2_31; inout out double x_1_2_32; void*x_1_2_33; void*x_1_2_34; void*x_1_2_35; char *x_1_2_36; char *x_1_2_37; void*x_1_2_38; void*x_1_2_39; short x_1_2_40; void*x_1_2_41; double x_1_2_42; SEL x_1_2_43; SEL x_1_2_44; void*x_1_2_45; void*x_1_2_46; void*x_1_2_47; SEL x_1_2_48; SEL x_1_2_49; void*x_1_2_50; long x_1_2_51; long x_1_2_52; out BOOL x_1_2_53; void*x_1_2_54; void*x_1_2_55; out const void*x_1_2_56; int x_1_2_57; double x_1_2_58; void*x_1_2_59; void*x_1_2_60; unsigned long long x_1_2_61; void*x_1_2_62; int x_1_2_63; void*x_1_2_64; } x_1_1_1; } x1; }, struct stack<EQKitLayoutStretchedOperator, std::__1::deque<EQKitLayoutStretchedOperator, std::__1::allocator<EQKitLayoutStretchedOperator> > > { struct deque<EQKitLayoutStretchedOperator, std::__1::allocator<EQKitLayoutStretchedOperator> > { struct __split_buffer<EQKitLayoutStretchedOperator *, std::__1::allocator<EQKitLayoutStretchedOperator *> > { struct EQKitLayoutStretchedOperator {} **x_1_2_1; struct EQKitLayoutStretchedOperator {} **x_1_2_2; struct EQKitLayoutStretchedOperator {} **x_1_2_3; struct __compressed_pair<EQKitLayoutStretchedOperator **, std::__1::allocator<EQKitLayoutStretchedOperator *> > { struct EQKitLayoutStretchedOperator {} **x_4_3_1; } x_1_2_4; } x_1_1_1; unsigned long long x_1_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<EQKitLayoutStretchedOperator> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }, struct stack<EQKitLayoutElementaryStack, std::__1::deque<EQKitLayoutElementaryStack, std::__1::allocator<EQKitLayoutElementaryStack> > > { struct deque<EQKitLayoutElementaryStack, std::__1::allocator<EQKitLayoutElementaryStack> > { struct __split_buffer<EQKitLayoutElementaryStack *, std::__1::allocator<EQKitLayoutElementaryStack *> > { struct EQKitLayoutElementaryStack {} **x_1_2_1; struct EQKitLayoutElementaryStack {} **x_1_2_2; struct EQKitLayoutElementaryStack {} **x_1_2_3; struct __compressed_pair<EQKitLayoutElementaryStack **, std::__1::allocator<EQKitLayoutElementaryStack *> > { struct EQKitLayoutElementaryStack {} **x_4_3_1; } x_1_2_4; } x_1_1_1; unsigned long long x_1_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<EQKitLayoutElementaryStack> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }, struct stack<EQKitLayoutTable, std::__1::deque<EQKitLayoutTable, std::__1::allocator<EQKitLayoutTable> > > { struct deque<EQKitLayoutTable, std::__1::allocator<EQKitLayoutTable> > { struct __split_buffer<EQKitLayoutTable *, std::__1::allocator<EQKitLayoutTable *> > { struct EQKitLayoutTable {} **x_1_2_1; struct EQKitLayoutTable {} **x_1_2_2; struct EQKitLayoutTable {} **x_1_2_3; struct __compressed_pair<EQKitLayoutTable **, std::__1::allocator<EQKitLayoutTable *> > { struct EQKitLayoutTable {} **x_4_3_1; } x_1_2_4; } x_1_1_1; unsigned long long x_1_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<EQKitLayoutTable> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }, id, struct AttributeCollection {}, void*
- (void)populateMaxColumnWidths:(struct __wrap_iter<double *> { double *x1; })arg1;
- (void)setFirstColumnIndex:(unsigned long long)arg1;
- (bool)spansStack;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIVisualEffectViewBackdropCaptureGroup : NSObject {
    NSPointerArray * _backdrops;
    NSString * _groupName;
    double  _scale;
}

@property (nonatomic, copy) NSString *groupName;
@property (nonatomic) double scale;

- (void).cxx_destruct;
- (void)_applyScaleHint:(double)arg1;
- (void)addBackdrop:(id)arg1 update:(bool)arg2;
- (id)description;
- (id)groupName;
- (long long)indexOfBackdropView:(id)arg1;
- (id)init;
- (id)initWithBackdrop:(id)arg1;
- (void)removeBackdrop:(id)arg1 update:(bool)arg2;
- (double)scale;
- (void)setGroupName:(id)arg1;
- (void)setScale:(double)arg1;
- (void)updateAllBackdropViews;

@end

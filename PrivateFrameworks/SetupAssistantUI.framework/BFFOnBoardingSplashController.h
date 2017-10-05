/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

@interface BFFOnBoardingSplashController : BFFSplashController {
    id /* block */  _completion;
    long long  _feature;
    NSString * _preferenceKey;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic) long long feature;
@property (retain) NSString *preferenceKey;

+ (id)cloudConfigSkipKey;
+ (bool)needsToRunForFeature:(long long)arg1;

- (void).cxx_destruct;
- (id /* block */)completion;
- (long long)feature;
- (id)initWithFeature:(long long)arg1;
- (void)loadView;
- (void)movieReady:(id)arg1 error:(id)arg2;
- (id)movieView;
- (id)placeholderImageForFeature:(long long)arg1;
- (id)preferenceKey;
- (void)setCompletion:(id /* block */)arg1;
- (void)setFeature:(long long)arg1;
- (void)setPreferenceKey:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
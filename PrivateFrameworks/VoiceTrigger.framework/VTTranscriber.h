/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTTranscriber : NSObject <_EARSpeechRecognitionResultStream> {
    id /* block */  _callback;
    bool  _isTriggerFollowedByWords;
    NSMutableArray * _previousUtteranceTokens;
    NSObject<OS_dispatch_queue> * _queue;
    _EARSpeechRecognizer * _recognizer;
    _EARSpeechRecognitionAudioBuffer * _recognizerBuffer;
    double  _triggerConfidence;
    NSArray * _triggerTokenList;
    bool  _useKeywordSpotting;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isTriggerFollowedByWords;
@property (readonly) Class superclass;
@property (readonly) double triggerConfidence;

- (void).cxx_destruct;
- (double)_getConfidence:(id)arg1;
- (void)endAudio;
- (id)initWithConfiguration:(id)arg1 triggerTokens:(id)arg2 useKeywordSpotting:(bool)arg3;
- (bool)isTriggerFollowedByWords;
- (void)recognizeWavData:(const short*)arg1 length:(int)arg2;
- (id)recognizedTokens;
- (void)reset;
- (void)runRecognitionWithCallback:(id /* block */)arg1;
- (void)speechRecognizer:(id)arg1 didFinishRecognitionWithError:(id)arg2;
- (void)speechRecognizer:(id)arg1 didRecognizeFinalResults:(id)arg2;
- (void)speechRecognizer:(id)arg1 didRecognizePartialResult:(id)arg2;
- (double)triggerConfidence;

@end

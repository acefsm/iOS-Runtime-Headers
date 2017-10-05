/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSLookupMatch : NSObject {
    NSTextCheckingResult * _dataDetectorResult;
    NSString * _languageIdentifier;
    unsigned long long  _matchType;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    double  _score;
}

@property (retain) NSTextCheckingResult *dataDetectorResult;
@property (retain) NSString *languageIdentifier;
@property (readonly) unsigned long long matchType;
@property (readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (readonly) double score;

+ (id)matchesInString:(id)arg1 types:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;

- (id)dataDetectorResult;
- (void)dealloc;
- (id)description;
- (id)initWithType:(unsigned long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 score:(double)arg3;
- (id)languageIdentifier;
- (unsigned long long)matchType;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (double)score;
- (void)setDataDetectorResult:(id)arg1;
- (void)setLanguageIdentifier:(id)arg1;

@end

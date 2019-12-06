//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _EARFormatter : NSObject
{
//    struct unique_ptr<SpeechITN, std::__1::default_delete<SpeechITN>> _itn;
    NSString *_language;
}

+ (vector_2f7ba0dc)convertStringsToQuasarTokens:(id)arg1;
+ (BOOL)supportedByQuasarConfig:(id)arg1;
+ (void)initialize;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (id)formattedRecognitionWithNBestList:(id)arg1;
- (id)formattedStringWithStrings:(id)arg1 preToPostItnArray:(id)arg2 task:(id)arg3;
- (id)formattedStringWithStrings:(id)arg1 preToPostItnArray:(id)arg2;
- (id)formattedStringWithStrings:(id)arg1 task:(id)arg2;
- (id)formattedStringWithStrings:(id)arg1;
- (basic_string_23d93216)getOrthography:(const vector_2f7ba0dc )arg1;
- (vector_2f7ba0dc)formatWords:(const vector_2f7ba0dc )arg1 task:(id)arg2;
- (vector_2f7ba0dc)formatWords:(const vector_2f7ba0dc )arg1;
- (id)initWithGeneralVoc:(id)arg1 withLexiconEnh:(id)arg2 withItnEnh:(id)arg3;
- (id)initWithQuasarConfig:(id)arg1 language:(id)arg2;
- (id)initWithQuasarConfig:(id)arg1;
- (id)initWithLanguage:(id)arg1 withSdapiConfig:(id)arg2 quasarConfig:(id)arg3;

@end


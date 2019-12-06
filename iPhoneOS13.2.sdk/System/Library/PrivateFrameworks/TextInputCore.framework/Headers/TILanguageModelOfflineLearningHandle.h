//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, TIInputMode, TILanguageModelAdaptationContext;

@interface TILanguageModelOfflineLearningHandle : NSObject
{
    BOOL _valid;
    TIInputMode *_inputMode;
    NSDate *_lastAdaptationDate;
    TILanguageModelAdaptationContext *_currentAdaptationContext;
}

+ (id)handleForLanguageLikelihood;
+ (id)handleForInputMode:(id)arg1;
@property(copy, nonatomic) TILanguageModelAdaptationContext *currentAdaptationContext; // @synthesize currentAdaptationContext=_currentAdaptationContext;
@property(copy, nonatomic) NSDate *lastAdaptationDate; // @synthesize lastAdaptationDate=_lastAdaptationDate;
@property(readonly, nonatomic) TIInputMode *inputMode; // @synthesize inputMode=_inputMode;
@property(nonatomic, getter=isValid) BOOL valid; // @synthesize valid=_valid;
// - (void).cxx_destruct;
- (void)didFinishLearning;
- (void)updateAdaptationContext:(id)arg1;
- (void)adaptToParagraph:(id)arg1 timeStamp:(double)arg2 adaptationType:(int)arg3;
- (void)load;
- (id)initWithInputMode:(id)arg1;

@end


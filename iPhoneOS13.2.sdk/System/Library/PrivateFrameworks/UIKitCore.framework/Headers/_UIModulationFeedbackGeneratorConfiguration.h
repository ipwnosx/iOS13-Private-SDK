//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIFeedbackGeneratorConfiguration.h>

@class _UIFeedback;
@protocol _UIFeedbackContinuousPlayable;

@interface _UIModulationFeedbackGeneratorConfiguration : _UIFeedbackGeneratorConfiguration
{
    _UIFeedback<_UIFeedbackContinuousPlayable> *_feedback;
    id /* CDUnknownBlockType */ _feedbackUpdateBlock;
}

+ (id)sliderConfiguration;
+ (id)defaultConfiguration;
// - (void).cxx_destruct;
@property(copy, nonatomic) id /* CDUnknownBlockType */ feedbackUpdateBlock; // @synthesize feedbackUpdateBlock=_feedbackUpdateBlock;
@property(retain, nonatomic) _UIFeedback<_UIFeedbackContinuousPlayable> *feedback; // @synthesize feedback=_feedback;
- (id)feedbackKeyPaths;
// - (id)copyWithZone:(_NSZone )arg1;
- (long long)requiredSupportLevel;

@end


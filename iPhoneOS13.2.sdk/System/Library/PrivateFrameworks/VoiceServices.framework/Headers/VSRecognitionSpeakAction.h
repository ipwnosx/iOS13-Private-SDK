//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceServices/VSRecognitionAction.h>

@interface VSRecognitionSpeakAction : VSRecognitionAction
{
    BOOL _shouldTerminate;
}

- (id)perform;
- (int)completionType;
- (id)initWithSpokenFeedbackString:(id)arg1 willTerminate:(BOOL)arg2;

@end


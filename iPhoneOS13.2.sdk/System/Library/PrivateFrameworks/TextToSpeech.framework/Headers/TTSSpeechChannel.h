//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TTSSpeechVoice;

@interface TTSSpeechChannel : NSObject
{
    TTSSpeechVoice *_voice;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) TTSSpeechVoice *voice; // @synthesize voice=_voice;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithVoice:(id)arg1;

@end


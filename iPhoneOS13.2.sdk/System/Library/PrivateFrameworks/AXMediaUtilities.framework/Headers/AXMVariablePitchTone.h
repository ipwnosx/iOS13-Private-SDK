//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXMediaUtilities/AXMTone.h>

@class NSArray;

@interface AXMVariablePitchTone : AXMTone
{
    NSArray *_keyPitches;
}

// - (void).cxx_destruct;
- (NSUInteger)_bufferFrameForKeyPitch:(id)arg1;
- (void)renderInBuffer:(vector_3203cf93 )arg1 atFrame:(NSUInteger)arg2;
- (id)initWithKeyPitches:(id)arg1 sampleRate:(double)arg2 envelope:(id)arg3;
- (id)initWithSampleRate:(double)arg1 envelope:(id)arg2;

@end


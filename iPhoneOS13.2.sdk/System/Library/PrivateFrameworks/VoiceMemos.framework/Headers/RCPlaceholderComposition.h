//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceMemos/RCComposition.h>

@interface RCPlaceholderComposition : RCComposition
{
    RCComposition *_underlyingComposition;
}

@property(readonly, nonatomic) RCComposition *underlyingComposition; // @synthesize underlyingComposition=_underlyingComposition;
// - (void).cxx_destruct;
- (id)initWithUnderlyingComposition:(id)arg1;

@end


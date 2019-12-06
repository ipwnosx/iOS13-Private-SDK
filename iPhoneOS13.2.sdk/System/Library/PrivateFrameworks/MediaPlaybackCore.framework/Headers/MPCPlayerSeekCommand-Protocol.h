//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/MPCPlayerCommand-Protocol.h>

@class MPCPlayerCommandRequest, NSArray;

@protocol MPCPlayerSeekCommand <MPCPlayerCommand>
@property(readonly, copy, nonatomic) NSArray *preferredForwardJumpIntervals;
@property(readonly, copy, nonatomic) NSArray *preferredBackwardJumpIntervals;
- (MPCPlayerCommandRequest *)changePositionToElapsedInterval:(double)arg1;
- (MPCPlayerCommandRequest *)jumpByInterval:(double)arg1;
- (MPCPlayerCommandRequest *)endSeek;
- (MPCPlayerCommandRequest *)beginSeekWithDirection:(long long)arg1;
@end


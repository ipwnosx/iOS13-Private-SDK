//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ATXNowPlayingEvent : NSObject
{
    NSString *_bundleId;
    long long _nowPlayingState;
}

@property(readonly, nonatomic) long long nowPlayingState; // @synthesize nowPlayingState=_nowPlayingState;
@property(readonly, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
// - (void).cxx_destruct;
- (id)initWithContextInfo:(id)arg1;
- (BOOL)isTVExperienceAppNowPlaying;

@end


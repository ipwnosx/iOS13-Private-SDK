//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface TLAlertPlaybackCompletionContext : NSObject
{
    id /* CDUnknownBlockType */ _completionHandler;
    long long _playbackCompletionType;
    NSError *_error;
}

@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long playbackCompletionType; // @synthesize playbackCompletionType=_playbackCompletionType;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completionHandler; // @synthesize completionHandler=_completionHandler;
// - (void).cxx_destruct;

@end


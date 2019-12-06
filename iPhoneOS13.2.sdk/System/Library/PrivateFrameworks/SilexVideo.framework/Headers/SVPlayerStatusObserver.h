//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVPlayerStatusObserving-Protocol.h>

@class NSError, SVKeyValueObserver, SVPlayer;

@interface SVPlayerStatusObserver : NSObject <SVPlayerStatusObserving>
{
    id /* CDUnknownBlockType */ changeBlock;
    NSError *_error;
    SVPlayer *_player;
    SVKeyValueObserver *_statusObserver;
    long long _status;
}

@property(nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic) SVKeyValueObserver *statusObserver; // @synthesize statusObserver=_statusObserver;
@property(readonly, nonatomic) SVPlayer *player; // @synthesize player=_player;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic, setter=onChange:) id /* CDUnknownBlockType */ changeBlock; // @synthesize changeBlock;
// - (void).cxx_destruct;
- (id)initWithPlayer:(id)arg1;

@end


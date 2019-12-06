//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoLoadingStateObserving-Protocol.h>

@class NFStateMachine, NSError, SVKeyValueObserver;
@protocol SVPlayerItemLoading;

@interface SVVideoLoadingStateObserver : NSObject <SVVideoLoadingStateObserving>
{
    NSUInteger _state;
    id /* CDUnknownBlockType */ _finishedBlock;
    id /* CDUnknownBlockType */ _failedBlock;
    id /* CDUnknownBlockType */ _startBlock;
    NSError *_error;
    id <SVPlayerItemLoading> _playerItemLoader;
    NFStateMachine *_stateMachine;
    SVKeyValueObserver *_playerItemStatusObserver;
}

@property(retain, nonatomic) SVKeyValueObserver *playerItemStatusObserver; // @synthesize playerItemStatusObserver=_playerItemStatusObserver;
@property(readonly, nonatomic) NFStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(readonly, nonatomic) id <SVPlayerItemLoading> playerItemLoader; // @synthesize playerItemLoader=_playerItemLoader;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic, setter=onStart:) id /* CDUnknownBlockType */ startBlock; // @synthesize startBlock=_startBlock;
@property(copy, nonatomic, setter=onFailed:) id /* CDUnknownBlockType */ failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic, setter=onFinished:) id /* CDUnknownBlockType */ finishedBlock; // @synthesize finishedBlock=_finishedBlock;
@property(nonatomic) NSUInteger state; // @synthesize state=_state;
// - (void).cxx_destruct;
- (void)configureStateWithPlayerItem:(id)arg1;
- (id)initWithPlayerItemLoader:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKPlayerStateChangeEventUserInfo.h>

@interface IKPlayerShouldHandleStateChangeEventUserInfo : IKPlayerStateChangeEventUserInfo
{
    BOOL _shouldHandle;
    double _requestedTime;
    double _proposedTime;
}

@property(readonly, nonatomic) double proposedTime; // @synthesize proposedTime=_proposedTime;
@property(readonly, nonatomic) BOOL shouldHandle; // @synthesize shouldHandle=_shouldHandle;
@property(readonly, nonatomic) double requestedTime; // @synthesize requestedTime=_requestedTime;
- (void)processReturnJSValue:(id)arg1 inContext:(id)arg2;
- (id)initWithState:(long long)arg1 oldState:(long long)arg2 requestedTime:(double)arg3;
- (id)initWithState:(long long)arg1 requestedTime:(double)arg2;
- (id)initWithState:(long long)arg1 oldState:(long long)arg2;
- (id)initWithState:(long long)arg1;

@end


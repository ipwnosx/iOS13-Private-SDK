//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVPlayerTimeControlStatusObserverFactory-Protocol.h>

@protocol SVPlayerProviding;

@interface SVPlayerTimeControlStatusObserverFactory : NSObject <SVPlayerTimeControlStatusObserverFactory>
{
    id <SVPlayerProviding> _playerProvider;
}

@property(readonly, nonatomic) id <SVPlayerProviding> playerProvider; // @synthesize playerProvider=_playerProvider;
// - (void).cxx_destruct;
- (id)createTimeControlStatusObserverForVideo:(id)arg1;
- (id)initWithPlayerProvider:(id)arg1;

@end


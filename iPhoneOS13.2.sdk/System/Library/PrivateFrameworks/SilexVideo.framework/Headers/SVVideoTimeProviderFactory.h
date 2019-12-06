//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoTimeProviderFactory-Protocol.h>

@protocol SVPlayerProviding, SVTimeConverting;

@interface SVVideoTimeProviderFactory : NSObject <SVVideoTimeProviderFactory>
{
    id <SVPlayerProviding> _playerProvider;
    id <SVTimeConverting> _timeConverter;
}

@property(readonly, nonatomic) id <SVTimeConverting> timeConverter; // @synthesize timeConverter=_timeConverter;
@property(readonly, nonatomic) id <SVPlayerProviding> playerProvider; // @synthesize playerProvider=_playerProvider;
// - (void).cxx_destruct;
- (id)createTimeProviderForVideo:(id)arg1;
- (id)initWithPlayerProvider:(id)arg1 timeConverter:(id)arg2;

@end


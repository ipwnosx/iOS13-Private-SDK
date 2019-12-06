//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSCurrentServerTimePair;
@protocol IDSCurrentServerTimeProvider;

@interface IDSCurrentServerTime : NSObject
{
    IDSCurrentServerTimePair *_timePair;
    id <IDSCurrentServerTimeProvider> _serverTimeProvider;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <IDSCurrentServerTimeProvider> serverTimeProvider; // @synthesize serverTimeProvider=_serverTimeProvider;
@property(retain) IDSCurrentServerTimePair *timePair; // @synthesize timePair=_timePair;
// - (void).cxx_destruct;
- (void)_refreshServerTime;
- (void)_storeInitialServerTime;
- (double)_refreshTimeInterval;
- (id)currentServerTimeDate;
- (double)currentServerTimeInterval;
- (id)initWithServerTimeProvider:(id)arg1;

@end


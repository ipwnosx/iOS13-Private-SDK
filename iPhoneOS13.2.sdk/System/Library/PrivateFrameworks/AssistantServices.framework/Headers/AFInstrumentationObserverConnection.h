//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFInvalidating-Protocol.h>

@class AFAnalyticsObserverConnection, NSSet;

@interface AFInstrumentationObserverConnection : NSObject <AFInvalidating>
{
    AFAnalyticsObserverConnection *_observerConnection;
    NSSet *_filteredTagIdentifiers;
}

// - (void).cxx_destruct;
- (void)flushWithCompletion:(CDUnknownBlockType)arg1;
- (void)waitUntilInvalidated;
- (void)invalidate;
- (id)initWithObservation:(CDUnknownBlockType)arg1 filterByInstrumentationTypes:(id)arg2;
- (id)initWithObservation:(CDUnknownBlockType)arg1;

@end


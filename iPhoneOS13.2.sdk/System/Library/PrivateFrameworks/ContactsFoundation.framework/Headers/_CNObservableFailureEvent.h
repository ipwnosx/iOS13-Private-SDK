//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsFoundation/CNObservableEvent.h>

@class NSError;

@interface _CNObservableFailureEvent : CNObservableEvent
{
    NSError *_error;
}

// - (void).cxx_destruct;
- (void)dematerializeWithObserver:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)error;
- (id)value;
- (BOOL)hasValue;
- (NSUInteger)eventType;
- (id)initWithError:(id)arg1;

@end


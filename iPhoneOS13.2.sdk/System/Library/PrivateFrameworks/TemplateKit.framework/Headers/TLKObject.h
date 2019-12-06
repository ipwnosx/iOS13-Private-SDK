//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TemplateKit/TLKObservable-Protocol.h>
#import <TemplateKit/TLKObserver-Protocol.h>

@protocol TLKObserver;

@interface TLKObject : NSObject <TLKObservable, TLKObserver>
{
    BOOL inBatchUpdate;
    id <TLKObserver> observer;
}

@property BOOL inBatchUpdate; // @synthesize inBatchUpdate;
@property __weak id <TLKObserver> observer; // @synthesize observer;
// - (void).cxx_destruct;
- (void)propertiesDidChange;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKLStreamObserver.h>

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CKLStreamTrafficObserver : CKLStreamObserver
{
    id /* CDUnknownBlockType */ _requestParsedBlock;
    NSMutableDictionary *_requestDictionary;
    NSObject<OS_dispatch_queue> *_printQueue;
}

@property(retain) NSObject<OS_dispatch_queue> *printQueue; // @synthesize printQueue=_printQueue;
@property(retain) NSMutableDictionary *requestDictionary; // @synthesize requestDictionary=_requestDictionary;
@property(copy, nonatomic) id /* CDUnknownBlockType */ requestParsedBlock; // @synthesize requestParsedBlock=_requestParsedBlock;
// - (void).cxx_destruct;
- (id)parserFromConfigurationMessage:(id)arg1;
- (void)finish;
- (void)parseRequestArrayAndPrint:(id)arg1;
- (void)eventMatched:(id)arg1;
- (id)initWithLogTypes:(NSUInteger)arg1;

@end


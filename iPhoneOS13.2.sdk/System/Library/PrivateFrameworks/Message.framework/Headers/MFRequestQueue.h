//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/EFLoggable-Protocol.h>

@class NSMutableArray;

@interface MFRequestQueue : NSObject <EFLoggable>
{
//    struct os_unfair_lock_s _lock;
    NSMutableArray *_requestPairs;
}

+ (id)signpostLog;
+ (id)log;
@property(retain, nonatomic) NSMutableArray *requestPairs; // @synthesize requestPairs=_requestPairs;
// - (void).cxx_destruct;
- (BOOL)processRequests:(id)arg1;
- (BOOL)_processRequests:(id)arg1;
//  (BOOL)processRequest:(struct EFPair )arg1;
//  (BOOL)addRequest:(struct EFPair )arg1;
- (BOOL)addRequests:(id)arg1;
- (id)init;
- (NSUInteger)signpostID;

@end


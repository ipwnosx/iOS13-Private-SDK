//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class C2SessionPool;

@interface C2RequestManager : NSObject
{
    C2SessionPool *_sessionPool;
}

+ (id)sharedManager;
@property(readonly, nonatomic) C2SessionPool *sessionPool; // @synthesize sessionPool=_sessionPool;
// - (void).cxx_destruct;
- (void)_testUtility_forTask:(id)arg1 sessionHandle:(id )arg2 taskHandle:(id )arg3;
- (id)testUtility_sessionTaskForTask:(id)arg1;
- (id)testUtility_sessionForTask:(id)arg1;
- (id)createDataTaskWithRequest:(id)arg1 options:(id)arg2 delegate:(id)arg3 sessionHandle:(id )arg4;
- (id)createDataTaskWithRequest:(id)arg1 options:(id)arg2 delegate:(id)arg3;
- (id)init;

@end


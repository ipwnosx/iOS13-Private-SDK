//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCPurchaseIntegrityChecker-Protocol.h>

@interface FCMockPurchaseIntegrityChecker : NSObject <FCPurchaseIntegrityChecker>
{
    NSUInteger _mockedCheckResult;
}

+ (id)mockPurchaseIntegrityCheckForFailure;
+ (id)mockPurchaseIntegrityCheckForSuccess;
@property(nonatomic) NSUInteger mockedCheckResult; // @synthesize mockedCheckResult=_mockedCheckResult;
- (void)isUserEntitledToSubscriptionForPurchaseID:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end


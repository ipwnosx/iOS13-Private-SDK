//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CommonUtilities/CUTUnsafePromise.h>

@interface CUTPromise : CUTUnsafePromise
{
}

+ (id)all:(id)arg1;
+ (id)fulfilledPromiseWithValue:(id)arg1;
+ (id)failedPromiseWithError:(id)arg1;
- (id)then:(CDUnknownBlockType)arg1;
- (void)registerResultBlock:(CDUnknownBlockType)arg1;

@end


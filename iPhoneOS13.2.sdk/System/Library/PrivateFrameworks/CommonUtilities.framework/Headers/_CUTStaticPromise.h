//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CommonUtilities/CUTPromise.h>

@class CUTResult;

@interface _CUTStaticPromise : CUTPromise
{
    CUTResult *_result;
}

@property(retain, nonatomic) CUTResult *result; // @synthesize result=_result;
// - (void).cxx_destruct;
- (void)registerResultBlock:(CDUnknownBlockType)arg1;
- (id)initWithResult:(id)arg1;

@end


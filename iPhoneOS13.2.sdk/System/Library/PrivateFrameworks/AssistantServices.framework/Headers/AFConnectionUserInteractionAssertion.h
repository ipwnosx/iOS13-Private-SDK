//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AFSafetyBlock;

@interface AFConnectionUserInteractionAssertion : NSObject
{
    AFSafetyBlock *_safetyBlock;
}

// - (void).cxx_destruct;
- (void)releaseAssertion;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FCInterestToken : NSObject
{
    id /* CDUnknownBlockType */ _removeInterestBlock;
}

+ (id)interestTokenWithRemoveInterestBlock:(CDUnknownBlockType)arg1;
+ (id)interestTokenWithCallbackQueue:(id)arg1 removeInterestBlock:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) id /* CDUnknownBlockType */ removeInterestBlock; // @synthesize removeInterestBlock=_removeInterestBlock;
// - (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCallbackQueue:(id)arg1 removeInterestBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end


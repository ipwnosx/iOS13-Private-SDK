//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FCForYouCatchUpCondition : NSObject
{
    long long _contentTypes;
    id /* CDUnknownBlockType */ _testBlock;
}

+ (id)caughtUpWithContentTypes:(long long)arg1 orPassingTestBlock:(CDUnknownBlockType)arg2;
+ (id)caughtUpWithContentTypes:(long long)arg1;
@property(copy, nonatomic) id /* CDUnknownBlockType */ testBlock; // @synthesize testBlock=_testBlock;
@property(nonatomic) long long contentTypes; // @synthesize contentTypes=_contentTypes;
// - (void).cxx_destruct;
- (BOOL)isSatisfiedWithCatchUpOperation:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class INCExecutionCounterpartMapper, NSDictionary;

@interface INCExecutionInfoResolver : NSObject
{
    INCExecutionCounterpartMapper *_counterpartMapper;
    NSDictionary *__counterpartMapping;
}

+ (id)defaultResolver;
+ (void)initialize;
@property(readonly, copy, nonatomic) NSDictionary *_counterpartMapping; // @synthesize _counterpartMapping=__counterpartMapping;
// - (void).cxx_destruct;
@property(readonly, nonatomic) INCExecutionCounterpartMapper *_counterpartMapper; // @synthesize _counterpartMapper;
- (id)_resolveUserActivityExecutionInfoUsingCounterparts:(id)arg1;
- (id)_resolveIntentExecutionInfoUsingCounterparts:(id)arg1;
- (id)_resolveIntentExecutionInfoByLinkingExtensionToApp:(id)arg1;
- (id)_resolveIntentExecutionInfoBySwappingIdentifiers:(id)arg1;
- (id)counterpartBundleIdentifiersForBundleIdentifier:(id)arg1;
- (id)resolveUserActivityExecutionInfo:(id)arg1;
- (id)resolveIntentExecutionInfo:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PRSL2FeatureVectorProcessingContext : NSObject
{
    unsigned short _expandedFeatureExecutionOrder;
    NSUInteger _expandedFeatureCount;
}

@property(nonatomic) NSUInteger expandedFeatureCount; // @synthesize expandedFeatureCount=_expandedFeatureCount;
@property(nonatomic) unsigned short expandedFeatureExecutionOrder; // @synthesize expandedFeatureExecutionOrder=_expandedFeatureExecutionOrder;
- (void)dealloc;
- (id)initWithFeatureOrder:(id)arg1 withInflation:(NSUInteger)arg2 withInflatedIndexToSize:(id)arg3;

@end


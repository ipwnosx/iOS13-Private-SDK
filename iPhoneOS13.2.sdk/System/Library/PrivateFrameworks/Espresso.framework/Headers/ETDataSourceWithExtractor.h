//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Espresso/ETDataSource-Protocol.h>

@class ETImageDescriptorExtractor;
@protocol ETDataSource;

__attribute__((visibility("hidden")))
@interface ETDataSourceWithExtractor : NSObject <ETDataSource>
{
    id <ETDataSource> _source;
    ETImageDescriptorExtractor *_extractor;
}

// - (void).cxx_destruct;
- (int)numberOfDataPoints;
- (id)dataPointAtIndex:(int)arg1;
- (id)initWithDataSource:(id)arg1 extractor:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSDictionary;

@interface HMBLocalSQLContextRowQuery : HMFObject
{
    NSUInteger _recordRow;
    NSDictionary *_tuples;
}

@property(readonly, nonatomic) NSDictionary *tuples; // @synthesize tuples=_tuples;
@property(readonly, nonatomic) NSUInteger recordRow; // @synthesize recordRow=_recordRow;
// - (void).cxx_destruct;
- (id)initWithRecordRow:(NSUInteger)arg1 tuples:(id)arg2;

@end


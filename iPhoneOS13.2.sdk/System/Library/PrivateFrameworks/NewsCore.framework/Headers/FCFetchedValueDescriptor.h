//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface FCFetchedValueDescriptor : NSObject
{
}

// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, nonatomic) NSArray *inputManagers;
- (BOOL)isValue:(id)arg1 equalToValue:(id)arg2;
- (id)fastCachedValue;
- (void)fetchValueWithCachePolicy:(NSUInteger)arg1 qualityOfService:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;
- (id)valuePromiseWithCachePolicy:(NSUInteger)arg1 qualityOfService:(long long)arg2;

@end


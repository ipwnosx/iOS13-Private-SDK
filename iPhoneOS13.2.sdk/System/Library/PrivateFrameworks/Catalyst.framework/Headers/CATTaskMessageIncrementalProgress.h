//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/CATTaskMessage.h>

@interface CATTaskMessageIncrementalProgress : CATTaskMessage
{
    long long _completedUnitCount;
    long long _totalUnitCount;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long totalUnitCount; // @synthesize totalUnitCount=_totalUnitCount;
@property(nonatomic) long long completedUnitCount; // @synthesize completedUnitCount=_completedUnitCount;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTaskUUID:(id)arg1 completedUnitCount:(long long)arg2 totalUnitCount:(long long)arg3;

@end


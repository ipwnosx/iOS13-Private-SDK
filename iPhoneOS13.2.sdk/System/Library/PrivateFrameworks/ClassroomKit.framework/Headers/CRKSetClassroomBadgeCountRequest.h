//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATTaskRequest.h"

@interface CRKSetClassroomBadgeCountRequest : CATTaskRequest
{
    long long _badgeCount;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long badgeCount; // @synthesize badgeCount=_badgeCount;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


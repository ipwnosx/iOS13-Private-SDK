//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface ASDProgress : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _reportRemotely;
    NSString *_bundleID;
    long long _completedUnitCount;
    long long _totalUnitCount;
}

+ (BOOL)supportsSecureCoding;
@property long long totalUnitCount; // @synthesize totalUnitCount=_totalUnitCount;
@property BOOL reportRemotely; // @synthesize reportRemotely=_reportRemotely;
@property long long completedUnitCount; // @synthesize completedUnitCount=_completedUnitCount;
@property(retain) NSString *bundleID; // @synthesize bundleID=_bundleID;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;

@end


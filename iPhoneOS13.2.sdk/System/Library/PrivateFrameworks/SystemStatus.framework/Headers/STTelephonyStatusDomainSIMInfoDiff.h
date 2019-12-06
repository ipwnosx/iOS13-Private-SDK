//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SystemStatus/STStatusDomainDataDiff-Protocol.h>

@class BSSettings;

@interface STTelephonyStatusDomainSIMInfoDiff : NSObject <STStatusDomainDataDiff, NSCopying>
{
    BSSettings *_changes;
}

+ (BOOL)supportsSecureCoding;
+ (id)diffFromInfo:(id)arg1 toInfo:(id)arg2;
@property(readonly, copy, nonatomic) BSSettings *changes; // @synthesize changes=_changes;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)applyToMutableInfo:(id)arg1;
- (id)infoByApplyingToInfo:(id)arg1;
- (id)initWithChanges:(id)arg1;
- (id)init;

@end


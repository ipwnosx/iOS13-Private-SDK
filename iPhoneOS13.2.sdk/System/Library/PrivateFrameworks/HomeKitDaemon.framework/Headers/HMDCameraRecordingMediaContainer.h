//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDNumberParser.h>


@interface HMDCameraRecordingMediaContainer : HMDNumberParser <NSCopying, NSSecureCoding>
{
    long long _type;
}

+ (id)arrayWithContainerTypes:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithContainer:(long long)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


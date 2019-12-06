//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKCloudStoring-Protocol.h>

@class NSData, NSString;

@interface CRKCloudAsset : NSObject <CRKCloudStoring>
{
    NSString *_identifier;
    NSData *_assetData;
}

+ (id)instanceWithRecord:(id)arg1;
+ (id)recordType;
+ (id)skeletonInstance;
+ (BOOL)supportsSecureCoding;
+ (id)new;
@property(retain, nonatomic) NSData *assetData; // @synthesize assetData=_assetData;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (id)requiredKeys;
- (void)applyFieldsToRecord:(id)arg1;
- (BOOL)isChangedFrom:(id)arg1;
- (id)recordName;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1 assetUrl:(id)arg2;
- (id)initWithIdentifier:(id)arg1 assetData:(id)arg2;
- (id)init;

@end


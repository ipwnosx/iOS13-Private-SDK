//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccessoryVersion, NSArray, NSString;

@interface HMDVendorModelEntry : HMFObject
{
    NSString *_model;
    NSString *_manufacturer;
    NSString *_appBundleID;
    NSString *_appStoreID;
    HMDAccessoryVersion *_firmwareVersion;
    NSString *_productData;
    NSArray *_productDataAlternates;
}

@property(readonly, nonatomic) NSArray *productDataAlternates; // @synthesize productDataAlternates=_productDataAlternates;
@property(readonly, nonatomic) NSString *productData; // @synthesize productData=_productData;
@property(readonly, nonatomic) HMDAccessoryVersion *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property(readonly, nonatomic) NSString *appStoreID; // @synthesize appStoreID=_appStoreID;
@property(readonly, nonatomic) NSString *appBundleID; // @synthesize appBundleID=_appBundleID;
@property(readonly, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(readonly, nonatomic) NSString *model; // @synthesize model=_model;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)attributeDescriptions;
- (id)initWithManufacturer:(id)arg1 model:(id)arg2 appBundleID:(id)arg3 appStoreID:(id)arg4 firmwareVersion:(id)arg5 productData:(id)arg6 productDataAlternates:(id)arg7;

@end


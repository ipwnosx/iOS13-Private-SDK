//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKObject.h>


@class NSArray, NSDate, NSDictionary, NSNumber, NSSet, NSString, NSURL, PKBarcode, PKImage, PKLiveRenderedShaderSet, PKNFCPayload, PKPassLiveRenderedImageSet, PKPassPersonalization, PKPaymentPass;

@interface PKPass : PKObject <NSCopying, NSSecureCoding>
{
    PKLiveRenderedShaderSet *_liveRenderedShaderSet;
    BOOL _remotePass;
    BOOL _isCloudKitArchived;
    BOOL _voided;
    BOOL _hasStoredValue;
    BOOL _liveRenderedBackground;
    BOOL _supportsCategoryVisualization;
    BOOL _revoked;
    NSUInteger _passType;
    NSString *_serialNumber;
    NSString *_passTypeIdentifier;
    NSString *_organizationName;
    NSDate *_relevantDate;
    NSDictionary *_userInfo;
    NSString *_deviceName;
    NSString *_passLibraryMachServiceName;
    NSNumber *_sequenceCounter;
    NSURL *_passURL;
    NSString *_teamID;
    NSDate *_expirationDate;
    NSString *_groupingID;
    NSSet *_embeddedLocations;
    NSSet *_embeddedBeacons;
    NSURL *_webLocationsURL;
    NSURL *_localLocationsURL;
    long long _sharingMethod;
    NSURL *_sharingURL;
    NSString *_sharingText;
    NSSet *_associatedPassTypeIdentifiers;
    PKNFCPayload *_nfcPayload;
    PKImage *_partialFrontFaceImagePlaceholder;
    NSDate *_ingestedDate;
    NSDate *_modifiedDate;
}

+ (BOOL)supportsSecureCoding;
+ (id)cloudStorePassRecordNamePrefix;
+ (NSUInteger)defaultSettings;
+ (BOOL)isValidObjectWithFileURL:(id)arg1 warnings:(id )arg2 orError:(id )arg3;
+ (Class)classForPassType:(NSUInteger)arg1;
@property(nonatomic, getter=isRevoked) BOOL revoked; // @synthesize revoked=_revoked;
@property(retain, nonatomic) NSDate *modifiedDate; // @synthesize modifiedDate=_modifiedDate;
@property(retain, nonatomic) NSDate *ingestedDate; // @synthesize ingestedDate=_ingestedDate;
@property(nonatomic) BOOL supportsCategoryVisualization; // @synthesize supportsCategoryVisualization=_supportsCategoryVisualization;
@property(nonatomic) BOOL liveRenderedBackground; // @synthesize liveRenderedBackground=_liveRenderedBackground;
@property(readonly, nonatomic) PKImage *partialFrontFaceImagePlaceholder; // @synthesize partialFrontFaceImagePlaceholder=_partialFrontFaceImagePlaceholder;
@property(nonatomic) BOOL hasStoredValue; // @synthesize hasStoredValue=_hasStoredValue;
@property(copy, nonatomic, setter=setNFCPayload:) PKNFCPayload *nfcPayload; // @synthesize nfcPayload=_nfcPayload;
@property(copy, nonatomic) NSSet *associatedPassTypeIdentifiers; // @synthesize associatedPassTypeIdentifiers=_associatedPassTypeIdentifiers;
@property(copy, nonatomic) NSString *sharingText; // @synthesize sharingText=_sharingText;
@property(copy, nonatomic) NSURL *sharingURL; // @synthesize sharingURL=_sharingURL;
@property(nonatomic) long long sharingMethod; // @synthesize sharingMethod=_sharingMethod;
@property(copy, nonatomic) NSURL *localLocationsURL; // @synthesize localLocationsURL=_localLocationsURL;
@property(copy, nonatomic) NSURL *webLocationsURL; // @synthesize webLocationsURL=_webLocationsURL;
@property(copy, nonatomic) NSSet *embeddedBeacons; // @synthesize embeddedBeacons=_embeddedBeacons;
@property(copy, nonatomic) NSSet *embeddedLocations; // @synthesize embeddedLocations=_embeddedLocations;
@property(copy, nonatomic) NSString *groupingID; // @synthesize groupingID=_groupingID;
@property(nonatomic, getter=isVoided) BOOL voided; // @synthesize voided=_voided;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSString *teamID; // @synthesize teamID=_teamID;
@property(nonatomic) BOOL isCloudKitArchived; // @synthesize isCloudKitArchived=_isCloudKitArchived;
@property(copy, nonatomic) NSURL *passURL; // @synthesize passURL=_passURL;
@property(copy, nonatomic) NSNumber *sequenceCounter; // @synthesize sequenceCounter=_sequenceCounter;
@property(copy, nonatomic) NSString *passLibraryMachServiceName; // @synthesize passLibraryMachServiceName=_passLibraryMachServiceName;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(nonatomic, getter=isRemotePass) BOOL remotePass; // @synthesize remotePass=_remotePass;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSDate *relevantDate; // @synthesize relevantDate=_relevantDate;
@property(copy, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property(copy, nonatomic) NSString *passTypeIdentifier; // @synthesize passTypeIdentifier=_passTypeIdentifier;
@property(copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(nonatomic) NSUInteger passType; // @synthesize passType=_passType;
// - (void).cxx_destruct;
- (id)_changeMessageForFieldKey:(id)arg1;
- (id)_localizationKeyForMultipleDiff;
- (id)dictionariesForSemanticKey:(id)arg1;
- (id)stringsForSemanticKey:(id)arg1;
- (id)personNameComponentsForSemanticKey:(id)arg1;
- (id)currencyAmountForSemanticKey:(id)arg1;
- (id)locationForSemanticKey:(id)arg1;
- (id)numberForSemanticKey:(id)arg1;
- (id)dateForSemanticKey:(id)arg1;
- (id)stringForSemanticKey:(id)arg1;
- (BOOL)availableForAutomaticPresentationUsingBeaconContext;
- (BOOL)availableForAutomaticPresentationUsingVASContext;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqualToPassIncludingMetadata:(id)arg1;
@property(readonly, nonatomic) CGRect logoRect;
@property(readonly, nonatomic) PKLiveRenderedShaderSet *liveRenderedShaderSet;
@property(readonly, nonatomic) PKPassLiveRenderedImageSet *liveRenderedImageSet;
@property(readonly, nonatomic) BOOL isValid;
@property(readonly, nonatomic) NSString *businessChatIdentifier;
- (id)thumbnailImage;
- (id)stripImage;
- (id)backgroundImage;
- (id)logoImage;
@property(readonly, nonatomic) PKImage *personalizationLogoImage;
@property(readonly, nonatomic) PKImage *cardHolderPicture;
@property(readonly, nonatomic) CGRect stripRect;
@property(readonly, nonatomic) CGRect thumbnailRect;
@property(readonly, nonatomic) PKImage *partialFrontFaceImage;
@property(readonly, nonatomic) PKImage *frontFaceShadowImage;
@property(readonly, nonatomic) PKImage *frontFaceImage;
@property(readonly, nonatomic) PKImage *notificationIconImage;
@property(readonly, nonatomic) PKImage *rawIcon;
@property(readonly, nonatomic) PKImage *iconImage;
- (id)allSemantics;
- (id)semantics;
@property(readonly, nonatomic) BOOL isPersonalizable;
@property(readonly, nonatomic) PKPassPersonalization *personalization;
@property(readonly, nonatomic) NSURL *appLaunchURL;
@property(readonly, nonatomic) NSArray *storeIdentifiers;
- (id)balanceFields;
- (id)primaryFields;
@property(readonly, nonatomic) NSArray *backFieldBuckets;
@property(readonly, nonatomic) NSArray *frontFieldBuckets;
@property(readonly, nonatomic) long long transitType;
@property(readonly, copy, nonatomic) NSString *localizedDescription;
@property(readonly, nonatomic) NSString *logoText;
@property(readonly, nonatomic) PKImage *footerImage;
@property(readonly, nonatomic) PKBarcode *barcode;
@property(readonly) NSString *notificationCenterTitle;
- (id)diff:(id)arg1;
- (id)localizedDescriptionForDiff:(id)arg1;
- (id)fieldForKey:(id)arg1;
- (id)localizedValueForFieldKey:(id)arg1;
- (BOOL)supportsSharing;
- (BOOL)isExpired;
- (BOOL)isUpdatable;
- (BOOL)isRelevantDateOld;
- (BOOL)hasValidNFCPayload;
- (BOOL)hasLocationRelevancyInfo;
- (BOOL)hasTimeOrLocationRelevancyInfo;
@property(readonly, nonatomic) PKPaymentPass *paymentPass;
@property(readonly, nonatomic) NSString *pluralLocalizedName;
@property(readonly, nonatomic) NSString *lowercaseLocalizedName;
@property(readonly, copy, nonatomic) NSString *localizedName;
@property(readonly, nonatomic) long long style;
- (NSUInteger)itemType;
- (id)recordTypesAndNames;
- (void)encodeWithCloudStoreCoder:(id)arg1;
- (id)initWithCloudStoreCoder:(id)arg1;
- (void)downloadRemoteAssetsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;
- (id)initWithData:(id)arg1 error:(id )arg2;
@property(readonly, nonatomic) long long eventType;
@property(readonly, nonatomic) BOOL silenceRequested;
- (void)loadFlightsWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSString *flightCode;
@property(readonly, nonatomic) NSString *airlineCode;
@property(readonly, nonatomic) NSUInteger flightNumber;
@property(readonly, nonatomic) BOOL hasFlightDetails;

@end


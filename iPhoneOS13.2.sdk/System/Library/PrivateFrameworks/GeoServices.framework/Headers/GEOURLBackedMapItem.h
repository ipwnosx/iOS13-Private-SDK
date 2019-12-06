//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOBaseMapItem.h>

#import <GeoServices/GEOMapItemStorageSerializable-Protocol.h>

@class GEOAddress, GEOFeatureStyleAttributes, GEOMapItemIdentifier, GEOMapRegion, GEOMuninViewState, GEOURLExtraStorage, NSString, NSURL;

@interface GEOURLBackedMapItem : GEOBaseMapItem <GEOMapItemStorageSerializable>
{
    NSURL *_url;
    GEOURLExtraStorage *_extraStorage;
    GEOMuninViewState *_muninViewState;
    GEOFeatureStyleAttributes *_styleAttributes;
    GEOMapItemIdentifier *_identifier;
//     CDStruct_2c43369c _coordinate;
    BOOL _hasMUID;
    NSUInteger _muid;
    GEOAddress *_geoAddress;
    NSString *_name;
}

+ (BOOL)urlContainsExtraStorage:(id)arg1;
@property(readonly, nonatomic, getter=_muninViewState) GEOMuninViewState *muninViewState; // @synthesize muninViewState=_muninViewState;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) GEOAddress *geoAddress; // @synthesize geoAddress=_geoAddress;
@property(readonly, nonatomic, getter=_hasMUID) BOOL hasMUID; // @synthesize hasMUID=_hasMUID;
@property(readonly, nonatomic, getter=_muid) NSUInteger muid; // @synthesize muid=_muid;
// @property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate; // @synthesize coordinate=_coordinate;
@property(readonly, nonatomic, getter=_identifier) GEOMapItemIdentifier *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic, getter=_styleAttributes) GEOFeatureStyleAttributes *styleAttributes; // @synthesize styleAttributes=_styleAttributes;
// - (void).cxx_destruct;
@property(readonly, nonatomic) GEOMapRegion *displayMapRegion;
@property(readonly, nonatomic, getter=_businessURL) NSString *businessURL;
@property(readonly, nonatomic, getter=_telephone) NSString *telephone;
@property(readonly, nonatomic, getter=_hasTelephone) BOOL hasTelephone;
- (id)mapItemStorageForGEOMapItem;
@property(readonly, nonatomic, getter=_responseStatusIsIncomplete) BOOL responseStatusIncomplete;
@property(readonly, nonatomic, getter=_hasResolvablePartialInformation) BOOL hasResolvablePartialInformation;
@property(readonly, nonatomic) int referenceFrame;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (id)initWithURL:(id)arg1;
- (id)init;

@end


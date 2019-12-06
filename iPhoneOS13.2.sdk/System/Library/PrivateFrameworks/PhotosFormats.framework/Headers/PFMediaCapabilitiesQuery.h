//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PFMediaCapabilitiesQuery : NSObject
{
    NSMutableDictionary *_capabilitiesInformation;
}

@property(retain) NSMutableDictionary *capabilitiesInformation; // @synthesize capabilitiesInformation=_capabilitiesInformation;
// - (void).cxx_destruct;
- (void)addAssetBundleInformationToDictionary:(id)arg1;
- (void)addLivePhotoInformationToDictionary:(id)arg1;
- (void)addTranscodeChoiceWithOptions:(id)arg1;
- (void)addVendorSpecificInformation;
- (void)addHEIFContainerInformationToDictionary:(id)arg1;
- (void)addHEVCCodecInformationToDictionary:(id)arg1;
- (void)addCodecInformation;
- (void)addVersion;
- (void)gatherCapabilitiesWithOptions:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithOptions:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenshotServices/BSXPCCoding-Protocol.h>
#import <ScreenshotServices/SSLoggable-Protocol.h>

@class BSSettings, NSArray, NSDate, NSString, SSEnvironmentDescriptionAppleInternalOptions, SSImageSurface, SSUIServiceOptions;

@interface SSEnvironmentDescription : NSObject <SSLoggable, BSXPCCoding>
{
    NSArray *_elements;
    NSString *_identifier;
    NSString *_sessionIdentifier;
    NSUInteger _presentationMode;
    BOOL _canAutosaveToFiles;
    unsigned int _externalFlashLayerContextID;
    SSImageSurface *_imageSurface;
    double _imageScale;
    SSUIServiceOptions *_serviceOptions;
    NSDate *_date;
    NSUInteger _externalFlashLayerRenderID;
    SSEnvironmentDescriptionAppleInternalOptions *_appleInternalOptions;
    NSString *_betaApplicationBundleID;
    NSString *_betaApplicationName;
    CGSize _imagePixelSize;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL canAutosaveToFiles; // @synthesize canAutosaveToFiles=_canAutosaveToFiles;
@property(copy, nonatomic) NSString *betaApplicationName; // @synthesize betaApplicationName=_betaApplicationName;
@property(copy, nonatomic) NSString *betaApplicationBundleID; // @synthesize betaApplicationBundleID=_betaApplicationBundleID;
@property(retain, nonatomic) SSEnvironmentDescriptionAppleInternalOptions *appleInternalOptions; // @synthesize appleInternalOptions=_appleInternalOptions;
@property(copy, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(nonatomic) unsigned int externalFlashLayerContextID; // @synthesize externalFlashLayerContextID=_externalFlashLayerContextID;
@property(nonatomic) NSUInteger externalFlashLayerRenderID; // @synthesize externalFlashLayerRenderID=_externalFlashLayerRenderID;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) SSUIServiceOptions *serviceOptions; // @synthesize serviceOptions=_serviceOptions;
@property(nonatomic) NSUInteger presentationMode; // @synthesize presentationMode=_presentationMode;
@property(nonatomic) double imageScale; // @synthesize imageScale=_imageScale;
@property(nonatomic) CGSize imagePixelSize; // @synthesize imagePixelSize=_imagePixelSize;
@property(retain, nonatomic) SSImageSurface *imageSurface; // @synthesize imageSurface=_imageSurface;
@property(readonly, nonatomic) NSArray *elements; // @synthesize elements=_elements;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BSSettings *bsSettings;
@property(readonly, nonatomic) CGSize imagePointSize;
@property(readonly, nonatomic) NSString *loggableDescription;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (void)setDebugElements:(id)arg1;
- (void)takeElementsFromDisplayLayout:(id)arg1;
- (id)init;

@end


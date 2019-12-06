//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSNumber, NSString;

@interface SKUILibraryItemState : NSObject <NSCopying>
{
    long long _availability;
    NSUInteger _avTypes;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    BOOL _highDefinition;
    BOOL _preview;
    BOOL _rental;
    NSNumber *_storeAccountIdentifier;
    NSString *_storeFlavorIdentifier;
    NSString *_storePlatformKind;
    NSNumber *_storeVersionIdentifier;
}

@property(copy, nonatomic) NSNumber *storeVersionIdentifier; // @synthesize storeVersionIdentifier=_storeVersionIdentifier;
@property(copy, nonatomic) NSString *storePlatformKind; // @synthesize storePlatformKind=_storePlatformKind;
@property(copy, nonatomic) NSString *storeFlavorIdentifier; // @synthesize storeFlavorIdentifier=_storeFlavorIdentifier;
@property(copy, nonatomic) NSNumber *storeAccountIdentifier; // @synthesize storeAccountIdentifier=_storeAccountIdentifier;
@property(nonatomic, getter=isRental) BOOL rental; // @synthesize rental=_rental;
@property(nonatomic, getter=isPreview) BOOL preview; // @synthesize preview=_preview;
@property(nonatomic, getter=isHighDefinition) BOOL highDefinition; // @synthesize highDefinition=_highDefinition;
@property(copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) NSUInteger AVTypes; // @synthesize AVTypes=_avTypes;
@property(nonatomic) long long availability; // @synthesize availability=_availability;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)newJavaScriptRepresentation;
@property(readonly, nonatomic) NSString *itemStateVariantIdentifier;
- (id)initWithApplication:(id)arg1;

@end


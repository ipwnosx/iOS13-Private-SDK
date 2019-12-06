//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PLImageFormat : NSObject
{
    BOOL _isCropped;
    BOOL _isAlwaysFullScreen;
    unsigned short _formatID;
    NSString *_name;
    double _dimension;
    long long _formatMode;
    long long _version;
//     const CDStruct_e5ce1f5a _bakedFormatInfo;
    long long _thumbnailKind;
    CGSize _size;
}

+ (id)formatWithID:(unsigned short)arg1;
+ (id)_syncFormats;
@property(nonatomic) long long thumbnailKind; // @synthesize thumbnailKind=_thumbnailKind;
// @property(readonly, nonatomic) const CDStruct_e5ce1f5a bakedFormatInfo; // @synthesize bakedFormatInfo=_bakedFormatInfo;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
@property(readonly, nonatomic) BOOL isAlwaysFullScreen; // @synthesize isAlwaysFullScreen=_isAlwaysFullScreen;
@property(readonly, nonatomic) long long formatMode; // @synthesize formatMode=_formatMode;
@property(readonly, nonatomic) double dimension; // @synthesize dimension=_dimension;
@property(readonly, nonatomic) BOOL isCropped; // @synthesize isCropped=_isCropped;
@property(readonly, nonatomic) CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned short formatID; // @synthesize formatID=_formatID;
// - (void).cxx_destruct;
- (id)thumbnailSpecification;
- (CGSize)scaledSizeForSourceSize:(CGSize)arg1 capLength:(BOOL)arg2;
- (CGSize)scaledSizeForSourceSize:(CGSize)arg1;
- (CGSize)_shortSideFormatScaledSizeForSourceSize:(CGSize)arg1 capLength:(BOOL)arg2;
- (NSUInteger)fullSizeMaxLongSide;
- (NSUInteger)fullSizeMinShortSide;
- (NSUInteger)fullSizeDesiredLongSide;
- (CGSize)sizeOfThumbnailWithAspectRatio:(double)arg1;
@property(readonly, nonatomic) BOOL bakedFormatIsDynamicallySized;
@property(readonly, nonatomic) BOOL dimensionsReferToShortSide;
@property(readonly, nonatomic) BOOL isThumbnail; // @dynamic isThumbnail;
@property(readonly, nonatomic) BOOL isTable; // @dynamic isTable;
@property(readonly, nonatomic) BOOL isSquare;
@property(readonly, nonatomic) BOOL refersToOriginalVersion;
@property(readonly, nonatomic) BOOL refersToPenultimateVersion;
@property(readonly, nonatomic) BOOL refersToUnadjustedVersion;
@property(readonly, nonatomic) BOOL refersToLatestVersion;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToFormat:(id)arg1;
- (long long)compare:(id)arg1;
- (id)description;
- (id)shortDescription;
- (id)initWithFormatID:(unsigned short)arg1;
- (id)initWithName:(id)arg1 size:(CGSize)arg2 isCropped:(BOOL)arg3 version:(long long)arg4 isAlwaysFullScreen:(BOOL)arg5 formatMode:(long long)arg6 thumbnailKind:(long long)arg7;
- (id)initWithName:(id)arg1 size:(CGSize)arg2 isCropped:(BOOL)arg3 version:(long long)arg4 isAlwaysFullScreen:(BOOL)arg5;
- (id)initWithName:(id)arg1 size:(CGSize)arg2 isCropped:(BOOL)arg3;
- (id)init;
- (BOOL)_canDegradeToFormat:(id)arg1;
- (BOOL)_isAcceptableForViewSize:(CGSize)arg1 contentMode:(long long)arg2 sourceAspectRatio:(double)arg3 desiredImageSize:(CGSize)arg4 demoteFactor:(double)arg5;

@end


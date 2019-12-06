//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>
#import <FrontBoardServices/BSXPCCoding-Protocol.h>

@class NSString;

@interface FBSDisplayConfigurationRequest : NSObject <BSXPCCoding, BSDescriptionProviding, NSCopying, NSMutableCopying, NSSecureCoding>
{
    long long _overscanCompensation;
    CGSize _pixelSize;
    CGSize _nativePixelSize;
    double _refreshRate;
    long long _hdrMode;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) long long hdrMode; // @synthesize hdrMode=_hdrMode;
@property(readonly, nonatomic) double refreshRate; // @synthesize refreshRate=_refreshRate;
@property(readonly, nonatomic) CGSize nativePixelSize; // @synthesize nativePixelSize=_nativePixelSize;
@property(readonly, nonatomic) CGSize pixelSize; // @synthesize pixelSize=_pixelSize;
@property(readonly, nonatomic) long long overscanCompensation; // @synthesize overscanCompensation=_overscanCompensation;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
- (id)init;

@end


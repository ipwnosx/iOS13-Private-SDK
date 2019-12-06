//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUIArtworkProviding-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString, SKUIArtwork;

@interface SKUIArtworkTemplate : NSObject <SKUIArtworkProviding>
{
    long long _height;
    long long _width;
    NSString *_urlTemplateString;
    NSMutableSet *_servedArtworks;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)canHandleArtworkFormat:(id)arg1;
@property(readonly, nonatomic) NSMutableSet *servedArtworks; // @synthesize servedArtworks=_servedArtworks;
@property(readonly, nonatomic) NSString *urlTemplateString; // @synthesize urlTemplateString=_urlTemplateString;
@property(readonly, nonatomic) long long width; // @synthesize width=_width;
@property(readonly, nonatomic) long long height; // @synthesize height=_height;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *cacheRepresentation;
- (id)initWithCacheRepresentation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (id)_lookupDictionary;
- (id)_urlStringWithTargetSize:(CGSize)arg1;
- (CGSize)_sizeForWidth:(long long)arg1;
- (id)_artworkURLWithWidth:(long long)arg1;
- (id)_artworkWithWidth:(long long)arg1;
@property(readonly, nonatomic) SKUIArtwork *smallestArtwork;
@property(readonly, nonatomic) SKUIArtwork *largestArtwork;
- (BOOL)hasArtwork;
- (id)preferredExactArtworkForSize:(CGSize)arg1;
- (id)bestArtworkForScaledSize:(CGSize)arg1;
- (id)bestArtworkForSize:(CGSize)arg1;
- (id)artworkWithWidth:(long long)arg1;
- (id)artworkURLForSize:(long long)arg1;
- (id)artworkForSize:(long long)arg1;
- (id)initWithTemplateDictionary:(id)arg1;

@end


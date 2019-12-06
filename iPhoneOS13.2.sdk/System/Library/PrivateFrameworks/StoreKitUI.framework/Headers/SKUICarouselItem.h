//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SKUILink;
@protocol SKUIArtworkProviding;

__attribute__((visibility("hidden")))
@interface SKUICarouselItem : NSObject
{
    NSString *_accessibilityLabel;
    long long _carouselItemIdentifier;
    SKUILink *_link;
    id <SKUIArtworkProviding> _artworkProvider;
}

@property(retain, nonatomic) id <SKUIArtworkProviding> artworkProvider; // @synthesize artworkProvider=_artworkProvider;
@property(readonly, nonatomic) SKUILink *link; // @synthesize link=_link;
@property(readonly, nonatomic) long long carouselItemIdentifier; // @synthesize carouselItemIdentifier=_carouselItemIdentifier;
@property(readonly, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
// - (void).cxx_destruct;
- (id)description;
- (void)_setLinkItem:(id)arg1;
- (id)artworkForSize:(CGSize)arg1;
- (id)initWithComponentContext:(id)arg1;

@end


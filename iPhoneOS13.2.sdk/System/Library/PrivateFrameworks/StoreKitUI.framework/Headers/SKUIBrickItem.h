//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SKUIArtwork, SKUICountdown, SKUIEditorialComponent, SKUILink;

@interface SKUIBrickItem : NSObject
{
    NSString *_accessibilityLabel;
    SKUIArtwork *_artwork;
    long long _brickIdentifier;
    SKUICountdown *_countdown;
    SKUIEditorialComponent *_editorial;
    SKUILink *_link;
}

@property(readonly, nonatomic) SKUILink *link; // @synthesize link=_link;
@property(readonly, nonatomic) SKUIEditorialComponent *editorial; // @synthesize editorial=_editorial;
@property(readonly, nonatomic) SKUICountdown *countdown; // @synthesize countdown=_countdown;
@property(readonly, nonatomic) long long brickIdentifier; // @synthesize brickIdentifier=_brickIdentifier;
@property(readonly, nonatomic) SKUIArtwork *artwork; // @synthesize artwork=_artwork;
@property(readonly, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
// - (void).cxx_destruct;
- (void)_setLinkInfoWithLinkDictionary:(id)arg1 context:(id)arg2;
- (id)description;
- (void)_setLinkItem:(id)arg1;
- (id)initWithCustomPageContext:(id)arg1;
- (id)initWithComponentContext:(id)arg1;
- (id)initWithBannerRoomContext:(id)arg1;

@end


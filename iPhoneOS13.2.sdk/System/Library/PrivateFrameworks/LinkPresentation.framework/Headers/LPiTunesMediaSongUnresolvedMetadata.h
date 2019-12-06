//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <LinkPresentation/LPiTunesMediaUnresolvedMetadata-Protocol.h>

@class LPiTunesMediaAsset, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface LPiTunesMediaSongUnresolvedMetadata : NSObject <LPiTunesMediaUnresolvedMetadata>
{
    NSString *_storeFrontIdentifier;
    NSString *_storeIdentifier;
    NSString *_name;
    NSString *_artist;
    NSString *_album;
    NSString *_lyrics;
    LPiTunesMediaAsset *_artwork;
    NSArray *_offers;
}

@property(retain, nonatomic) NSArray *offers; // @synthesize offers=_offers;
@property(retain, nonatomic) LPiTunesMediaAsset *artwork; // @synthesize artwork=_artwork;
@property(copy, nonatomic) NSString *lyrics; // @synthesize lyrics=_lyrics;
@property(copy, nonatomic) NSString *album; // @synthesize album=_album;
@property(copy, nonatomic) NSString *artist; // @synthesize artist=_artist;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(copy, nonatomic) NSString *storeFrontIdentifier; // @synthesize storeFrontIdentifier=_storeFrontIdentifier;
// - (void).cxx_destruct;
- (id)assetsToFetch;
- (id)resolve;

@end


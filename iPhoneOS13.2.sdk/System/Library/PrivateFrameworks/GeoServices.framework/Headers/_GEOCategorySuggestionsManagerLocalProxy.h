//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOCategorySuggestionsManagerServerProxy-Protocol.h>
#import <GeoServices/GEOResourceManifestTileGroupObserver-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _GEOCategorySuggestionsManagerLocalProxy : NSObject <GEOCategorySuggestionsManagerServerProxy, GEOResourceManifestTileGroupObserver>
{
    id _urlsChangedListener;
}

- (void)updateCachedSpotlightCategorySuggestions:(id /* block */)arg1;
- (void)_updateIfNecessary;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

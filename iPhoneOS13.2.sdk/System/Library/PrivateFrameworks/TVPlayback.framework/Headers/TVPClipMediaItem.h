//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet;
@protocol TVPMediaItem;

@interface TVPClipMediaItem : NSObject
{
    NSObject<TVPMediaItem> *_mediaItem;
    NSSet *_localMetadataKeys;
    NSMutableDictionary *_localMetadata;
}

@property(retain, nonatomic) NSMutableDictionary *localMetadata; // @synthesize localMetadata=_localMetadata;
@property(retain, nonatomic) NSSet *localMetadataKeys; // @synthesize localMetadataKeys=_localMetadataKeys;
@property(retain, nonatomic) NSObject<TVPMediaItem> *mediaItem; // @synthesize mediaItem=_mediaItem;
// - (void).cxx_destruct;
- (BOOL)isKindOfClass:(Class)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)_mediaItemMetadataWillOrDidChange:(id)arg1;
- (id)mediaItemMetadataForProperty:(id)arg1;
- (void)setMediaItemMetadata:(id)arg1 forProperty:(id)arg2;
- (BOOL)hasTrait:(id)arg1;
- (void)dealloc;
- (id)initWithMediaItem:(id)arg1 clipTimeRange:(id)arg2;

@end


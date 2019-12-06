//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUVideoItem-Protocol.h>

@class FCAssetHandle, NSString, NSURL;
@protocol FCHeadlineProviding, NUAdContextProvider;

@interface NUHeadlineVideoItem : NSObject <NUVideoItem>
{
    id <NUAdContextProvider> _adContextProvider;
    id <FCHeadlineProviding> _headline;
}

@property(readonly, copy, nonatomic) id <FCHeadlineProviding> headline; // @synthesize headline=_headline;
// - (void).cxx_destruct;
@property(readonly, nonatomic, getter=isPaid) BOOL paid;
@property(readonly, nonatomic, getter=isBoundToContext) BOOL boundToContext;
@property(readonly, nonatomic, getter=isHiddenFromFeeds) BOOL hiddenFromFeeds;
@property(readonly, copy, nonatomic) NSURL *callToActionURL;
@property(readonly, copy, nonatomic) NSString *callToActionTitle;
@property(readonly, copy, nonatomic) NSString *sourceTagID;
@property(readonly, copy, nonatomic) NSString *articleID;
@property(readonly, copy, nonatomic) NSString *sourceName;
@property(readonly, nonatomic) FCAssetHandle *nameImageAssetHandle;
@property(readonly, nonatomic) id <NUAdContextProvider> adContextProvider; // @synthesize adContextProvider=_adContextProvider;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSURL *videoURL;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithHeadline:(id)arg1;
- (id)init;

@end


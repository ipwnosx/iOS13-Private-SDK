//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCAssetHandle.h>

#import <NewsFeed/TSAssetDataProviderType-Protocol.h>

@class NSData, UIImage;
@protocol TSAssetDataProviderType;

@interface FCAssetHandle (NewsFeed) <TSAssetDataProviderType>
@property(nonatomic, readonly) id <TSAssetDataProviderType> assetDataProvider;
- (void)downloadWithGroup:(id)arg1;
@property(nonatomic, readonly) UIImage *fallbackImage;
@property(nonatomic, readonly) BOOL isRawFileConsumable;
@property(nonatomic, readonly) NSData *data;
@end


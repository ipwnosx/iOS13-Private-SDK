//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLContainerChangeNotification.h>

@class NSDictionary, PLManagedAsset;

@interface PLCloudCommentsChangeNotification : PLContainerChangeNotification
{
    NSDictionary *_userInfo;
}

+ (id)notificationWithAsset:(id)arg1 snapshot:(id)arg2;
// - (void).cxx_destruct;
- (id)_contentRelationshipName;
@property(readonly, nonatomic) PLManagedAsset *asset;
- (id)description;
- (id)userInfo;
- (id)name;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class PLCloudSharedAlbum;

@interface PLAlbumStreamingActivityItemSource : NSObject <UIActivityItemsSource, UIActivityItemSocialSource, UIActivityItemSubjectSource>
{
    PLCloudSharedAlbum *_album;
}

// - (void).cxx_destruct;
- (id)activityViewControllerSubject:(id)arg1;
- (id)activityViewController:(id)arg1 thumbnailForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItems:(id)arg1;
- (id)initWithAlbum:(id)arg1;

@end


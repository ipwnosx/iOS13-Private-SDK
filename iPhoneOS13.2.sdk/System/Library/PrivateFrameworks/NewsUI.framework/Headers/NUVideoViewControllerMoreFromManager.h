//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/SVMoreFromPublisherActionTitleProviding-Protocol.h>
#import <NewsUI/SVMoreFromPublisherLogoProviding-Protocol.h>

@protocol NUVideoCallToActionURLProviding;

@interface NUVideoViewControllerMoreFromManager : NSObject <SVMoreFromPublisherActionTitleProviding, SVMoreFromPublisherLogoProviding>
{
    id <NUVideoCallToActionURLProviding> _callToActionURLProvider;
}

@property(readonly, nonatomic) id <NUVideoCallToActionURLProviding> callToActionURLProvider; // @synthesize callToActionURLProvider=_callToActionURLProvider;
// - (void).cxx_destruct;
- (id)_callToActionTitleForVideoItem:(id)arg1;
- (id)actionTitleForVideo:(id)arg1;
- (CDUnknownBlockType)moreFromLogoForVideo:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)initWithCallToActionURLProvider:(id)arg1;
- (id)init;

@end


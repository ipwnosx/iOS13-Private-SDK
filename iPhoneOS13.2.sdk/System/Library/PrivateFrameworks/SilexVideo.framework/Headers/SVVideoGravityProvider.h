//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoGravityProviding-Protocol.h>

@class NSString;
@protocol SVVideoPresentationSizeObserving, SVVideoViewControllerSizeObserving;

@interface SVVideoGravityProvider : NSObject <SVVideoGravityProviding>
{
    id /* CDUnknownBlockType */ _changeBlock;
    NSString *_videoGravity;
    NSString *_landscapeVideoGravity;
    NSString *_portraitVideoGravity;
    id <SVVideoPresentationSizeObserving> _presentationSizeObserver;
    id <SVVideoViewControllerSizeObserving> _videoViewControllerSizeObserver;
}

@property(readonly, nonatomic) id <SVVideoViewControllerSizeObserving> videoViewControllerSizeObserver; // @synthesize videoViewControllerSizeObserver=_videoViewControllerSizeObserver;
@property(readonly, nonatomic) id <SVVideoPresentationSizeObserving> presentationSizeObserver; // @synthesize presentationSizeObserver=_presentationSizeObserver;
@property(copy, nonatomic) NSString *portraitVideoGravity; // @synthesize portraitVideoGravity=_portraitVideoGravity;
@property(copy, nonatomic) NSString *landscapeVideoGravity; // @synthesize landscapeVideoGravity=_landscapeVideoGravity;
@property(copy, nonatomic) NSString *videoGravity; // @synthesize videoGravity=_videoGravity;
@property(copy, nonatomic, setter=onChange:) id /* CDUnknownBlockType */ changeBlock; // @synthesize changeBlock=_changeBlock;
// - (void).cxx_destruct;
- (void)updateVideoGravityWithPresentationSize:(CGSize)arg1 videoViewControllerSize:(CGSize)arg2;
- (id)initWithPresentationSizeObserver:(id)arg1 videoViewControllerSizeObserver:(id)arg2;

@end


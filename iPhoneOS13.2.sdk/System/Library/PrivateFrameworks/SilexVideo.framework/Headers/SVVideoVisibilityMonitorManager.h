//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoVisibilityMonitorProviding-Protocol.h>

@class SVWeakObjectCache;
@protocol SVVisibilityMonitorFactory;

@interface SVVideoVisibilityMonitorManager : NSObject <SVVideoVisibilityMonitorProviding>
{
    id <SVVisibilityMonitorFactory> _videoVisibilityMonitorFactory;
    SVWeakObjectCache *_visibilityMonitors;
}

@property(readonly, nonatomic) SVWeakObjectCache *visibilityMonitors; // @synthesize visibilityMonitors=_visibilityMonitors;
@property(readonly, nonatomic) id <SVVisibilityMonitorFactory> videoVisibilityMonitorFactory; // @synthesize videoVisibilityMonitorFactory=_videoVisibilityMonitorFactory;
// - (void).cxx_destruct;
- (id)visibilityMonitorForVideo:(id)arg1;
- (id)initWithVideoVisibilityMonitorFactory:(id)arg1;

@end


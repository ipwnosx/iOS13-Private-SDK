//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface PIGlobalSettings : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_settings;
}

+ (id)globalSettings;
// - (void).cxx_destruct;
- (id)decoratorRenderFiltersForVideos;
- (id)decoratorRenderFiltersForImages;
- (id)init;

@end


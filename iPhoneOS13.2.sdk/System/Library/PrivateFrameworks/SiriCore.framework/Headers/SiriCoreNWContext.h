//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_nw_context;

@interface SiriCoreNWContext : NSObject
{
    NSObject<OS_nw_context> *_context;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (id)nwContext;
- (id)_init;
- (id)init;

@end


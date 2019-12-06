//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXWebContentInteraction-Protocol.h>

@class NSString, NSURL;
@protocol SXWebContentNavigationManager;

@interface SXWebContentURLInteraction : NSObject <SXWebContentInteraction>
{
    NSURL *_URL;
    id <SXWebContentNavigationManager> _navigationManager;
}

@property(readonly, nonatomic) id <SXWebContentNavigationManager> navigationManager; // @synthesize navigationManager=_navigationManager;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
- (void)perform;
@property(readonly, nonatomic) NSUInteger type;
- (id)initWithURL:(id)arg1 navigationManager:(id)arg2;

@end


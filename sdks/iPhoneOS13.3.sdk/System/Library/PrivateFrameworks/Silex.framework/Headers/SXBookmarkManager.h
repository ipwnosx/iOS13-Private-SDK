//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXBookmarkApplicatorManager-Protocol.h>
#import <Silex/SXBookmarkManager-Protocol.h>

@class NSMutableDictionary;

@interface SXBookmarkManager : NSObject <SXBookmarkManager, SXBookmarkApplicatorManager>
{
    NSMutableDictionary *_applicators;
}

@property(readonly, nonatomic) NSMutableDictionary *applicators; // @synthesize applicators=_applicators;
// - (void).cxx_destruct;
- (void)applyBookmark:(id)arg1;
- (void)registerApplicator:(id)arg1 bookmarkType:(Class)arg2;
- (id)init;

@end

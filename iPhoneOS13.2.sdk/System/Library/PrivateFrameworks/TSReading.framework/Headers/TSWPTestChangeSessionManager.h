//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSWPChangeSessionManager-Protocol.h>

@class TSWPChangeSession;

@interface TSWPTestChangeSessionManager : NSObject <TSWPChangeSessionManager>
{
    TSWPChangeSession *_currentSession;
}

@property(readonly, nonatomic) BOOL isTrackingChanges;
- (void)startNewChangeSessionIfNecessaryGettingInsertAuthorCommand:(id )arg1;
- (id)changeSessionAuthorCreatedWithCommand:(id )arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

@end


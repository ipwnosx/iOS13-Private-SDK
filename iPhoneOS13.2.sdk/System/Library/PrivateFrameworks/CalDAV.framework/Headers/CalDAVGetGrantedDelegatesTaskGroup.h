//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalDAV/CalDAVGetDelegatesBaseTaskGroup.h>

@interface CalDAVGetGrantedDelegatesTaskGroup : CalDAVGetDelegatesBaseTaskGroup
{
    BOOL _fetchPrincipalDetails;
    int _state;
}

@property(nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) BOOL fetchPrincipalDetails; // @synthesize fetchPrincipalDetails=_fetchPrincipalDetails;
- (void)taskGroup:(id)arg1 didFinishWithError:(id)arg2;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)startTaskGroup;
- (void)_getChildProperties;
- (void)_expandPropertiesWithAllowWrite:(BOOL)arg1;
- (id)_urlAppendingSegmentWithAllowWrite:(BOOL)arg1;
- (void)_fetchOnlyHrefs;
- (void)_finishWithError:(id)arg1 state:(int)arg2;
- (id)initWithAccountInfoProvider:(id)arg1 principalURL:(id)arg2 taskManager:(id)arg3;

@end


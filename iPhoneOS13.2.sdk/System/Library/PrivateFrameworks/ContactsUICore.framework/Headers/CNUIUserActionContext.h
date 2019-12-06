//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIUserActionContext-Protocol.h>

@class BSServiceConnectionEndpoint, NSString;
@protocol CNUIUserActionCurator, CNUIUserActionDialRequestOpener, CNUIUserActionRecorder, CNUIUserActionURLOpener, CNUIUserActionUserActivityOpener;

@interface CNUIUserActionContext : NSObject <CNUIUserActionContext>
{
    id <CNUIUserActionURLOpener> _urlOpener;
    id <CNUIUserActionUserActivityOpener> _userActivityOpener;
    id <CNUIUserActionDialRequestOpener> _dialRequestOpener;
    id <CNUIUserActionRecorder> _actionRecorder;
    id <CNUIUserActionCurator> _actionCurator;
    NSString *_channelIdentifier;
    BSServiceConnectionEndpoint *_connectionEndpoint;
}

+ (id)makeDefaultContext;
+ (id)contextWithExtensionContext:(id)arg1;
+ (id)defaultContext;
@property(copy, nonatomic) BSServiceConnectionEndpoint *connectionEndpoint; // @synthesize connectionEndpoint=_connectionEndpoint;
@property(copy, nonatomic) NSString *channelIdentifier; // @synthesize channelIdentifier=_channelIdentifier;
@property(retain, nonatomic) id <CNUIUserActionCurator> actionCurator; // @synthesize actionCurator=_actionCurator;
@property(retain, nonatomic) id <CNUIUserActionRecorder> actionRecorder; // @synthesize actionRecorder=_actionRecorder;
@property(retain, nonatomic) id <CNUIUserActionDialRequestOpener> dialRequestOpener; // @synthesize dialRequestOpener=_dialRequestOpener;
@property(retain, nonatomic) id <CNUIUserActionUserActivityOpener> userActivityOpener; // @synthesize userActivityOpener=_userActivityOpener;
@property(retain, nonatomic) id <CNUIUserActionURLOpener> urlOpener; // @synthesize urlOpener=_urlOpener;
// - (void).cxx_destruct;
- (id)init;
- (id)initWithContactStore:(id)arg1 applicationWorkspace:(id)arg2;

@end


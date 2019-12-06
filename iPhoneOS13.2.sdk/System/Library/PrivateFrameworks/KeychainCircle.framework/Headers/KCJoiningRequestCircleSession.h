//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class KCAESGCMDuplexSession, OTControl, OTJoiningConfiguration;
@protocol KCJoiningRequestCircleDelegate;

@interface KCJoiningRequestCircleSession : NSObject
{
    int _state;
    NSObject<KCJoiningRequestCircleDelegate> *_circleDelegate;
    KCAESGCMDuplexSession *_session;
    NSUInteger _piggy_version;
    OTControl *_otControl;
    OTJoiningConfiguration *_joiningConfiguration;
}

+ (id)sessionWithCircleDelegate:(id)arg1 session:(id)arg2 error:(id )arg3;
@property(retain, nonatomic) OTJoiningConfiguration *joiningConfiguration; // @synthesize joiningConfiguration=_joiningConfiguration;
@property(retain, nonatomic) OTControl *otControl; // @synthesize otControl=_otControl;
@property(nonatomic) NSUInteger piggy_version; // @synthesize piggy_version=_piggy_version;
@property int state; // @synthesize state=_state;
@property(readonly) KCAESGCMDuplexSession *session; // @synthesize session=_session;
@property(readonly) NSObject<KCJoiningRequestCircleDelegate> *circleDelegate; // @synthesize circleDelegate=_circleDelegate;
// - (void).cxx_destruct;
- (id)initWithCircleDelegate:(id)arg1 session:(id)arg2 otcontrol:(id)arg3 error:(id )arg4;
- (id)initWithCircleDelegate:(id)arg1 session:(id)arg2 error:(id )arg3;
- (BOOL)isDone;
- (id)processMessage:(id)arg1 error:(id )arg2;
- (id)handleCircleBlob:(id)arg1 error:(id )arg2;
- (void)attemptSosUpgrade;
- (id)initialMessage:(id )arg1;
- (id)encryptedInitialMessage:(id)arg1 error:(id )arg2;
- (id)encryptedPeerInfo:(id )arg1;
- (void)setJoiningConfigurationObject:(id)arg1;
- (void)setControlObject:(id)arg1;

@end


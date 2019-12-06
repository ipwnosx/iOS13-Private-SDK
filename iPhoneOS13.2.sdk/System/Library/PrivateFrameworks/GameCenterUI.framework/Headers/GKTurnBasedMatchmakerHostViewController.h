//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKExtensionRemoteViewController.h>

#import <GameCenterUI/GKTurnBasedMatchmakerHostProtocol-Protocol.h>
#import <GameCenterUI/GKTurnBasedMatchmakerServiceProtocol-Protocol.h>

@class GKTurnBasedMatchmakerViewController;

@interface GKTurnBasedMatchmakerHostViewController : GKExtensionRemoteViewController <GKTurnBasedMatchmakerHostProtocol, GKTurnBasedMatchmakerServiceProtocol>
{
    GKTurnBasedMatchmakerViewController *_delegateWeak;
}

+ (BOOL)dismissAutomaticallyAfterExtensionCompletion;
+ (id)turnBasedMatchmakerExtension;
- (void)extensionIsCanceling;
- (void)messageFromExtension:(id)arg1;
- (void)refreshMatches;
- (void)setShowQuit:(BOOL)arg1;
- (void)setShowPlay:(BOOL)arg1;
- (void)setShowExistingMatches:(BOOL)arg1;
- (void)setMatchRequestInternal:(id)arg1;
- (id)extensionObjectProxy;
@property(nonatomic) GKTurnBasedMatchmakerViewController *delegate; // @synthesize delegate=_delegateWeak;
- (void)dealloc;

@end


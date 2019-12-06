//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <GameCenterUI/MFMessageComposeViewControllerInternalDelegate-Protocol.h>

@class GKTournament, MFMessageComposeViewController, NSArray, NSDictionary, NSMutableArray, NSString, NSURL;
@protocol GKDashboardNearbyBrowserDelegate, GKMessageComposeViewControllerDelegate;

@interface GKMessageComposeViewController : UIViewController <MFMessageComposeViewControllerInternalDelegate>
{
    NSURL *_shareURL;
    id <GKMessageComposeViewControllerDelegate> _delegate;
    id <GKDashboardNearbyBrowserDelegate> _nearbyDelegate;
    GKTournament *_tournament;
    long long _maximumSelectablePlayersForPicker;
    NSArray *_currentlySelectedPlayersForPicker;
    MFMessageComposeViewController *_composeController;
    NSDictionary *_playerNamesToPlayers;
    NSString *_messageToSend;
    NSMutableArray *_friendsToInvite;
    NSMutableArray *_contactsToInvite;
}

+ (BOOL)canSendText;
@property(retain, nonatomic) NSMutableArray *contactsToInvite; // @synthesize contactsToInvite=_contactsToInvite;
@property(retain, nonatomic) NSMutableArray *friendsToInvite; // @synthesize friendsToInvite=_friendsToInvite;
@property(retain, nonatomic) NSString *messageToSend; // @synthesize messageToSend=_messageToSend;
@property(retain, nonatomic) NSDictionary *playerNamesToPlayers; // @synthesize playerNamesToPlayers=_playerNamesToPlayers;
@property(retain, nonatomic) MFMessageComposeViewController *composeController; // @synthesize composeController=_composeController;
@property(retain, nonatomic) NSArray *currentlySelectedPlayersForPicker; // @synthesize currentlySelectedPlayersForPicker=_currentlySelectedPlayersForPicker;
@property(nonatomic) long long maximumSelectablePlayersForPicker; // @synthesize maximumSelectablePlayersForPicker=_maximumSelectablePlayersForPicker;
@property(retain, nonatomic) GKTournament *tournament; // @synthesize tournament=_tournament;
@property(nonatomic) __weak id <GKDashboardNearbyBrowserDelegate> nearbyDelegate; // @synthesize nearbyDelegate=_nearbyDelegate;
@property(nonatomic) __weak id <GKMessageComposeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSURL *shareURL; // @synthesize shareURL=_shareURL;
// - (void).cxx_destruct;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (id)contactForAddress:(id)arg1 fromContactStore:(id)arg2;
- (void)messageComposeViewController:(id)arg1 shouldSendMessage:(id)arg2 toRecipients:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)showPlayerPickerForCompose;
- (void)setupPickerBlock;
- (void)preparePresentationForMinPlayers:(long long)arg1 maxPlayers:(long long)arg2 shareURL:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithMessage:(id)arg1 maxNumberOfPlayers:(long long)arg2;

@end


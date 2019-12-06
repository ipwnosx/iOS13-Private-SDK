//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNNavigationServiceObserver-Protocol.h>
#import <Navigation/MNNavigationSessionObserver-Protocol.h>

@class GEOCompanionRouteDetails, GEOCompanionRouteStatus, GEOComposedRoute, GEOLocation, GEONavigationGuidanceState, GEORouteMatch, MNCompanionNavigationXPCConnection, NSArray, NSString, NSTimer;
@protocol GEOServerFormattedStepStringFormatter, MNCompanionNavigationDelegate;

@interface MNCompanionNavigationAdapter : NSObject <MNNavigationServiceObserver, MNNavigationSessionObserver>
{
    NSString *_destinationName;
    GEOComposedRoute *_route;
    GEOLocation *_lastLocation;
    BOOL _locationUnreliable;
    GEORouteMatch *_routeMatch;
    NSString *_currentRoadName;
    BOOL _guidancePromptsEnabled;
    NSUInteger _displayedStepIndex;
//     CDStruct_a70066d4 _positionFromManeuver;
//     CDStruct_a70066d4 _positionFromDestination;
    NSUInteger _announcementStage;
    NSUInteger _nextAnnouncementStage;
    double _timeUntilNextAnnouncement;
    GEONavigationGuidanceState *_guidanceState;
    BOOL _isNavigatingInLowGuidance;
    BOOL _isConnectedToCarplay;
    GEOCompanionRouteDetails *_companionRouteDetails;
    GEOCompanionRouteStatus *_companionRouteStatus;
    NSArray *_companionRouteUpdates;
    BOOL _shouldSendRouteWithStatus;
    NSTimer *_coalescedRouteStatusTimer;
    NSTimer *_coalescedRouteUpdatesTimer;
    MNCompanionNavigationXPCConnection *_connection;
    id <GEOServerFormattedStepStringFormatter> _formatter;
    id <MNCompanionNavigationDelegate> _delegate;
}

@property(nonatomic) __weak id <MNCompanionNavigationDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_handleNavigationServiceStopped;
- (void)_reloadRouteFromNavigationService:(id)arg1;
- (void)navigationService:(id)arg1 didReceiveRealtimeUpdates:(id)arg2;
- (void)navigationService:(id)arg1 didEnableGuidancePrompts:(BOOL)arg2;
- (void)navigationService:(id)arg1 displayManeuverAlertForAnnouncementStage:(NSUInteger)arg2;
- (void)navigationService:(id)arg1 triggerHaptics:(int)arg2;
- (void)navigationService:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(NSUInteger)arg7 isSynthetic:(BOOL)arg8;
- (void)navigationService:(id)arg1 willAnnounce:(NSUInteger)arg2 inSeconds:(double)arg3;
- (void)navigationService:(id)arg1 didUpdateDistanceUntilManeuver:(double)arg2 timeUntilManeuver:(double)arg3 forStepIndex:(NSUInteger)arg4;
- (void)navigationService:(id)arg1 didReroute:(id)arg2 traffic:(id)arg3;
- (void)navigationServiceDidCancelReroute:(id)arg1;
- (void)navigationServiceWillReroute:(id)arg1;
- (void)navigationService:(id)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3;
- (void)navigationService:(id)arg1 didUpdateMatchedLocation:(id)arg2;
- (void)navigationService:(id)arg1 didChangeNavigationState:(int)arg2;
- (void)navigationService:(id)arg1 didChangeFromState:(NSUInteger)arg2 toState:(NSUInteger)arg3;
- (void)navigationServiceDidSynchronize:(id)arg1;
- (void)navigationSession:(id)arg1 didEnableGuidancePrompts:(BOOL)arg2;
- (void)navigationSession:(id)arg1 displayManeuverAlertForAnnouncementStage:(NSUInteger)arg2;
- (void)navigationSession:(id)arg1 triggerHaptics:(int)arg2;
- (void)navigationSession:(id)arg1 willAnnounce:(NSUInteger)arg2 inSeconds:(double)arg3;
- (void)navigationSession:(id)arg1 currentStepIndex:(NSUInteger)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;
- (void)navigationSession:(id)arg1 didUpdateDestination:(id)arg2;
- (void)navigationSessionDidCancelReroute:(id)arg1;
- (void)navigationSessionWillReroute:(id)arg1;
- (void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3 withAlternateRoutes:(id)arg4;
- (void)navigationSession:(id)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3;
- (void)navigationSession:(id)arg1 matchedToStepIndex:(NSUInteger)arg2 legIndex:(NSUInteger)arg3;
- (void)navigationSession:(id)arg1 didUpdateMatchedLocation:(id)arg2;
- (void)navigationSession:(id)arg1 didChangeNavigationState:(int)arg2;
- (void)_markCurrentHapticsAsTriggered;
- (void)_sendRouteUpdates;
- (void)_sendRouteStatus;
- (void)_sendRouteDetailsAndStatus;
- (void)_cancelScheduledRouteUpdates;
- (void)_scheduleCoalescedRouteUpdates;
- (void)_cancelScheduledRouteStatus;
- (void)_scheduleCoalescedRouteStatusUpdate;
- (void)_triggerHaptics:(int)arg1;
- (void)_setRealtimeUpdates:(id)arg1;
- (void)_setNextAnnouncementStage:(NSUInteger)arg1 timeUntilNextAnnouncement:(double)arg2;
- (void)_setAnnouncementStage:(NSUInteger)arg1;
// - (void)_setPositionFromDestination:(CDStruct_c3b9c2ee)arg1;
// - (void)_setPositionFromManeuver:(CDStruct_c3b9c2ee)arg1;
- (void)_setDisplayedStepIndex:(NSUInteger)arg1;
- (void)_setGuidancePromptsEnabled:(BOOL)arg1;
- (void)_setDestinationName:(id)arg1;
- (void)_setRouteMatch:(id)arg1;
- (void)_setLocationUnreliable:(BOOL)arg1;
- (void)_setLastLocation:(id)arg1;
- (void)_setNavigationState:(int)arg1;
- (void)_setRoute:(id)arg1 traffic:(id)arg2 isTrace:(BOOL)arg3;
- (void)_updateCompanionRouteStatus;
- (void)setIsConnectedToCarplay:(BOOL)arg1;
- (void)setVoiceVolume:(NSUInteger)arg1;
- (void)setIsNavigatingInLowGuidance:(BOOL)arg1;
- (void)_reset;
- (void)invalidate;
- (BOOL)_isInvalidated;
- (void)dealloc;
- (id)initWithNavigationSession:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end


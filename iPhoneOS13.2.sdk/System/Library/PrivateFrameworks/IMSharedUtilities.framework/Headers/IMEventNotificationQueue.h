//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMDoubleLinkedList;
@protocol IMEventNotificationQueueDelegate;

@interface IMEventNotificationQueue : NSObject
{
    BOOL _paused;
    BOOL _scheduled;
    BOOL _busy;
    id <IMEventNotificationQueueDelegate> _delegate;
    IMDoubleLinkedList *_eventNotificationList;
}

@property(readonly, nonatomic) IMDoubleLinkedList *eventNotificationList; // @synthesize eventNotificationList=_eventNotificationList;
@property __weak id <IMEventNotificationQueueDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)containsNotificationTarget:(id)arg1;
@property(readonly) long long count;
@property(getter=isPaused) BOOL paused; // @synthesize paused=_paused;
@property(readonly, getter=isScheduled) BOOL scheduled; // @synthesize scheduled=_scheduled;
- (void)_didChangePausedState:(BOOL)arg1;
- (void)pushEventTarget:(id)arg1 sender:(id)arg2 eventNotificationBlock:(CDUnknownBlockType)arg3;
- (void)appendEventTarget:(id)arg1 sender:(id)arg2 eventNotificationBlock:(CDUnknownBlockType)arg3;
- (void)pushEventTarget:(id)arg1 eventNotificationBlock:(CDUnknownBlockType)arg2;
- (void)appendEventTarget:(id)arg1 eventNotificationBlock:(CDUnknownBlockType)arg2;
- (void)cancelAllEventNotifications;
- (void)cancelEventNotificationsForNotificationTarget:(id)arg1;
- (void)_didCancelNotifications;
- (void)appendEventNotification:(id)arg1;
- (void)pushEventNotification:(id)arg1;
- (void)_didAddNotification:(id)arg1;
- (void)_processQueue;
- (void)_invokeNotifications;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_willProcessQueue;
- (void)_didProcessQueue;
- (void)_setBusy:(BOOL)arg1;
- (void)_didChangeBusyState:(BOOL)arg1;
@property(readonly, getter=isBusy) BOOL busy; // @synthesize busy=_busy;
- (void)_invokeEvent:(id)arg1;
- (void)_scheduleIfNeeded:(BOOL)arg1;
- (void)_dispatchProcessQueue;
- (id)init;

@end


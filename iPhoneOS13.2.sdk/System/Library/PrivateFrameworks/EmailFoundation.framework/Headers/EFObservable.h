//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface EFObservable : NSObject
{
}

+ (id)emptyObservable;
+ (id)neverObservable;
+ (id)merge:(id)arg1;
+ (id)concatenate:(id)arg1;
+ (id)combineLatest:(id)arg1;
+ (id)observableOnNotifyTokenWithName:(id)arg1;
+ (id)observableOnDefaultNotificationCenterWithName:(id)arg1 object:(id)arg2;
+ (id)observableOnNotificationCenter:(id)arg1 name:(id)arg2 object:(id)arg3;
+ (id)observableAfterDelay:(double)arg1 interval:(double)arg2 scheduler:(id)arg3;
+ (id)observableAfterDelay:(double)arg1 scheduler:(id)arg2;
+ (id)observableWithTimeInterval:(double)arg1 scheduler:(id)arg2;
+ (id)observableWithError:(id)arg1;
+ (id)observableWithResults:(id)arg1 scheduler:(id)arg2;
+ (id)observableWithResults:(id)arg1;
+ (id)observableWithResult:(id)arg1;
+ (id)observableWithFuture:(id)arg1;
+ (id)observableWithBlock:(CDUnknownBlockType)arg1;
+ (id)observableObserver;
+ (id)observableWithInitialState:(id)arg1 condition:(CDUnknownBlockType)arg2 nextState:(CDUnknownBlockType)arg3 resultSelector:(CDUnknownBlockType)arg4 delay:(CDUnknownBlockType)arg5 scheduler:(id)arg6;
+ (id)observableWithInitialState:(id)arg1 condition:(CDUnknownBlockType)arg2 nextState:(CDUnknownBlockType)arg3 resultSelector:(CDUnknownBlockType)arg4 scheduler:(id)arg5;
- (id)startWith:(id)arg1 scheduler:(id)arg2;
- (id)startWith:(id)arg1;
- (id)sampleWithObservable:(id)arg1;
- (id)sampleWithTimeInterval:(double)arg1 scheduler:(id)arg2;
- (id)sampleWithTimeInterval:(double)arg1;
- (id)replay:(NSUInteger)arg1;
- (id)replay;
- (id)publish;
- (id)multicast:(id)arg1;
- (id)map:(CDUnknownBlockType)arg1;
- (id)filter:(CDUnknownBlockType)arg1;
- (id)skip:(NSUInteger)arg1;
- (id)take:(NSUInteger)arg1;
- (id)first;
- (id)distinctUntilChanged;
- (id)delay:(double)arg1 scheduler:(id)arg2;
- (id)debounceWithTimeInterval:(double)arg1 scheduler:(id)arg2;
- (id)debounceWithTimeInterval:(double)arg1;
- (id)doOnTerminate:(CDUnknownBlockType)arg1;
- (id)doOnCancel:(CDUnknownBlockType)arg1;
- (id)doOnError:(CDUnknownBlockType)arg1;
- (id)doOnCompletion:(CDUnknownBlockType)arg1;
- (id)doOnNext:(CDUnknownBlockType)arg1;
- (id)doOnSubscribe:(CDUnknownBlockType)arg1;
- (id)allObjects:(id )arg1;
- (id)observeOn:(id)arg1;
- (id)subscribeOn:(id)arg1;
- (id)subscribeWithResultBlock:(CDUnknownBlockType)arg1;

@end


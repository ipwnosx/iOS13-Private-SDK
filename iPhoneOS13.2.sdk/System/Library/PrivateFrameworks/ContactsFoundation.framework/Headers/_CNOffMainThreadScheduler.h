//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNScheduler-Protocol.h>

@class NSString;
@protocol CNScheduler;

@interface _CNOffMainThreadScheduler : NSObject <CNScheduler>
{
    id <CNScheduler> _alreadyOffMainThreadScheduler;
    id <CNScheduler> _needToGetOffMainThreadScheduler;
}

+ (id)os_log;
@property(readonly, nonatomic) id <CNScheduler> needToGetOffMainThreadScheduler; // @synthesize needToGetOffMainThreadScheduler=_needToGetOffMainThreadScheduler;
@property(readonly, nonatomic) id <CNScheduler> alreadyOffMainThreadScheduler; // @synthesize alreadyOffMainThreadScheduler=_alreadyOffMainThreadScheduler;
// - (void).cxx_destruct;
@property(readonly) double timestamp;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2 qualityOfService:(NSUInteger)arg3;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1 qualityOfService:(NSUInteger)arg2;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1 qualityOfService:(NSUInteger)arg2;
- (void)performBlock:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithBackgroundScheduler:(id)arg1;
- (id)init;

@end


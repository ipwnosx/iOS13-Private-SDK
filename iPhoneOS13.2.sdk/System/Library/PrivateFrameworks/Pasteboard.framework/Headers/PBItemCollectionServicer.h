//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Pasteboard/PBDataProviderProtocol-Protocol.h>

@class NSMutableDictionary, PBItemCollection;

__attribute__((visibility("hidden")))
@interface PBItemCollectionServicer : NSObject <PBDataProviderProtocol>
{
    NSMutableDictionary *_cleanupQueue_cleanupHandlerByUUID;
    PBItemCollection *_itemCollection;
}

+ (id)newServicerForConnection:(id)arg1 itemCollection:(id)arg2;
@property(retain, nonatomic) PBItemCollection *itemCollection; // @synthesize itemCollection=_itemCollection;
// - (void).cxx_destruct;
- (void)waitForItemRequestsDeliveryCompletion:(CDUnknownBlockType)arg1;
- (void)callCleanupBlockWithUUID:(id)arg1;
- (void)loadRepresentationForItemAtIndex:(NSUInteger)arg1 type:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)helloCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithConnection:(id)arg1 itemCollection:(id)arg2;

@end


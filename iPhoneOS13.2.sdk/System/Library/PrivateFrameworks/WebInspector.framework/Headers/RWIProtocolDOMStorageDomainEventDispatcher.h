//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface RWIProtocolDOMStorageDomainEventDispatcher : NSObject
{
//     struct AugmentableInspectorController _controller;
}

- (void)domStorageItemUpdatedWithStorageId:(id)arg1 key:(id)arg2 oldValue:(id)arg3 newValue:(id)arg4;
- (void)domStorageItemAddedWithStorageId:(id)arg1 key:(id)arg2 newValue:(id)arg3;
- (void)domStorageItemRemovedWithStorageId:(id)arg1 key:(id)arg2;
- (void)domStorageItemsClearedWithStorageId:(id)arg1;
// - (id)initWithController:(struct AugmentableInspectorController )arg1;

@end


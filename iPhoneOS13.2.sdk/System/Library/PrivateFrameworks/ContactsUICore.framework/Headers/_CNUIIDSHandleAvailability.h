//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIIDSHandleAvailability-Protocol.h>

@class NSString;
@protocol CNUIIDSHandle;

@interface _CNUIIDSHandleAvailability : NSObject <CNUIIDSHandleAvailability>
{
    BOOL _available;
    id <CNUIIDSHandle> _handle;
}

@property(readonly, nonatomic) BOOL isAvailable; // @dynamic isAvailable;
@property(readonly, nonatomic) id <CNUIIDSHandle> handle; // @synthesize handle=_handle;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)initWithHandle:(id)arg1 available:(BOOL)arg2;

@end


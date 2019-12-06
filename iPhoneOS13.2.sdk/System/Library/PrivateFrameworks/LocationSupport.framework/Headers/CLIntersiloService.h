//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <LocationSupport/CLIntersiloServiceProtocol-Protocol.h>
#import <LocationSupport/CLIntersiloUniverse-Protocol.h>

@class CLServiceVendor, CLSilo, NSString;
@protocol CLIntersiloUniverse;

@interface CLIntersiloService : NSObject <CLIntersiloServiceProtocol, CLIntersiloUniverse>
{
    CLSilo *_silo;
    CLServiceVendor *_vendor;
    BOOL _valid;
}

+ (BOOL)isSupported;
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;
+ (void)becameFatallyBlocked:(id)arg1 index:(NSUInteger)arg2;
+ (id)getSilo;
@property(nonatomic) BOOL valid; // @synthesize valid=_valid;
@property(readonly, nonatomic) CLServiceVendor *vendor; // @synthesize vendor=_vendor;
@property(readonly, nonatomic) CLSilo *silo; // @synthesize silo=_silo;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) id <CLIntersiloUniverse> universe;
- (id)initWithInboundProtocol:(id)arg1 outboundProtocol:(id)arg2;
- (id)init;

@end


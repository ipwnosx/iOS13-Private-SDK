//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FontServices/FontServicesFontPickerSupportProtocol-Protocol.h>

@class NSXPCListener;

@interface FontPickerSupportHandler : NSObject <FontServicesFontPickerSupportProtocol, NSXPCListenerDelegate>
{
    NSXPCListener *_listener;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
// - (void).cxx_destruct;
- (void)locallyActivatedFontFiles:(CDUnknownBlockType)arg1;
- (void)activateFontsForFontPickerClient:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)ping:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)init;

@end


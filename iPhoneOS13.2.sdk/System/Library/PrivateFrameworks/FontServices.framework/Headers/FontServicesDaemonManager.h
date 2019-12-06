//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface FontServicesDaemonManager : NSObject
{
    NSXPCConnection *_connection;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
// - (void).cxx_destruct;
- (void)updatingUserFonts:(CDUnknownBlockType)arg1;
- (void)resumeAndShowAlertForSuspendedFontProviders;
- (void)fontChanged:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestFonts:(id)arg1 forClient:(id)arg2;
- (void)requestFonts:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)requestFileAccess:(id)arg1;
- (void)checkinForFontPicker:(CDUnknownBlockType)arg1;
- (void)checkin:(CDUnknownBlockType)arg1;

@end


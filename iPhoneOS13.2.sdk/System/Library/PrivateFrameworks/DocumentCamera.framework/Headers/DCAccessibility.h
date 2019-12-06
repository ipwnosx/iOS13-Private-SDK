//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DocumentCamera/DCAccessibilityExtras-Protocol.h>
#import <DocumentCamera/DCAnalyticsReporterAccessibilityDelegate-Protocol.h>

__attribute__((visibility("hidden")))
@interface DCAccessibility : NSObject <DCAccessibilityExtras, DCAnalyticsReporterAccessibilityDelegate>
{
}

+ (id)sharedInstance;
- (BOOL)shouldPerformLoggingForSwitchControl;
- (BOOL)shouldPerformLoggingForVoiceOver;
- (BOOL)needsAccessibilityElements;
- (void)postAnnouncement:(id)arg1 withSender:(id)arg2 priority:(long long)arg3;

@end


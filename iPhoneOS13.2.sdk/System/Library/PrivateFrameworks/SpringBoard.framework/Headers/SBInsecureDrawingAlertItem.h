//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBDiagnosticRequestAlertItem.h>

@class NSSet, NSString;

@interface SBInsecureDrawingAlertItem : SBDiagnosticRequestAlertItem
{
    NSString *_processName;
    NSSet *_layerNames;
}

@property(copy, nonatomic) NSSet *layerNames; // @synthesize layerNames=_layerNames;
@property(copy, nonatomic) NSString *processName; // @synthesize processName=_processName;
// - (void).cxx_destruct;
- (id)_buildVersion;
- (long long)radarReproducibility;
- (long long)radarClassification;
- (id)radarDescription;
- (id)radarTitle;
- (id)message;
- (id)title;
- (BOOL)ignoreIfAlreadyDisplaying;
- (BOOL)shouldShowInLockScreen;

@end


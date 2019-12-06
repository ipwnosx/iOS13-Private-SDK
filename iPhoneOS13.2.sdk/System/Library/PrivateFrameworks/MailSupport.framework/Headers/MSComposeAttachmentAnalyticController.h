//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSDiagnosticManager;

@interface MSComposeAttachmentAnalyticController : NSObject
{
    long long _totalDrawingsInsertedCount;
    MSDiagnosticManager *_diagnosticManager;
}

@property(retain, nonatomic) MSDiagnosticManager *diagnosticManager; // @synthesize diagnosticManager=_diagnosticManager;
// - (void).cxx_destruct;
- (void)_submitFinalDrawingInsertCount:(long long)arg1 sentMessage:(BOOL)arg2;
- (void)abandonMessageWithActualDrawingInsertCount:(long long)arg1;
- (void)sendMessageWithActualDrawingInsertCount:(long long)arg1;
- (id)initWithDiagnosticManager:(id)arg1 totalDrawingsInsertedCount:(long long)arg2;

@end


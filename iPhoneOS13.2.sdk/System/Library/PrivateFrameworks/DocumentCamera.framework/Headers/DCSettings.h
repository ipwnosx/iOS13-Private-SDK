//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUserDefaults;

@interface DCSettings : NSObject
{
    NSUserDefaults *_userDefaults;
}

+ (id)sharedSettings;
@property(retain) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
// - (void).cxx_destruct;
- (void)setFinishAfterFirstScanBoxed:(id)arg1;
- (id)finishAfterFirstScanBoxed;
- (void)setEnableViewServiceBoxed:(id)arg1;
- (id)enableViewServiceBoxed;
@property(readonly, nonatomic) BOOL finishAfterFirstScan;
@property(readonly, nonatomic) BOOL enableViewService;
- (id)init;

@end


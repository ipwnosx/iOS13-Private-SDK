//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WLKStoredConfiguration;

@interface WLKStoredConfigurationManager : NSObject
{
    WLKStoredConfiguration *_storedConfiguration;
}

+ (id)sharedInstance;
@property(retain, nonatomic) WLKStoredConfiguration *storedConfiguration; // @synthesize storedConfiguration=_storedConfiguration;
// - (void).cxx_destruct;
- (void)_setStoredConfiguration:(id)arg1;
- (void)_handleAccountChange:(id)arg1;
- (void)_handleLibraryChange:(id)arg1;
- (void)_updateConfiguration:(id)arg1;
- (void)_invalidateWithReason:(id)arg1;
- (void)dealloc;
- (id)init;

@end


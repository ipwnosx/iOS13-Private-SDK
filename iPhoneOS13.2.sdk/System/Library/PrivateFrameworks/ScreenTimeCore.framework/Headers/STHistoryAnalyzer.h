//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPersistentHistoryToken;

__attribute__((visibility("hidden")))
@interface STHistoryAnalyzer : NSObject
{
    NSPersistentHistoryToken *_finalToken;
}

@property(readonly, nonatomic) NSPersistentHistoryToken *finalToken; // @synthesize finalToken=_finalToken;
// - (void).cxx_destruct;
- (BOOL)_isChangeInteresting:(id)arg1;
- (id)deltasForStore:(id)arg1 inManagedObjectContext:(id)arg2 sinceToken:(id)arg3 ignoreAuthor:(id)arg4 finalToken:(id )arg5 error:(id )arg6;

@end


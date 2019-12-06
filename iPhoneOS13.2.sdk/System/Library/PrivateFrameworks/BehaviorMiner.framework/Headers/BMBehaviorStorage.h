//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BMManagedObjectConverter, NSError, NSManagedObjectContext, NSPersistentContainer, NSURL;

@interface BMBehaviorStorage : NSObject
{
//    struct os_unfair_lock_s _setupLock;
    BOOL _readOnly;
    NSURL *_URL;
    NSError *_setupError;
    NSPersistentContainer *_container;
    NSManagedObjectContext *_context;
    BMManagedObjectConverter *_converter;
}

+ (id)defaultURL;
@property(retain, nonatomic) BMManagedObjectConverter *converter; // @synthesize converter=_converter;
@property(retain, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSPersistentContainer *container; // @synthesize container=_container;
@property(copy, nonatomic) NSError *setupError; // @synthesize setupError=_setupError;
@property(readonly, nonatomic) BOOL readOnly; // @synthesize readOnly=_readOnly;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
// - (void).cxx_destruct;
- (void)deleteAllWithError:(id )arg1;
- (void)saveRules:(id)arg1 error:(id )arg2;
- (id)fetchRulesWithSupport:(double)arg1 confidence:(double)arg2 filters:(id)arg3 error:(id )arg4;
- (void)setupStorage;
- (id)initWithURL:(id)arg1 readOnly:(BOOL)arg2;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKContainer;

@interface IMDCKDatabaseManager : NSObject
{
    CKContainer *_manateeContainer;
    CKContainer *_nonHSA2ManateeContainer;
    CKContainer *_nickNameContainer;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) CKContainer *nickNameContainer; // @synthesize nickNameContainer=_nickNameContainer;
@property(readonly, nonatomic) CKContainer *nonHSA2ManateeContainer; // @synthesize nonHSA2ManateeContainer=_nonHSA2ManateeContainer;
@property(readonly, nonatomic) CKContainer *manateeContainer; // @synthesize manateeContainer=_manateeContainer;
- (void)fetchCurrentUserForNicknameContainer:(CDUnknownBlockType)arg1;
- (id)nickNamePublicDatabase;
- (id)nonHSA2ManateeDatabase;
- (id)manateeDataBase;
@property(readonly, nonatomic) CKContainer *truthContainer;
- (id)truthPublicDatabase;
- (id)truthDatabase;
- (id)_nickNameContainer;
- (id)_nickNameContainerIdentifier;
- (BOOL)_serverSaysToUseOldContainer;
@property(readonly, nonatomic) BOOL useStingRay;
- (void)dealloc;
- (id)init;

@end


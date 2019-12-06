//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/SBIconModelStore-Protocol.h>

@class NSString, NSURL;

@interface SBIconModelPropertyListFileStore : NSObject <SBIconModelStore, BSDescriptionProviding>
{
    NSURL *_currentIconStateURL;
    NSURL *_desiredIconStateURL;
}

@property(readonly, copy, nonatomic) NSURL *desiredIconStateURL; // @synthesize desiredIconStateURL=_desiredIconStateURL;
@property(readonly, copy, nonatomic) NSURL *currentIconStateURL; // @synthesize currentIconStateURL=_currentIconStateURL;
// - (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
@property(readonly, copy) NSString *description;
- (BOOL)_save:(id)arg1 url:(id)arg2 error:(id )arg3;
- (BOOL)_delete:(id)arg1 options:(NSUInteger)arg2 error:(id )arg3;
- (id)_load:(id)arg1 error:(id )arg2;
- (id)loadDesiredIconState:(id )arg1;
- (id)loadCurrentIconState:(id )arg1;
- (BOOL)deleteDesiredIconStateWithOptions:(NSUInteger)arg1 error:(id )arg2;
- (BOOL)deleteCurrentIconStateWithOptions:(NSUInteger)arg1 error:(id )arg2;
- (BOOL)saveDesiredIconState:(id)arg1 error:(id )arg2;
- (BOOL)saveCurrentIconState:(id)arg1 error:(id )arg2;
- (id)init;
- (id)initWithIconStateURL:(id)arg1 desiredIconStateURL:(id)arg2;

@end


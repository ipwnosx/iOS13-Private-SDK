//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFDatabaseResult.h>

@class NSSortDescriptor, NSString;

@interface WFRealmDatabaseResult : WFDatabaseResult
{
    Class _objectClass;
    NSString *_predicateFormat;
    NSSortDescriptor *_sortDescriptor;
}

@property(readonly, copy, nonatomic) NSSortDescriptor *sortDescriptor; // @synthesize sortDescriptor=_sortDescriptor;
@property(readonly, copy, nonatomic) NSString *predicateFormat; // @synthesize predicateFormat=_predicateFormat;
@property(readonly, nonatomic) Class objectClass; // @synthesize objectClass=_objectClass;
// - (void).cxx_destruct;
- (void)notifyObserversAboutChange:(id)arg1;
- (id)initWithBackingStore:(id)arg1 objectClass:(Class)arg2 predicateFormat:(id)arg3 sortDescriptor:(id)arg4;

@end


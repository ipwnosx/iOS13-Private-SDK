//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CompanionSync/SYChange-Protocol.h>

@class NSString;
@protocol SYObject;

__attribute__((visibility("hidden")))
@interface SYObjectWrapper : NSObject <SYChange>
{
    long long _type;
    id <SYObject> _wrappedObject;
}

@property(readonly, nonatomic) id <SYObject> wrappedObject; // @synthesize wrappedObject=_wrappedObject;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long changeType;
@property(readonly, nonatomic) NSString *sequencer;
@property(readonly, nonatomic) NSString *objectIdentifier;
- (id)initWithSYObject:(id)arg1 type:(long long)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString;
@protocol HMDAccessorySymptomsDelegate;

@interface HMDSymptomContainer : NSObject
{
    NSString *_idsIdentifier;
    id <HMDAccessorySymptomsDelegate> _delegate;
    NSSet *_broadcastedSymptoms;
    NSSet *_localSymptoms;
}

@property(copy, nonatomic) NSSet *localSymptoms; // @synthesize localSymptoms=_localSymptoms;
@property(copy, nonatomic) NSSet *broadcastedSymptoms; // @synthesize broadcastedSymptoms=_broadcastedSymptoms;
@property(nonatomic) __weak id <HMDAccessorySymptomsDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
// - (void).cxx_destruct;
- (id)initWithIDSIdentifier:(id)arg1;

@end


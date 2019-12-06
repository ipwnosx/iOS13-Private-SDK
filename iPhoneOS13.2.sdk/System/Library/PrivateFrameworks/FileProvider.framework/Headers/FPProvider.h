//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/FPProviderDomain.h>


@class NSArray, NSString, NSURL;

@interface FPProvider : FPProviderDomain <NSSecureCoding>
{
    NSArray *_supportedSortDescriptors;
    long long _type;
}

+ (void)fetchProviderForItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)endMonitoringProviderChanges:(id)arg1;
+ (id)beginMonitoringProviderChangesWithHandler:(CDUnknownBlockType)arg1;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSArray *supportedSortDescriptors; // @synthesize supportedSortDescriptors=_supportedSortDescriptors;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *storageURL;
@property(readonly, nonatomic) NSURL *bundleURL;
@property(readonly, nonatomic) NSString *providerIdentifier;
@property(readonly, nonatomic) NSString *localizedName;
- (id)localizedTitleForSortDescriptor:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


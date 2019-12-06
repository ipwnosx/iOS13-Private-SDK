//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CardKit/CRKIdentifiedCardSectionViewProviding-Protocol.h>

@class NSArray, NSString;
@protocol CRCard, CRKCardSectionViewProviding;

@interface _CRKBundleIdentifiedCardSectionViewProvider : NSObject <CRKIdentifiedCardSectionViewProviding>
{
    NSString *providerIdentifier;
    id <CRCard> card;
    NSArray *viewConfigurations;
    id <CRKCardSectionViewProviding> _realCardSectionViewProvider;
}

@property(retain, nonatomic) id <CRKCardSectionViewProviding> realCardSectionViewProvider; // @synthesize realCardSectionViewProvider=_realCardSectionViewProvider;
@property(copy, nonatomic) NSString *providerIdentifier; // @synthesize providerIdentifier;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *viewConfigurations; // @synthesize viewConfigurations;
@property(readonly, nonatomic) id <CRCard> card; // @synthesize card;
- (NSUInteger)displayPriorityForCardSection:(id)arg1;
- (BOOL)vetoDisplayOfCardSection:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;

@end


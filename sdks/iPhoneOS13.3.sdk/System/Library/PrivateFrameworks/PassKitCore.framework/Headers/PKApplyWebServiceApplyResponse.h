//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKApplyWebServiceResponse.h>

@class PKAccount, PKFeatureApplication;

@interface PKApplyWebServiceApplyResponse : PKApplyWebServiceResponse
{
    PKFeatureApplication *_featureApplication;
    PKAccount *_account;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) PKAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) PKFeatureApplication *featureApplication; // @synthesize featureApplication=_featureApplication;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)nextStepInfo;
- (id)initWithData:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXMediaUtilities/AXMEvaluationNode.h>

@class VNGenerateAttentionBasedSaliencyImageRequest;

@interface AXMProminentObjectsDetectorNode : AXMEvaluationNode
{
    VNGenerateAttentionBasedSaliencyImageRequest *__imageSaliencyRequest;
}

+ (id)title;
+ (BOOL)isSupported;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) VNGenerateAttentionBasedSaliencyImageRequest *_imageSaliencyRequest; // @synthesize _imageSaliencyRequest=__imageSaliencyRequest;
// - (void).cxx_destruct;
- (void)evaluate:(id)arg1;
- (BOOL)validateVisionKitSoftLinkSymbols;
- (BOOL)requiresVisionFramework;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)nodeInitialize;

@end


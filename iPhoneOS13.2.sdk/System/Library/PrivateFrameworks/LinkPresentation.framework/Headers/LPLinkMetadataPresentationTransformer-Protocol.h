//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class LPLinkMetadataPresentationTransformer, LPWebLinkPresentationProperties, NSURL;

@protocol LPLinkMetadataPresentationTransformer <NSObject>
- (BOOL)canGeneratePresentationPropertiesForURL:(NSURL *)arg1;
- (LPWebLinkPresentationProperties *)presentationPropertiesForTransformer:(LPLinkMetadataPresentationTransformer *)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, TSPDataMetadata, TSPDigest;

@protocol TSPDecoderDataInfo <NSObject>
@property(readonly, nonatomic) long long identifier;
@property(readonly, nonatomic) TSPDataMetadata *dataMetadata;
@property(readonly, nonatomic) NSString *externalFilePath;
@property(readonly, nonatomic) NSString *documentResourceLocator;
@property(readonly, nonatomic) NSString *preferredFilename;
@property(readonly, nonatomic) TSPDigest *digest;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData;
@protocol CHStrokeIdentifier, CHStrokeProvider, CHStrokeProviderVersion;

@protocol CHRecognitionSessionDataSource <NSObject>
- (id <CHStrokeIdentifier>)strokeIdentifierFromData:(NSData *)arg1;
- (NSData *)dataRepresentationForStrokeIdentifier:(id <CHStrokeIdentifier>)arg1;
- (id <CHStrokeProviderVersion>)strokeProviderVersionFromData:(NSData *)arg1;
- (NSData *)dataRepresentationForStrokeProviderVersion:(id <CHStrokeProviderVersion>)arg1;
- (id <CHStrokeProvider>)strokeProviderSnapshot;
@end


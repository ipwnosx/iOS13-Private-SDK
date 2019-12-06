//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class CUIImage, NSArray;

@interface TDSchemaPartDefinition : NSManagedObject
{
    CUIImage *previewImage;
    NSArray *renditions;
    NSArray *renditionGroups;
    NSUInteger partFeatures;
}

@property(nonatomic) NSUInteger partFeatures; // @synthesize partFeatures;
@property(retain, nonatomic) NSArray *renditionGroups; // @synthesize renditionGroups;
@property(copy, nonatomic) NSArray *renditions; // @synthesize renditions;
@property(retain, nonatomic) CUIImage *previewImage; // @synthesize previewImage;
- (void)didTurnIntoFault;
// - (const CDStruct_26b2aa83 )cuiPartDefinition;
- (id)displayName;
- (long long)partID;
- (long long)elementID;
- (long long)_renditionKeyValueForTokenIdentifier:(unsigned short)arg1;
- (id)validStatesWithDocument:(id)arg1;
- (void)updateDerivedRenditionData;
- (id)_schema;
- (id)bestPreviewRendition;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPArchiverBase.h>

#import <iWorkImport/TSPKnownFieldRuleProvider-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSPAlternateArchiver : TSPArchiverBase <TSPKnownFieldRuleProvider>
{
    RepeatedPtrField_02f83fb8 _fieldPathsToRemove;
    struct {
        unsigned int hasPreserveNewerValueRule:1;
        unsigned int hasPreserveNewerValueUntilModifiedRule:1;
    } _flags;
    BOOL _isDiff;
//     const struct FieldPath _fieldPath;
    NSUInteger _diffReadVersion;
    TSPArchiverBase *_parentArchiver;
}

@property(readonly, nonatomic) __weak TSPArchiverBase *parentArchiver; // @synthesize parentArchiver=_parentArchiver;
@property(readonly, nonatomic) NSUInteger diffReadVersion; // @synthesize diffReadVersion=_diffReadVersion;
// @property(readonly, nonatomic) const struct FieldPath fieldPath; // @synthesize fieldPath=_fieldPath;
@property(readonly, nonatomic) BOOL isDiff; // @synthesize isDiff=_isDiff;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)enumerateKnownFieldRulesUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL isContentUnknown;
- (BOOL)isSavingCollaborativeDocument;
- (BOOL)isSavingDocumentAs;
- (id)alternateDiffToMergeBeforeVersion:(NSUInteger)arg1 fileFormatVersion:(NSUInteger)arg2 fieldPath:(int )arg3;
- (id)alternateDiffToMergeBeforeVersion:(NSUInteger)arg1 fileFormatVersion:(NSUInteger)arg2 field:(int)arg3;
- (id)alternateDiffToMergeBeforeVersion:(NSUInteger)arg1 fileFormatVersion:(NSUInteger)arg2;
- (id)parentAlternateDiffToMergeBeforeVersion:(NSUInteger)arg1 fileFormatVersion:(NSUInteger)arg2 fieldPath:(int )arg3;
- (void)removeFieldAtEndOfPath:(int )arg1;
- (void)removeField:(int)arg1;
- (void)p_setPreserveNewerValueUntilModifiedRuleForFieldPath:(int )arg1 fileFormatVersion:(NSUInteger)arg2 featureIdentifier:(id)arg3;
- (void)setPreserveNewerValueUntilModifiedRuleForFieldPath:(int )arg1 fileFormatVersion:(NSUInteger)arg2 featureIdentifier:(id)arg3;
- (void)setPreserveNewerValueUntilModifiedRuleForFieldPath:(int )arg1 fileFormatVersion:(NSUInteger)arg2;
- (void)setPreserveNewerValueUntilModifiedRuleForField:(int)arg1 fileFormatVersion:(NSUInteger)arg2 featureIdentifier:(id)arg3;
- (void)setPreserveNewerValueUntilModifiedRuleForField:(int)arg1 fileFormatVersion:(NSUInteger)arg2;
- (void)p_setPreserveNewerValueRuleForFieldPath:(int )arg1 fileFormatVersion:(NSUInteger)arg2 featureIdentifier:(id)arg3;
- (void)setPreserveNewerValueRuleForFieldPath:(int )arg1 fileFormatVersion:(NSUInteger)arg2 featureIdentifier:(id)arg3;
- (void)setPreserveNewerValueRuleForFieldPath:(int )arg1 fileFormatVersion:(NSUInteger)arg2;
- (void)setPreserveNewerValueRuleForField:(int)arg1 fileFormatVersion:(NSUInteger)arg2 featureIdentifier:(id)arg3;
- (void)setPreserveNewerValueRuleForField:(int)arg1 fileFormatVersion:(NSUInteger)arg2;
// - (const struct FieldPath )baseFieldPathAndReturnShouldDeleteReturnedValue:(BOOL )arg1;
@property(readonly, nonatomic) const RepeatedPtrField_02f83fb8 fieldPathsToRemove;
- (void)dealloc;
// - (id)initWithObject:(id)arg1 version:(NSUInteger)arg2 fieldPath:(const struct FieldPath )arg3 isDiff:(BOOL)arg4 diffReadVersion:(NSUInteger)arg5 parentArchiver:(id)arg6;
- (id)initWithObject:(id)arg1;

@end


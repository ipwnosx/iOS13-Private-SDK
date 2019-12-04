//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (FCAccountActionQueue)
+ (id)fc_dictionaryByAddingEntriesFromDictionary:(id)arg1 toDictionary:(id)arg2;
+ (id)fc_dictionaryWithKeys:(id)arg1 valueWithIndexBlock:(id /* block */)arg2;
+ (id)fc_dictionaryWithKeys:(id)arg1 valueBlock:(id /* block */)arg2;
+ (id)fc_dictionaryWithKeys:(id)arg1 allowingNil:(_Bool)arg2 valueBlock:(id /* block */)arg3;
+ (id)fc_dictionaryWithObjects:(id)arg1 keyBlock:(id /* block */)arg2;
+ (id)fc_dictionaryFromArray:(id)arg1 keyBlock:(id /* block */)arg2 valueBlock:(id /* block */)arg3;
+ (id)fc_dictionaryFromJSON:(id)arg1;
+ (id)fc_dictionaryFromJSON:(id)arg1 error:(id *)arg2;
+ (id)fc_dictionary:(id /* block */)arg1;
- (id)fc_actionTypes;
- (_Bool)fc_localDataHint;
- (id)fc_transactions;
- (id)fc_safeObjectForKey:(id)arg1;
- (id)fc_dictionaryByMergingDictionary:(id)arg1 withValueCombiner:(id /* block */)arg2;
- (id)fc_jsonString;
- (id)fc_jsonStringWithObjectHandler:(id /* block */)arg1 arrayObjectHandler:(id /* block */)arg2 dictionaryKeyHandler:(id /* block */)arg3 dictionaryValueHandler:(id /* block */)arg4;
- (id)fc_jsonEncodableDictionary;
- (id)fc_jsonEncodableDictionaryWithObjectHandler:(id /* block */)arg1 arrayObjectHandler:(id /* block */)arg2 dictionaryKeyHandler:(id /* block */)arg3 dictionaryValueHandler:(id /* block */)arg4;
- (id)fc_jsonStringWithOmittedUnsupportedDataTypes;
- (id)fr_descriptionWithKeyComparator:(id /* block */)arg1;
- (id)fc_dictionaryBySwappingValuesAndKeys;
- (id)fc_deepCopy;
- (id)fc_subdictionaryWithCopiesForKeys:(id)arg1;
- (id)fc_subdictionaryForKeys:(id)arg1;
- (id)nf_objectsForKeysWithoutMarker:(id)arg1;
- (id)fc_dictionaryByRemovingObjectForKey:(id)arg1;
- (id)fc_dictionaryByTransformingValuesWithBlock:(id /* block */)arg1;
- (id)fc_dictionaryByTransformingValuesWithKeyAndValueBlock:(id /* block */)arg1;
- (id)fc_sortedEntriesWithKeyBlock:(id /* block */)arg1;
- (id)fc_dictionaryByTransformingKeysWithBlock:(id /* block */)arg1;
- (id)fc_dictionaryByTransformingKeysWithKeyAndValueBlock:(id /* block */)arg1;
@end

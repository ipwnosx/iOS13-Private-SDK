//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PLPhotoLibrary;
@protocol PLSiriVocabularyService;

@interface PLSiriVocabularyUpdater : NSObject
{
    id <PLSiriVocabularyService> _vocabularyService;
    PLPhotoLibrary *_photoLibrary;
}

+ (void)updateAllVocabulariesInLibrary:(id)arg1 withService:(id)arg2;
// - (void).cxx_destruct;
- (id)personNamesFromDictionaries:(id)arg1;
- (void)updateContactVocabularyFromPersonDictionaries:(id)arg1;
- (id)_fetchPersonDictionariesInContext:(id)arg1;
- (void)_updateContactsVocabularyInContext:(id)arg1;
- (id)localizedTitleForAlbumDictionary:(id)arg1;
- (id)albumTitlesFromDictionaries:(id)arg1;
- (void)updateAlbumVocabularyFromAlbumDictionaries:(id)arg1;
- (id)_fetchAlbumDictionariesInContext:(id)arg1;
- (void)_updateAlbumsVocabularyInContext:(id)arg1;
- (void)updateAllVocabularies;
- (id)initWithVocabularyService:(id)arg1 photoLibrary:(id)arg2;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaMiningKit/CLSInputClue.h>

@class CLSPerson, PHPhotoLibrary;

@interface CLSInputPeopleClue : CLSInputClue
{
    CLSPerson *_person;
    PHPhotoLibrary *_photoLibrary;
    unsigned long long _numberOfFaces;
}

+ (id)cluesWithPeopleUUIDs:(id)arg1 inPhotoLibrary:(id)arg2;
+ (id)clueWithPeopleUUID:(id)arg1 inPhotoLibrary:(id)arg2;
+ (id)cluesWithPeoples:(id)arg1;
+ (id)clueWithPeople:(id)arg1;
@property(nonatomic) unsigned long long numberOfFaces; // @synthesize numberOfFaces=_numberOfFaces;
@property(nonatomic) __weak PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
- (_Bool)isEqualToClue:(id)arg1;
- (void)_prepareWithProgressBlock:(id /* block */)arg1;
- (id)description;
@property(retain, nonatomic) CLSPerson *person; // @synthesize person=_person;
- (id)name;

@end

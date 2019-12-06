//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CPMLDB, CPMLSchema, CPMLStorageManager, NSDictionary;
@protocol CPMLAlgorithmProtocol;

@interface CPMLTrainer : NSObject
{
    BOOL shouldFail;
//     struct sqlite3 modelDB;
    NSDictionary *modelPlist;
    CPMLDB *cpmlDB;
//     struct CPMLCDB cpCDB;
//     struct CPMLAlgorithm cpMLAlgo;
//     struct CPMLRemapper cpRemapper;
    CPMLSchema *cpmlSchema;
//     struct CPMLStatistics trainerCPStatistics;
//     struct CPMLSerialization trainerCPSerializer;
//     struct CPMLTunableData cpTuneableData;
    int mapFunction;
//     struct CPMLDelegate _cpmlDelegate;
    CPMLStorageManager *_storageManager;
    id <CPMLAlgorithmProtocol> _theDelegate;
}

// - (void).cxx_destruct;
- (void)buildTrainingMachineLearningAlgorithm:(id)arg1;
- (void)train:(BOOL)arg1;
- (id)fileProtectionClassRequest:(id)arg1;
- (void)dealloc;
- (id)init:(id)arg1 withModelDBPath:(id)arg2 withPropertyList:(id)arg3;
- (id)getSolution;

@end


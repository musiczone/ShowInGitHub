/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol DVTDiffTextFilter <NSObject>
+ (BOOL)pathRequiresFilter:(id)arg1;
+ (id)textFileDataTypeForInputFilePath:(id)arg1;

@optional
+ (BOOL)filterInputFilePath:(id)arg1 toOutputFilePath:(id)arg2 error:(id *)arg3;
+ (id)pathToKeyConflictResolutionFromInputFilePath:(id)arg1 error:(id *)arg2;
+ (id)pathToTextFileFromInputFilePath:(id)arg1 error:(id *)arg2;
@end


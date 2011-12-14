/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"

@class DVTSourceExpression, DVTStackBacktrace, IDEIndexSymbol, IDERefactoring, NSMutableDictionary, NSOperationQueue;

@interface IDERefactoringSession : NSObject <DVTInvalidation>
{
    IDERefactoring *_refactoring;
    id <IDERefactoringTransformation> _transformation;
    DVTSourceExpression *_sourceExpression;
    IDEIndexSymbol *_selectedSymbol;
    id <IDERefactoringSessionDelegate> _delegate;
    NSOperationQueue *_queue;
    NSMutableDictionary *_cachedBuildSettingsForCompilationUnits;
    BOOL _isInvalidated;
    DVTStackBacktrace *_invalidationBacktrace;
}

- (void)cancel;
@property id <IDERefactoringSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithRefactoring:(id)arg1 transformation:(id)arg2 sourceExpression:(id)arg3;
- (void)invalidate;
@property(readonly) DVTStackBacktrace *invalidationBacktrace; // @synthesize invalidationBacktrace=_invalidationBacktrace;
@property(readonly, getter=isValid) BOOL valid;
- (void)previewChanges:(id)arg1;
@property IDEIndexSymbol *selectedSymbol; // @synthesize selectedSymbol=_selectedSymbol;
- (id)snapshotDescription;
- (void)start;
@property(readonly) id <IDERefactoringTransformation> transformation; // @synthesize transformation=_transformation;

@end


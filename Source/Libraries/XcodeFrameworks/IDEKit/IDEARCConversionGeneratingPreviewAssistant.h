/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEARCConversionAssistant.h>

@class NSString;

@interface IDEARCConversionGeneratingPreviewAssistant : IDEARCConversionAssistant
{
    NSString *_message;
}

+ (id)keyPathsForValuesAffectingCanGoForward;
- (BOOL)canGoBack;
- (BOOL)canGoForward;
- (void)loadView;
@property(copy) NSString *message; // @synthesize message=_message;
- (id)nextAssistantIdentifier;

@end


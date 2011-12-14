/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CAGradientLayer.h"

#import "IDENavigationHUDDisposableLayer-Protocol.h"
#import "IDENavigationHUDSelectableLayer-Protocol.h"
#import "IDENavigationHUDWindowLevelNavigableLayer-Protocol.h"

@class IDENavigationHUDController, IDENavigationHUDSelection;

@interface IDENavigationHUDAbstractWorkspaceWindowLayer : CAGradientLayer <IDENavigationHUDSelectableLayer, IDENavigationHUDWindowLevelNavigableLayer, IDENavigationHUDDisposableLayer>
{
    IDENavigationHUDController *_navigationHUDController;
}

- (void)dispose;
- (id)initWithNavigationHUDController:(id)arg1;
@property(readonly) IDENavigationHUDController *navigationHUDController; // @synthesize navigationHUDController=_navigationHUDController;
@property(readonly) IDENavigationHUDSelection *representativeSelection;
@property(readonly) BOOL representativeSelectionIsFinalForSingleMouseUp;
- (id)selectionForNavigatingDown;
- (id)selectionForNavigatingLeft;
- (id)selectionForNavigatingLeftOneTab;
- (id)selectionForNavigatingRight;
- (id)selectionForNavigatingRightOneTab;
- (id)selectionForNavigatingUp;

@end


/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CAGradientLayer.h"

#import <IDEKit/IDENavigationHUDBorderedLayer-Protocol.h>

@class CALayer;

@interface IDENavigationHUDBorderedGradientLayer : CAGradientLayer <IDENavigationHUDBorderedLayer>
{
    int _borderSides;
    int _highlightSides;
    CALayer *_horizontalHighlightLayer;
    CALayer *_verticalHighlightLayer;
    CALayer *_rightBorderLayer;
    CALayer *_leftBorderLayer;
    CALayer *_bottomBorderLayer;
    CALayer *_topBorderLayer;
}

@property int borderSides;
- (BOOL)hasVerticalHighlight;
@property int highlightSides;
- (id)init;
- (void)layoutSublayers;

@end


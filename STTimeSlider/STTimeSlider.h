//
//  STTimeSlider.h
//  STTimeSliderExample
//
//  Created by Sebastien Thiebaud on 4/1/13.
//  Copyright (c) 2013 Sebastien Thiebaud. All rights reserved.
//

#import <UIKit/UIKit.h>

@class STTimeSlider;
@protocol STTimeSliderDelegate <NSObject>

@optional
- (void)timeSlider:(STTimeSlider *)timeSlider didSelectPointAtIndex:(int)index;
- (void)timeSlider:(STTimeSlider *)timeSlider hadMovedAtIndex:(int)index;

@end

@interface STTimeSlider : UIView
{
    UIBezierPath *_drawPath;
    CGContextRef _context;
    
    UIBezierPath *_movePath;
    UIBezierPath *_cursorPath;
}

@property (nonatomic, assign) float spaceBetweenPoints;
@property (nonatomic, assign) float numberOfPoints;
@property (nonatomic, assign) float heightLine;
@property (nonatomic, assign) float radiusPoint;
@property (nonatomic, assign) CGSize shadowSize;
@property (nonatomic, assign) float shadowBlur;
@property (nonatomic, assign) float strokeSize;
@property (nonatomic, retain) UIColor *strokeColor;
@property (nonatomic, retain) UIColor *shadowColor;
@property (nonatomic, assign) CGGradientRef gradient;

@property (nonatomic, assign, readonly) int currentIndex;

@property (nonatomic, assign) CGGradientRef gradientForeground;
@property (nonatomic, assign) float strokeSizeForeground;
@property (nonatomic, retain) UIColor *strokeColorForeground;
@property (nonatomic, assign) float radiusCircle;

@property (nonatomic, retain) id<STTimeSliderDelegate> delegate;

@end

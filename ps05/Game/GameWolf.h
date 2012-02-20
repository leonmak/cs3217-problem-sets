//
//  GameWolf.h
//  Game
//
//  Created by Yang Shun Tay on 28/1/12.
//  Copyright (c) 2012 National University of Singapore. All rights reserved.
//

#import "GameObject.h"
#import "GameArrow.h"

@interface GameWolf : GameObject {
  UIImage *wolfImage;
  UIImage *wolfDieImage;
	UIViewController *gameArrow;
  NSMutableArray *wolfSpriteBlow;
  NSMutableArray *wolfSpriteDie;
  int currentSpriteFrame;
  NSTimer *wolfBreatheTimer;
}

- (id)initWithFrame:(CGRect)customFrame andState:(BOOL)state;
- (UIImageView*)wolfImageView:(CGRect)frame;
- (CGRect)frameInGameArea:(CGPoint)point;
- (void)startWolfBlow;
- (void)wolfBlowAnimation; 

@property (nonatomic, strong) UIImage* wolfImage;

@end

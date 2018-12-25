//
//  DDYTransitionManager.m
//  DDYTransition
//
//  Created by SmartMesh on 2018/12/3.
//  Copyright © 2018年 com.smartmesh. All rights reserved.
//

#import "DDYTransitionManager.h"

@implementation DDYTransitionConfig

- (instancetype)init {
    if (self = [super init]) {
        _animationTime = 0.4;
        _animationType = DDYTransitionAnimationDefault;
        _backGestureEnable = YES;
        _backGestureType = DDYTransitionGesturePanRight;
        _autoShowAndHideNavigationBar = YES;
    }
    return self;
}

@end

@implementation DDYTransitionManager

@end

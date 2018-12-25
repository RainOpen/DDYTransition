#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

// MARK: - 自定义动画类型
typedef NS_ENUM(NSInteger, DDYTransitionAnimation) {
    // !!!: 默认
    DDYTransitionAnimationDefault,
    
    // !!!: 系统样式
    DDYTransitionAnimationFade = 1, // 淡入淡出
    
    DDYTransitionAnimationPushFromRight,
    DDYTransitionAnimationPushFromLeft,
    DDYTransitionAnimationPushFromTop,
    DDYTransitionAnimationPushFromBottom, // 挤压(原内容会产生相应移动效果)
    
    DDYTransitionAnimationRevealFromRight,
    DDYTransitionAnimationRevealFromLeft,
    DDYTransitionAnimationRevealFromTop,
    DDYTransitionAnimationRevealFromBottom, // 揭开
    
    DDYTransitionAnimationMoveInFromRight,
    DDYTransitionAnimationMoveInFromLeft,
    DDYTransitionAnimationMoveInFromTop,
    DDYTransitionAnimationMoveInFromBottom, // 覆盖(类似push，但是原内容无移动效果)
    
    DDYTransitionAnimationCubeFromRight,
    DDYTransitionAnimationCubeFromLeft,
    DDYTransitionAnimationCubeFromTop,
    DDYTransitionAnimationCubeFromBottom, // 立方体
    
    DDYTransitionAnimationSuckEffect, // 吮吸
    
    DDYTransitionAnimationOglFlipFromRight,
    DDYTransitionAnimationOglFlipFromLeft,
    DDYTransitionAnimationOglFlipFromTop,
    DDYTransitionAnimationOglFlipFromBottom, // 翻转
    
    DDYTransitionAnimationRippleEffect, // 波纹
    
    DDYTransitionAnimationPageCurlFromRight,
    DDYTransitionAnimationPageCurlFromLeft,
    DDYTransitionAnimationPageCurlFromTop,
    DDYTransitionAnimationPageCurlFromBottom, // 翻页
    
    DDYTransitionAnimationPageUnCurlFromRight,
    DDYTransitionAnimationPageUnCurlFromLeft,
    DDYTransitionAnimationPageUnCurlFromTop,
    DDYTransitionAnimationPageUnCurlFromBottom, // 反翻页
    
    DDYTransitionAnimationCameraIrisHollowOpen, // 开镜头
    DDYTransitionAnimationCameraIrisHollowClose, // 关镜头
    
    // !!!: 自定义样式
    DDYTransitionAnimationPageTransition,
    
    DDYTransitionAnimationViewMoveToNewxtVC,
    DDYTransitionAnimationViewMoveNormalToNextVC,
    
    DDYTransitionAnimationCover,
    
    DDYTransitionAnimationSpreadFromRight,
    DDYTransitionAnimationSpreadFromLeft,
    DDYTransitionAnimationSpreadFromTop,
    DDYTransitionAnimationSpreadFromBottom,
    DDYTransitionAnimationSpreadFromPoint,
    
    DDYTransitionAnimationBoom,
    
    DDYTransitionAnimationBrickOpenVertical,
    DDYTransitionAnimationBrickOpenHorizontal,
    DDYTransitionAnimationBrickCloseVertical,
    DDYTransitionAnimationBrickCloseHorizontal,
    
    DDYTransitionAnimationInsideThenPush,
    
    DDYTransitionAnimationFragmentShowFromRight,
    DDYTransitionAnimationFragmentShowFromLeft,
    DDYTransitionAnimationFragmentShowFromTop,
    DDYTransitionAnimationFragmentShowFromBottom,
    
    DDYTransitionAnimationFragmentHideFromRight,
    DDYTransitionAnimationFragmentHideFromLeft,
    DDYTransitionAnimationFragmentHideFromTop,
    DDYTransitionAnimationFragmentHideFromBottom,
    
    DDYTransitionAnimationTipFlip,
};


typedef NS_ENUM (NSInteger, DDYTransitionType) {
    DDYTransitionTypePush = 1,
    DDYTransitionTypePop,
    DDYTransitionTypePresent,
    DDYTransitionTypeDismiss,
};

typedef NS_ENUM (NSInteger, DDYTransitionGesture) {
    DDYTransitionGestureNone,
    DDYTransitionGesturePanLeft,
    DDYTransitionGesturePanRight,
    DDYTransitionGesturePanUp,
    DDYTransitionGesturePanDown,
};

@interface DDYTransitionConfig : NSObject
/** 动画类型 */
@property (nonatomic, assign) DDYTransitionAnimation animationType;
/** 转场类型 */
@property (nonatomic, assign) DDYTransitionType transitionType;
/** 转场时间 */
@property (nonatomic, assign) NSTimeInterval animationTime;
/** 是否采用系统原生返回方式 */
@property (nonatomic, assign) BOOL isSystemBackAnimation;
/** 是否通过手势返回 */
@property (nonatomic, assign) BOOL backGestureEnable;
/** 返回上个界面的手势 默认：右滑 ：WXSGestureTypePanRight */
@property (nonatomic,assign) DDYTransitionGesture backGestureType;
/** 在动画之前隐藏NavigationBar,动画结束后显示,默认为YES */
@property (nonatomic, assign) BOOL autoShowAndHideNavigationBar;
/** View move 等动画中指定的起始视图 */
@property (nonatomic, strong) UIView *startView;
/** View move 等动画中指定的结束视图 */
@property (nonatomic, strong) UIView *targetView;

@end

@interface DDYTransitionManager : NSObject<UIViewControllerAnimatedTransitioning>

/** 动画类型 */
@property (nonatomic, assign) DDYTransitionAnimation animationType;
/** 转场类型 */
@property (nonatomic, assign) DDYTransitionType transitionType;
/** 转场时间 */
@property (nonatomic, assign) NSTimeInterval animationTime;

@end


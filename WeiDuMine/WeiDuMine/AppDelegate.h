//
//  AppDelegate.h
//  WeiDuMine
//
//  Created by 言寺 on 2019/6/10.
//  Copyright © 2019年 言寺. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end


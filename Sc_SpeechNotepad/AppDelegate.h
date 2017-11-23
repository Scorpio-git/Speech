//
//  AppDelegate.h
//  Sc_SpeechNotepad
//
//  Created by 王文建 on 23/11/2017.
//  Copyright © 2017 Scorp. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end


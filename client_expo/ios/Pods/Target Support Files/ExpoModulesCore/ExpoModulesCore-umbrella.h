#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "EXAppDelegatesLoader.h"
#import "EXAppDelegateWrapper.h"
#import "EXLegacyAppDelegateWrapper.h"
#import "ExpoBridgeModule.h"
#import "EXAppDefines.h"
#import "EXDefines.h"
#import "EXLegacyExpoViewProtocol.h"
#import "ExpoModulesCore.h"
#import "EXBarcodeScannerInterface.h"
#import "EXBarcodeScannerProviderInterface.h"
#import "EXCameraInterface.h"
#import "EXConstantsInterface.h"
#import "EXFaceDetectorManagerInterface.h"
#import "EXFaceDetectorManagerProviderInterface.h"
#import "EXFilePermissionModuleInterface.h"
#import "EXFileSystemInterface.h"
#import "EXImageLoaderInterface.h"
#import "EXPermissionsInterface.h"
#import "EXPermissionsMethodsDelegate.h"
#import "EXUserNotificationCenterProxyInterface.h"
#import "EXAccelerometerInterface.h"
#import "EXBarometerInterface.h"
#import "EXDeviceMotionInterface.h"
#import "EXGyroscopeInterface.h"
#import "EXMagnetometerInterface.h"
#import "EXMagnetometerUncalibratedInterface.h"
#import "EXTaskConsumerInterface.h"
#import "EXTaskInterface.h"
#import "EXTaskLaunchReason.h"
#import "EXTaskManagerInterface.h"
#import "EXTaskServiceInterface.h"
#import "EXJavaScriptObject.h"
#import "EXJavaScriptRuntime.h"
#import "EXJavaScriptTypedArray.h"
#import "EXJavaScriptValue.h"
#import "EXJavaScriptWeakObject.h"
#import "EXJSIConversions.h"
#import "EXJSIInstaller.h"
#import "EXJSIUtils.h"
#import "ExpoModulesHostObject.h"
#import "EXRawJavaScriptFunction.h"
#import "EXSharedObjectUtils.h"
#import "EXBridgeModule.h"
#import "EXExportedModule.h"
#import "EXSingletonModule.h"
#import "EXUnimodulesCompat.h"
#import "EXUtilities.h"
#import "EXModuleRegistry.h"
#import "EXModuleRegistryDelegate.h"
#import "EXModuleRegistryAdapter.h"
#import "EXModuleRegistryHolderReactModule.h"
#import "EXModuleRegistryProvider.h"
#import "EXNativeModulesProxy.h"
#import "EXAppLifecycleListener.h"
#import "EXAppLifecycleService.h"
#import "EXEventEmitter.h"
#import "EXEventEmitterService.h"
#import "EXInternalModule.h"
#import "EXJavaScriptContextProvider.h"
#import "EXKernelService.h"
#import "EXLogHandler.h"
#import "EXModuleRegistryConsumer.h"
#import "EXUIManager.h"
#import "EXUtilitiesInterface.h"
#import "EXLogManager.h"
#import "EXReactLogHandler.h"
#import "EXReactNativeAdapter.h"
#import "EXReactNativeEventEmitter.h"
#import "EXPermissionsService.h"
#import "EXReactNativeUserNotificationCenterProxy.h"
#import "Platform.h"
#import "RCTComponentData+Privates.h"
#import "EXReactDelegateWrapper.h"
#import "EXReactRootViewFactory.h"
#import "RCTAppDelegate+Recreate.h"
#import "BridgelessJSCallInvoker.h"
#import "EventEmitter.h"
#import "JSIUtils.h"
#import "LazyObject.h"
#import "NativeModule.h"
#import "ObjectDeallocator.h"
#import "SharedObject.h"
#import "TestingSyncJSCallInvoker.h"
#import "TypedArray.h"

FOUNDATION_EXPORT double ExpoModulesCoreVersionNumber;
FOUNDATION_EXPORT const unsigned char ExpoModulesCoreVersionString[];

